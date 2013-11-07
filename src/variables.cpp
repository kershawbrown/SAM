#include <wx/datstrm.h>
#include <wx/wfstream.h>
#include <wx/ffile.h>
#include <wx/tokenzr.h>

#include "variables.h"



VarTable::VarTable()
{
	/* nothing to do */
}

VarTable::~VarTable()
{
	VarTable::clear();
}

void VarTable::clear()
{
	for( iterator it = begin(); it != end(); ++it )
		delete it->second;

	VarTableBase::clear();
}

wxArrayString VarTable::ListAll( std::vector<VarValue*> *vals )
{
	wxArrayString list;
	for( iterator it = begin(); it != end(); ++it )
	{
		list.Add( it->first );
		if ( vals ) vals->push_back( it->second );
	}
	return list;
}

VarValue *VarTable::Create( const wxString &name )
{
	VarValue *vv = 0;
	iterator it = find( name );
	if ( it == end() )
	{
		vv = new VarValue;
		(*this)[ name ] = vv;
	}
	else
		vv = it->second;

	return vv;
}

VarValue *VarTable::Set( const wxString &name, const VarValue &val )
{
	VarValue *vv = 0;
	iterator it = find( name );
	if ( it == end() )
	{
		vv = new VarValue(val);
		(*this)[ name ] = vv;
	}
	else
	{
		it->second->Copy(val);
		vv = it->second;
	}
	return vv;
}

VarValue *VarTable::Get( const wxString &name )
{
	iterator it = find( name );
	if ( it == end() ) return 0;
	else return it->second;
}

void VarTable::Copy( const VarTable &rhs )
{
	VarTable::clear();
	for( const_iterator it = rhs.begin();
		it != rhs.end();
		++it )
		Set( it->first, *(it->second) );
}

void VarTable::Write( wxOutputStream &_O )
{
	wxDataOutputStream out(_O);
	out.Write8( 0xf9 );
	out.Write8( 1 );

	out.Write32( size() );
	for( iterator it = begin(); it != end(); ++it )
	{
		out.WriteString( it->first );
		it->second->Write( _O );
	}

	out.Write8( 0xf9 );
}

bool VarTable::Read( wxInputStream &_I )
{
	clear();
	
	wxDataInputStream in(_I);
	wxUint8 code = in.Read8();
	wxUint8 ver = in.Read8();

	bool ok = true;
	size_t n = in.Read32();
	for ( size_t i=0;i<n;i++ )
	{
		wxString name = in.ReadString();
		VarValue *value = new VarValue;
		ok = ok && value->Read( _I );
		
		if ( find(name) == end() ) (*this)[name] = value;
		else delete value;
	}
	
	return in.Read8() == code;
}

VarValue::VarValue()
{
	m_type = VV_INVALID;
}

VarValue::VarValue( int i )
{
	m_type = VV_NUMBER;
	m_val = (float)i;
}

VarValue::VarValue( float f )
{
	m_type = VV_NUMBER;
	m_val = f;
}

VarValue::VarValue( float *arr, size_t n )
{
	m_type = VV_ARRAY;
	m_val.assign( arr, n );
}

VarValue::VarValue( float *mat, size_t r, size_t c )
{
	m_type = VV_MATRIX;
	m_val.assign( mat, r, c );
}

VarValue::VarValue( const ::matrix_t<float> &m )
{
	m_type = VV_MATRIX;
	m_val = m;
}

VarValue::VarValue( const wxString &s )
{
	m_type = VV_STRING;
	m_str = s;
}

VarValue::VarValue( const VarTable &t )
{
	m_type = VV_TABLE;
	m_tab.Copy( t );
}

VarValue::VarValue( const VarValue &vv )
{
	Copy( vv );
}

VarValue::~VarValue()
{
	// nothing to do 
}

VarValue &VarValue::operator=( const VarValue &rhs )
{
	Copy( rhs );
	return *this;
}

void VarValue::Copy( const VarValue &rhs )
{
	if ( this != &rhs )
	{
		m_type = rhs.m_type;
		m_str = rhs.m_str;
		m_val = rhs.m_val;
		m_tab = rhs.m_tab;
	}
}


void VarValue::Write( wxOutputStream &_O )
{
	wxDataOutputStream out( _O );

	out.Write8( 0xf2 );
	out.Write8( 1 );

	out.Write8( m_type );
	
	switch( m_type )
	{
	case VV_INVALID:
		break; // no data to be written
	case VV_NUMBER:
	case VV_ARRAY:
	case VV_MATRIX:
		out.Write32( m_val.nrows() );
		out.Write32( m_val.ncols() );
		for ( size_t r=0;r<m_val.nrows();r++ )
			for( size_t c=0;c<m_val.ncols();c++ )
				out.WriteFloat( m_val(r,c) );
		break;
	case VV_TABLE:
		m_tab.Write( _O );
		break;
	case VV_STRING:
		out.WriteString( m_str );
		break;
	}

	out.Write8( 0xf2 );
}

bool VarValue::Read( wxInputStream &_I )
{
	wxDataInputStream in( _I );

	wxUint8 code = in.Read8();
	wxUint8 ver = in.Read8();

	m_type = in.Read8();

	size_t nr, nc;
	switch( m_type )
	{
	case VV_INVALID:
		break;
	case VV_NUMBER:
	case VV_ARRAY:
	case VV_MATRIX:
		nr = in.Read32();
		nc = in.Read32();
		if ( nr*nc < 1 ) return false; // big error
		m_val.resize_fill( nr, nc, 0.0f );
		for ( size_t r=0;r<nr;r++ )
			for( size_t c=0;c<nc;c++ )
				m_val(r,c) = in.ReadFloat();
		break;
	case VV_TABLE:
		m_tab.Read( _I );
		break;
	case VV_STRING:
		m_str = in.ReadString();
		break;
	}

	return in.Read8() == code;
}
	
int VarValue::Type() { return m_type; }
void VarValue::SetType( int ty ) { m_type = ty; }
void VarValue::Set( int val ) { m_type = VV_NUMBER; m_val = (float)val; }
void VarValue::Set( float val ) { m_type = VV_NUMBER; m_val = val; }
void VarValue::Set( double val ) { m_type = VV_NUMBER; m_val = val; }
void VarValue::Set( float *val, size_t n ) { m_type = VV_ARRAY; m_val.assign( val, n ); }
void VarValue::Set( float *mat, size_t r, size_t c ) { m_type = VV_MATRIX; m_val.assign( mat, r, c ); }
void VarValue::Set( const ::matrix_t<float> &mat ) { m_type = VV_MATRIX; m_val = mat; }
void VarValue::Set( const wxString &str ) { m_type = VV_STRING; m_str = str; }
void VarValue::Set( const VarTable &tab ) { m_type = VV_TABLE; m_tab.Copy( tab ); }

int VarValue::Integer()
{
	if ( m_type == VV_NUMBER ) return (int)(float)m_val;
	else return 0;
}

float VarValue::Value()
{
	if ( m_type == VV_NUMBER) return (float)m_val;
	else return std::numeric_limits<float>::quiet_NaN();
}

float *VarValue::Array( size_t *n )
{
	if ( m_type == VV_ARRAY )
	{
		if ( n != 0 ) *n = m_val.length();
		return m_val.data();
	}
	else
	{
		if ( n != 0 ) *n = 0;
		return 0;
	}
}

std::vector<float> VarValue::Array()
{
	if ( m_type == VV_ARRAY )
	{
		std::vector<float> vec( m_val.length(), 0.0f );
		for( size_t i=0;i<m_val.length();i++)
			vec[i] = m_val[i];
		return vec;
	}
	else
		return std::vector<float>();
}

matrix_t<float> &VarValue::Matrix()
{
	return m_val;
}

wxString VarValue::String()
{
	return m_str;
}

VarTable &VarValue::Table()
{
	return m_tab;
}

bool VarValue::Read( const lk::vardata_t &val, bool change_type )
{
	switch (val.type())
	{
	case lk::vardata_t::NUMBER:
		if ( Type() == VV_NUMBER || change_type ) Set( (float) val.as_number() );
		break;
	case lk::vardata_t::STRING:
		if ( Type() == VV_STRING || change_type ) Set( val.as_string() );
		break;
	case lk::vardata_t::VECTOR:
		{
			size_t dim1 = val.length(), dim2 = 0;
			for (size_t i=0;i<val.length();i++)
			{
				lk::vardata_t *row = val.index(i);
				if (row->type() == lk::vardata_t::VECTOR && row->length() > dim2 )
					dim2 = row->length();
			}

			if (dim2 == 0 && dim1 > 0)
			{
				float *vec = new float[dim1];
				for( size_t i=0;i<dim1;i++)
					vec[i] = (float)val.index(i)->as_number();


				if ( Type() == VV_ARRAY || change_type )
					Set( vec, dim1 );
				else if ( Type() == VV_MATRIX )
					Set( vec, dim1, 1 );

				delete [] vec;
			}
			else if ( dim1 > 0 && dim2 > 0 )
			{
				if ( Type() == VV_MATRIX || change_type )
				{
					m_type = VV_MATRIX;
					m_val.resize_fill( dim1, dim2, 0.0f );

					for ( size_t i=0;i<dim1;i++)
					{
						for ( size_t j=0;j<dim2;j++ )
						{
							double x = 0;
							if ( val.index(i)->type() == lk::vardata_t::VECTOR
								&& j < val.index(i)->length() )
								x = (float)val.index(i)->index(j)->as_number();

							m_val.at(i,j) = x;
						}
					}
				}
			}
		}
		break;
	case lk::vardata_t::HASH:		
		{
			if ( Type() == VV_TABLE || change_type )
			{
				Set( VarTable() ); // switch to an empty table
				
				lk::varhash_t &hash = *val.hash();
				for ( lk::varhash_t::iterator it = hash.begin();
					it != hash.end();
					++it )
				{
					VarValue *item = Table().Set( (*it).first, VarValue() );
					item->Read( *(*it).second );
				}
			}
		}
		break;
	}

	return true;
}

bool VarValue::Write( lk::vardata_t &val )
{
	switch( Type() )
	{
	case VV_NUMBER:
		val.assign( (double) Value() );
		break;
	case VV_STRING:
		val.assign( String() );
		break;
	case VV_ARRAY:
		{
			size_t n = 0;
			float *p = Array( &n );
			val.empty_vector();
			if ( n > 0 )
			{
				val.vec()->reserve( (size_t) n  );
				for (int i=0;i<n;i++)
					val.vec_append( (double)p[i] );
			}
		}
		break;
	case VV_MATRIX:
		{
			::matrix_t<float> &mat = Matrix();
			val.empty_vector();
			val.vec()->reserve( mat.nrows() );
			for (int i=0;i<mat.nrows();i++)
			{
				val.vec()->push_back( lk::vardata_t() );
				val.vec()->at(i).empty_vector();
				val.vec()->at(i).vec()->reserve( mat.ncols() );
				for (int j=0;j<mat.ncols();j++)
					val.vec()->at(i).vec_append( mat.at(i,j) );
			}
		}
		break;
	case VV_TABLE:
		{
			VarTable &tab = Table();
			for (VarTableBase::iterator it = tab.begin();
				it != tab.end();
				++ it )
			{
				lk::vardata_t &xvd = val.hash_item( it->first );
				it->second->Write( xvd );
			}
		}
		break;
	}

	return true;
}

void VarInfo::Write( wxOutputStream &os )
{
	wxDataOutputStream out(os);
	out.Write8( 0xe1 );
	out.Write8( 1 );

	out.WriteString( Name );
	out.Write32( Type );
	out.WriteString( Label );
	out.WriteString( Units );
	out.WriteString( Group );
	out.WriteString( wxJoin(IndexLabels, '|') );
	out.Write32( Flags );
	DefaultValue.Write( os );

	out.Write8( 0xe1 );
}

bool VarInfo::Read( wxInputStream &is )
{
	wxDataInputStream in(is);
	wxUint8 code = in.Read8();
	in.Read8(); // ver

	Name = in.ReadString();
	Type = in.Read32();
	Label = in.ReadString();
	Units = in.ReadString();
	Group = in.ReadString();
	IndexLabels = wxSplit( in.ReadString(), '|' );
	Flags = in.Read32();
	bool valok = DefaultValue.Read( is );
	wxUint8 lastcode = in.Read8();
	return  lastcode == code && valok;
}

VarDatabase::VarDatabase()
{
}

VarDatabase::~VarDatabase()
{
	Clear();
}

bool VarDatabase::LoadFile( const wxString &file )
{
	wxFFileInputStream ff( file );
	if ( !ff.IsOk() ) return false;
	return Read( ff );
}

void VarDatabase::Write( wxOutputStream &os )
{
	wxDataOutputStream out(os);
	out.Write8( 0xf8 );
	out.Write8( 1 );
	out.Write32( m_hash.size() );
	for( varinfo_hash_t::iterator it = m_hash.begin();
		it != m_hash.end();
		++it )
	{
		out.WriteString( it->first );
		it->second->Write( os );
	}
	out.Write8( 0xf8 );
}

bool VarDatabase::Read( wxInputStream &is )
{
	wxDataInputStream in(is);
	Clear();
	wxUint8 code = in.Read8();
	in.Read8();
	size_t n = in.Read32();
	bool ok = true;
	for( size_t i=0;i<n;i++ )
	{
		wxString name = in.ReadString();
		VarInfo *vv = new VarInfo;
		ok = ok && vv->Read( is );
		m_hash[name] = vv;
	}
	if ( !ok ) return false;

	return in.Read8() == code;
}

VarInfo *VarDatabase::Add( const wxString &name, int type,
	const wxString &label, const wxString &units,
	const wxString &group, const wxString &indexlabels, 
	unsigned long flags, const VarValue &defval )
{
	VarInfo *vv = 0;
	varinfo_hash_t::iterator it = m_hash.find( name );
	if ( it == m_hash.end() )
	{
		vv = new VarInfo;
		m_hash[name] = vv;
	}
	else
		vv = it->second;

	vv->Name = name;
	vv->Type = type;
	vv->Label = label;
	vv->Units = units;
	vv->Group = group;
	vv->IndexLabels = wxStringTokenize( indexlabels, "," );
	vv->Flags = flags;
	vv->DefaultValue = defval;

	return vv;
}

bool VarDatabase::Delete( const wxString &name )
{
	varinfo_hash_t::iterator it = m_hash.find( name );
	if ( it != m_hash.end() )
	{
		delete it->second;
		m_hash.erase( it );
		return true;
	}
	else return false;
}

bool VarDatabase::Rename( const wxString &old_name, const wxString &new_name )
{
	varinfo_hash_t::iterator it = m_hash.find( old_name );
	if ( it == m_hash.end() ) return false;

	if ( m_hash.find( new_name ) != m_hash.end() ) return false;

	VarInfo *vv = it->second;
	m_hash.erase( it );
	
	m_hash[ new_name ] = vv;
	return true;
}

void VarDatabase::Clear()
{
	// delete the variable info
	for ( varinfo_hash_t::iterator it = m_hash.begin();
		it != m_hash.end();
		++it )
		delete it->second;

	m_hash.clear();
}

wxArrayString VarDatabase::ListAll()
{
	wxArrayString list;
	for( varinfo_hash_t::iterator it = m_hash.begin(); it != m_hash.end(); ++it )
		list.Add( it->first );
	return list;
}

int VarDatabase::Type( const wxString &name )
{
	if ( VarInfo *v = Lookup(name) ) return v->Type;
	else return VV_INVALID;
}

wxString VarDatabase::Label( const wxString &name )
{
	if ( VarInfo *v = Lookup(name) ) return v->Label;
	else return "<not found>";
}

wxString VarDatabase::Group( const wxString &name )
{
	if ( VarInfo *v = Lookup(name) ) return v->Group;
	else return wxEmptyString;
}

wxString VarDatabase::Units( const wxString &name )
{
	if ( VarInfo *v = Lookup(name) ) return v->Units;
	else return wxEmptyString;
}

wxArrayString VarDatabase::IndexLabels( const wxString &name )
{
	if ( VarInfo *v = Lookup(name) ) return v->IndexLabels;
	else return wxArrayString();
}

unsigned long VarDatabase::Flags( const wxString &name )
{
	if ( VarInfo *v = Lookup(name) ) return v->Flags;
	else return 0;
}

VarValue &VarDatabase::InternalDefaultValue( const wxString &name )
{
	if ( VarInfo *v = Lookup(name) ) return v->DefaultValue;
	else return m_invVal;
}

VarInfo *VarDatabase::Lookup( const wxString &name )
{
	varinfo_hash_t::iterator it = m_hash.find(name);
	if ( it == m_hash.end() ) return 0;
	else return it->second;
}

