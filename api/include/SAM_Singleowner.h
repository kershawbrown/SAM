#ifndef SAM_SINGLEOWNER_H_
#define SAM_SINGLEOWNER_H_

#include "visibility.h"
#include "SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// Singleowner Technology Model
	//

	/** 
	 * Create a Singleowner variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_Singleowner;

	SAM_EXPORT SAM_Singleowner SAM_Singleowner_construct(const char* def, SAM_error* err);

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_Singleowner_execute(SAM_Singleowner data, int verbosity, SAM_error* err);

	SAM_EXPORT void SAM_Singleowner_destruct(SAM_Singleowner system);


	//
	// FinancialParameters parameters
	//

	/**
	 * Set analysis_period: Analyis period [years]
	 * options: None
	 * constraints: INTEGER,MIN=0,MAX=50
	 * required if: ?=30
	 */
	SAM_EXPORT void SAM_Singleowner_FinancialParameters_analysis_period_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set federal_tax_rate: Federal income tax rate [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_FinancialParameters_federal_tax_rate_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set inflation_rate: Inflation rate [%]
	 * options: None
	 * constraints: MIN=-99
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_FinancialParameters_inflation_rate_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set insurance_rate: Insurance rate [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_FinancialParameters_insurance_rate_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set prop_tax_assessed_decline: Assessed value annual decline [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=5
	 */
	SAM_EXPORT void SAM_Singleowner_FinancialParameters_prop_tax_assessed_decline_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set prop_tax_cost_assessed_percent: Percent of pre-financing costs assessed [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=95
	 */
	SAM_EXPORT void SAM_Singleowner_FinancialParameters_prop_tax_cost_assessed_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set property_tax_rate: Property tax rate [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_FinancialParameters_property_tax_rate_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set real_discount_rate: Real discount rate [%]
	 * options: None
	 * constraints: MIN=-99
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_FinancialParameters_real_discount_rate_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set state_tax_rate: State income tax rate [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_FinancialParameters_state_tax_rate_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set system_capacity: System nameplate capacity [kW]
	 * options: None
	 * constraints: POSITIVE
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_FinancialParameters_system_capacity_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set system_heat_rate: System heat rate [MMBTus/MWh]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_FinancialParameters_system_heat_rate_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// SystemCosts parameters
	//

	/**
	 * Set add_om_num_types: Number of O and M types
	 * options: None
	 * constraints: INTEGER,MIN=0,MAX=2
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_add_om_num_types_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set annual_fuel_usage: Fuel usage [kWht]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_annual_fuel_usage_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set om_capacity: Capacity-based System Costs amount [$/kWcap]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_capacity_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_capacity1: Battery capacity-based System Costs amount [$/kWcap]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_capacity1_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_capacity1_nameplate: Battery capacity for System Costs values [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_capacity1_nameplate_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set om_capacity2: Fuel cell capacity-based System Costs amount [$/kWcap]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_capacity2_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_capacity2_nameplate: Fuel cell capacity for System Costs values [kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_capacity2_nameplate_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set om_capacity_escal: Capacity-based System Costs escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_capacity_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set om_fixed: Fixed System Costs annual amount [$/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_fixed_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_fixed1: Battery fixed System Costs annual amount [$/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_fixed1_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_fixed2: Fuel cell fixed System Costs annual amount [$/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_fixed2_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_fixed_escal: Fixed System Costs escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_fixed_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set om_fuel_cost: Fuel cost [$/MMBtu]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_fuel_cost_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_fuel_cost_escal: Fuel cost escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_fuel_cost_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set om_opt_fuel_1_cost: Biomass feedstock cost [$/unit]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_opt_fuel_1_cost_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_opt_fuel_1_cost_escal: Biomass feedstock cost escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_opt_fuel_1_cost_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set om_opt_fuel_1_usage: Biomass feedstock usage [unit]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_opt_fuel_1_usage_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set om_opt_fuel_2_cost: Coal feedstock cost [$/unit]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_opt_fuel_2_cost_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_opt_fuel_2_cost_escal: Coal feedstock cost escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_opt_fuel_2_cost_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set om_opt_fuel_2_usage: Coal feedstock usage [unit]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_opt_fuel_2_usage_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set om_production: Production-based System Costs amount [$/MWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_production_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_production1: Battery production-based System Costs amount [$/MWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_production1_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_production1_values: Battery production for System Costs values [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_production1_values_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_production2: Fuel cell production-based System Costs amount [$/MWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_production2_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_production2_values: Fuel cell production for System Costs values [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_production2_values_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_production_escal: Production-based System Costs escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_production_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set om_replacement_cost1: Repacement cost 1 [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_replacement_cost1_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_replacement_cost2: Repacement cost 2 [$/kW]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_replacement_cost2_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set om_replacement_cost_escal: Replacement cost escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_om_replacement_cost_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set total_installed_cost: Installed cost [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_SystemCosts_total_installed_cost_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// TaxCreditIncentives parameters
	//

	/**
	 * Set itc_fed_amount: Federal amount-based ITC amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_fed_amount_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_fed_amount_deprbas_fed: Federal amount-based ITC reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_fed_amount_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_fed_amount_deprbas_sta: Federal amount-based ITC reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_fed_amount_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_fed_percent: Federal percentage-based ITC percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_fed_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_fed_percent_deprbas_fed: Federal percentage-based ITC reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_fed_percent_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_fed_percent_deprbas_sta: Federal percentage-based ITC reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_fed_percent_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_fed_percent_maxvalue: Federal percentage-based ITC maximum value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_fed_percent_maxvalue_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_sta_amount: State amount-based ITC amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_sta_amount_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_sta_amount_deprbas_fed: State amount-based ITC reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_sta_amount_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_sta_amount_deprbas_sta: State amount-based ITC reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_sta_amount_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_sta_percent: State percentage-based ITC percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_sta_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_sta_percent_deprbas_fed: State percentage-based ITC reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_sta_percent_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_sta_percent_deprbas_sta: State percentage-based ITC reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_sta_percent_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set itc_sta_percent_maxvalue: State percentage-based ITC maximum Value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_itc_sta_percent_maxvalue_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ptc_fed_amount: Federal PTC amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_ptc_fed_amount_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set ptc_fed_escal: Federal PTC escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_ptc_fed_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ptc_fed_term: Federal PTC term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=10
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_ptc_fed_term_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ptc_sta_amount: State PTC amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_ptc_sta_amount_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set ptc_sta_escal: State PTC escalation [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_ptc_sta_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ptc_sta_term: State PTC term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=10
	 */
	SAM_EXPORT void SAM_Singleowner_TaxCreditIncentives_ptc_sta_term_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// PaymentIncentives parameters
	//

	/**
	 * Set cbi_fed_amount: Federal CBI amount [$/Watt]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_fed_amount_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_fed_deprbas_fed: Federal CBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_fed_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_fed_deprbas_sta: Federal CBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_fed_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_fed_maxvalue: Federal CBI maximum [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_fed_maxvalue_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_fed_tax_fed: Federal CBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_fed_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_fed_tax_sta: Federal CBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_fed_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_oth_amount: Other CBI amount [$/Watt]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_oth_amount_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_oth_deprbas_fed: Other CBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_oth_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_oth_deprbas_sta: Other CBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_oth_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_oth_maxvalue: Other CBI maximum [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_oth_maxvalue_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_oth_tax_fed: Other CBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_oth_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_oth_tax_sta: Other CBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_oth_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_sta_amount: State CBI amount [$/Watt]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_sta_amount_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_sta_deprbas_fed: State CBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_sta_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_sta_deprbas_sta: State CBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_sta_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_sta_maxvalue: State CBI maximum [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_sta_maxvalue_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_sta_tax_fed: State CBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_sta_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_sta_tax_sta: State CBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_sta_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_uti_amount: Utility CBI amount [$/Watt]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_uti_amount_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_uti_deprbas_fed: Utility CBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_uti_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_uti_deprbas_sta: Utility CBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_uti_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_uti_maxvalue: Utility CBI maximum [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_uti_maxvalue_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_uti_tax_fed: Utility CBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_uti_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cbi_uti_tax_sta: Utility CBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_cbi_uti_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_fed_amount: Federal amount-based IBI amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_fed_amount_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_fed_amount_deprbas_fed: Federal amount-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_fed_amount_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_fed_amount_deprbas_sta: Federal amount-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_fed_amount_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_fed_amount_tax_fed: Federal amount-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_fed_amount_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_fed_amount_tax_sta: Federal amount-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_fed_amount_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_fed_percent: Federal percentage-based IBI percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_fed_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_fed_percent_deprbas_fed: Federal percentage-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_fed_percent_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_fed_percent_deprbas_sta: Federal percentage-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_fed_percent_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_fed_percent_maxvalue: Federal percentage-based IBI maximum value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_fed_percent_maxvalue_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_fed_percent_tax_fed: Federal percentage-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_fed_percent_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_fed_percent_tax_sta: Federal percentage-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_fed_percent_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_oth_amount: Other amount-based IBI amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_oth_amount_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_oth_amount_deprbas_fed: Other amount-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_oth_amount_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_oth_amount_deprbas_sta: Other amount-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_oth_amount_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_oth_amount_tax_fed: Other amount-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_oth_amount_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_oth_amount_tax_sta: Other amount-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_oth_amount_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_oth_percent: Other percentage-based IBI percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_oth_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_oth_percent_deprbas_fed: Other percentage-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_oth_percent_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_oth_percent_deprbas_sta: Other percentage-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_oth_percent_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_oth_percent_maxvalue: Other percentage-based IBI maximum value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_oth_percent_maxvalue_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_oth_percent_tax_fed: Other percentage-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_oth_percent_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_oth_percent_tax_sta: Other percentage-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_oth_percent_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_sta_amount: State amount-based IBI amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_sta_amount_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_sta_amount_deprbas_fed: State amount-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_sta_amount_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_sta_amount_deprbas_sta: State amount-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_sta_amount_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_sta_amount_tax_fed: State amount-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_sta_amount_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_sta_amount_tax_sta: State amount-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_sta_amount_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_sta_percent: State percentage-based IBI percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_sta_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_sta_percent_deprbas_fed: State percentage-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_sta_percent_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_sta_percent_deprbas_sta: State percentage-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_sta_percent_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_sta_percent_maxvalue: State percentage-based IBI maximum value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_sta_percent_maxvalue_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_sta_percent_tax_fed: State percentage-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_sta_percent_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_sta_percent_tax_sta: State percentage-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_sta_percent_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_uti_amount: Utility amount-based IBI amount [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_uti_amount_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_uti_amount_deprbas_fed: Utility amount-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_uti_amount_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_uti_amount_deprbas_sta: Utility amount-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_uti_amount_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_uti_amount_tax_fed: Utility amount-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_uti_amount_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_uti_amount_tax_sta: Utility amount-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_uti_amount_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_uti_percent: Utility percentage-based IBI percent [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_uti_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_uti_percent_deprbas_fed: Utility percentage-based IBI reduces federal depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_uti_percent_deprbas_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_uti_percent_deprbas_sta: Utility percentage-based IBI reduces state depreciation basis [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_uti_percent_deprbas_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_uti_percent_maxvalue: Utility percentage-based IBI maximum value [$]
	 * options: None
	 * constraints: None
	 * required if: ?=1e99
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_uti_percent_maxvalue_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_uti_percent_tax_fed: Utility percentage-based IBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_uti_percent_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ibi_uti_percent_tax_sta: Utility percentage-based IBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_ibi_uti_percent_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_fed_amount: Federal PBI amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_fed_amount_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set pbi_fed_escal: Federal PBI escalation [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_fed_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_fed_tax_fed: Federal PBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_fed_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_fed_tax_sta: Federal PBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_fed_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_fed_term: Federal PBI term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_fed_term_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_oth_amount: Other PBI amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_oth_amount_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set pbi_oth_escal: Other PBI escalation [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_oth_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_oth_tax_fed: Other PBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_oth_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_oth_tax_sta: Other PBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_oth_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_oth_term: Other PBI term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_oth_term_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_sta_amount: State PBI amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_sta_amount_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set pbi_sta_escal: State PBI escalation [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_sta_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_sta_tax_fed: State PBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_sta_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_sta_tax_sta: State PBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_sta_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_sta_term: State PBI term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_sta_term_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_uti_amount: Utility PBI amount [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_uti_amount_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set pbi_uti_escal: Utility PBI escalation [%]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_uti_escal_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_uti_tax_fed: Utility PBI federal taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_uti_tax_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_uti_tax_sta: Utility PBI state taxable [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_uti_tax_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_uti_term: Utility PBI term [years]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PaymentIncentives_pbi_uti_term_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// Battery parameters
	//

	/**
	 * Set batt_bank_replacement: Battery bank replacements per year [number/year]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Singleowner_Battery_batt_bank_replacement_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set batt_computed_bank_capacity: Battery bank capacity [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_Battery_batt_computed_bank_capacity_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set batt_meter_position: Position of battery relative to electric meter
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Singleowner_Battery_batt_meter_position_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set batt_replacement_option: Enable battery replacement? [0=none,1=capacity based,2=user schedule]
	 * options: None
	 * constraints: INTEGER,MIN=0,MAX=2
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Battery_batt_replacement_option_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set batt_replacement_schedule: Battery bank replacements per year (user specified) [number/year]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Singleowner_Battery_batt_replacement_schedule_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set battery_per_kWh: Battery cost [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_Battery_battery_per_kWh_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set en_batt: Enable battery storage model [0/1]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Battery_en_batt_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set grid_to_batt: Electricity to battery from grid [kW]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Singleowner_Battery_grid_to_batt_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);


	//
	// SystemOutput parameters
	//

	/**
	 * Set degradation: Annual energy degradation
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_SystemOutput_degradation_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set gen: Power generated by renewable resource [kW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_SystemOutput_gen_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set system_capacity: System nameplate capacity [kW]
	 * options: None
	 * constraints: MIN=1e-3
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_SystemOutput_system_capacity_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// UtilityBill parameters
	//

	/**
	 * Set utility_bill_w_sys: Electricity bill with system [$]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Singleowner_UtilityBill_utility_bill_w_sys_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);


	//
	// ReturnOnEquity parameters
	//

	/**
	 * Set roe_input: Return on equity
	 * options: None
	 * constraints: None
	 * required if: ?=20
	 */
	SAM_EXPORT void SAM_Singleowner_ReturnOnEquity_roe_input_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);


	//
	// Moratorium parameters
	//

	/**
	 * Set loan_moratorium: Loan moratorium period [years]
	 * options: None
	 * constraints: INTEGER,MIN=0
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Moratorium_loan_moratorium_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// Recapitalization parameters
	//

	/**
	 * Set system_lifetime_recapitalize: Recapitalization boolean
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Recapitalization_system_lifetime_recapitalize_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set system_recapitalization_cost: Recapitalization cost [$]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Recapitalization_system_recapitalization_cost_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set system_recapitalization_escalation: Recapitalization escalation (above inflation) [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Recapitalization_system_recapitalization_escalation_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set system_use_recapitalization: Recapitalization expenses [0/1]
	 * options: 0=None,1=Recapitalize
	 * constraints: INTEGER,MIN=0
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Recapitalization_system_use_recapitalization_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// TimeOfDelivery parameters
	//

	/**
	 * Set dispatch_factor1: TOD factor for period 1
	 * options: None
	 * constraints: None
	 * required if: ppa_multiplier_model=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_factor1_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set dispatch_factor2: TOD factor for period 2
	 * options: None
	 * constraints: None
	 * required if: ppa_multiplier_model=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_factor2_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set dispatch_factor3: TOD factor for period 3
	 * options: None
	 * constraints: None
	 * required if: ppa_multiplier_model=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_factor3_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set dispatch_factor4: TOD factor for period 4
	 * options: None
	 * constraints: None
	 * required if: ppa_multiplier_model=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_factor4_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set dispatch_factor5: TOD factor for period 5
	 * options: None
	 * constraints: None
	 * required if: ppa_multiplier_model=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_factor5_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set dispatch_factor6: TOD factor for period 6
	 * options: None
	 * constraints: None
	 * required if: ppa_multiplier_model=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_factor6_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set dispatch_factor7: TOD factor for period 7
	 * options: None
	 * constraints: None
	 * required if: ppa_multiplier_model=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_factor7_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set dispatch_factor8: TOD factor for period 8
	 * options: None
	 * constraints: None
	 * required if: ppa_multiplier_model=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_factor8_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set dispatch_factor9: TOD factor for period 9
	 * options: None
	 * constraints: None
	 * required if: ppa_multiplier_model=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_factor9_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set dispatch_factors_ts: Dispatch payment factor array
	 * options: None
	 * constraints: None
	 * required if: ppa_multiplier_model=1
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_factors_ts_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set dispatch_sched_weekday: Diurnal weekday TOD periods [1..9]
	 * options: 12 x 24 matrix
	 * constraints: None
	 * required if: ppa_multiplier_model=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_sched_weekday_mset(SAM_Singleowner ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set dispatch_sched_weekend: Diurnal weekend TOD periods [1..9]
	 * options: 12 x 24 matrix
	 * constraints: None
	 * required if: ppa_multiplier_model=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_dispatch_sched_weekend_mset(SAM_Singleowner ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set ppa_multiplier_model: PPA multiplier model [0/1]
	 * options: 0=diurnal,1=timestep
	 * constraints: INTEGER,MIN=0
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_ppa_multiplier_model_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set system_use_lifetime_output: Lifetime hourly system outputs [0/1]
	 * options: 0=hourly first year,1=hourly lifetime
	 * constraints: INTEGER,MIN=0
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_TimeOfDelivery_system_use_lifetime_output_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// ReserveAccounts parameters
	//

	/**
	 * Set equip1_reserve_cost: Major equipment reserve 1 cost [$/W]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=0.25
	 */
	SAM_EXPORT void SAM_Singleowner_ReserveAccounts_equip1_reserve_cost_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set equip1_reserve_freq: Major equipment reserve 1 frequency [years]
	 * options: None
	 * constraints: INTEGER,MIN=0
	 * required if: ?=12
	 */
	SAM_EXPORT void SAM_Singleowner_ReserveAccounts_equip1_reserve_freq_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set equip2_reserve_cost: Major equipment reserve 2 cost [$/W]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_ReserveAccounts_equip2_reserve_cost_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set equip2_reserve_freq: Major equipment reserve 2 frequency [years]
	 * options: None
	 * constraints: INTEGER,MIN=0
	 * required if: ?=15
	 */
	SAM_EXPORT void SAM_Singleowner_ReserveAccounts_equip2_reserve_freq_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set equip3_reserve_cost: Major equipment reserve 3 cost [$/W]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_ReserveAccounts_equip3_reserve_cost_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set equip3_reserve_freq: Major equipment reserve 3 frequency [years]
	 * options: None
	 * constraints: INTEGER,MIN=0
	 * required if: ?=20
	 */
	SAM_EXPORT void SAM_Singleowner_ReserveAccounts_equip3_reserve_freq_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set reserves_interest: Interest on reserves [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=1.75
	 */
	SAM_EXPORT void SAM_Singleowner_ReserveAccounts_reserves_interest_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// Depreciation parameters
	//

	/**
	 * Set depr_alloc_custom_percent: Custom depreciation federal and state allocation [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_alloc_custom_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_alloc_macrs_15_percent: 15-yr MACRS depreciation federal and state allocation [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=1.5
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_alloc_macrs_15_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_alloc_macrs_5_percent: 5-yr MACRS depreciation federal and state allocation [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=89
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_alloc_macrs_5_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_alloc_sl_15_percent: 15-yr straight line depreciation federal and state allocation [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=3
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_alloc_sl_15_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_alloc_sl_20_percent: 20-yr straight line depreciation federal and state allocation [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=3
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_alloc_sl_20_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_alloc_sl_39_percent: 39-yr straight line depreciation federal and state allocation [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0.5
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_alloc_sl_39_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_alloc_sl_5_percent: 5-yr straight line depreciation federal and state allocation [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_alloc_sl_5_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_fed: Federal bonus depreciation [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_fed_custom: Federal bonus depreciation custom [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_fed_custom_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_fed_macrs_15: Federal bonus depreciation 15-yr MACRS [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_fed_macrs_15_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_fed_macrs_5: Federal bonus depreciation 5-yr MACRS [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_fed_macrs_5_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_fed_sl_15: Federal bonus depreciation 15-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_fed_sl_15_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_fed_sl_20: Federal bonus depreciation 20-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_fed_sl_20_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_fed_sl_39: Federal bonus depreciation 39-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_fed_sl_39_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_fed_sl_5: Federal bonus depreciation 5-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_fed_sl_5_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_sta: State bonus depreciation [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_sta_custom: State bonus depreciation custom [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_sta_custom_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_sta_macrs_15: State bonus depreciation 15-yr MACRS [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_sta_macrs_15_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_sta_macrs_5: State bonus depreciation 5-yr MACRS [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_sta_macrs_5_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_sta_sl_15: State bonus depreciation 15-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_sta_sl_15_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_sta_sl_20: State bonus depreciation 20-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_sta_sl_20_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_sta_sl_39: State bonus depreciation 39-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_sta_sl_39_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_bonus_sta_sl_5: State bonus depreciation 5-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_bonus_sta_sl_5_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_custom_schedule: Custom depreciation schedule [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_custom_schedule_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set depr_fedbas_method: Method of federal depreciation reduction
	 * options: 0=5yr MACRS,1=Proportional
	 * constraints: INTEGER,MIN=0,MAX=1
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_fedbas_method_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_fed_custom: Federal ITC depreciation custom [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_fed_custom_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_fed_macrs_15: Federal ITC depreciation 15-yr MACRS [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_fed_macrs_15_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_fed_macrs_5: Federal ITC depreciation 5-yr MACRS [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_fed_macrs_5_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_fed_sl_15: Federal ITC depreciation 15-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_fed_sl_15_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_fed_sl_20: Federal ITC depreciation 20-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_fed_sl_20_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_fed_sl_39: Federal ITC depreciation 39-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_fed_sl_39_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_fed_sl_5: Federal ITC depreciation 5-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_fed_sl_5_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_sta_custom: State ITC depreciation custom [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_sta_custom_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_sta_macrs_15: State ITC depreciation 15-yr MACRS [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_sta_macrs_15_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_sta_macrs_5: State ITC depreciation 5-yr MACRS [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_sta_macrs_5_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_sta_sl_15: State ITC depreciation 15-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_sta_sl_15_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_sta_sl_20: State ITC depreciation 20-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_sta_sl_20_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_sta_sl_39: State ITC depreciation 39-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_sta_sl_39_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_itc_sta_sl_5: State ITC depreciation 5-yr straight line [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_itc_sta_sl_5_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set depr_stabas_method: Method of state depreciation reduction
	 * options: 0=5yr MACRS,1=Proportional
	 * constraints: INTEGER,MIN=0,MAX=1
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_depr_stabas_method_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set equip_reserve_depr_fed: Major equipment reserve federal depreciation
	 * options: 0=5yr MACRS,1=15yr MACRS,2=5yr SL,3=15yr SL, 4=20yr SL,5=39yr SL,6=Custom
	 * constraints: INTEGER,MIN=0,MAX=6
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_equip_reserve_depr_fed_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set equip_reserve_depr_sta: Major equipment reserve state depreciation
	 * options: 0=5yr MACRS,1=15yr MACRS,2=5yr SL,3=15yr SL, 4=20yr SL,5=39yr SL,6=Custom
	 * constraints: INTEGER,MIN=0,MAX=6
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_Depreciation_equip_reserve_depr_sta_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// SalvageValue parameters
	//

	/**
	 * Set salvage_percentage: Net pre-tax cash salvage value [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=10
	 */
	SAM_EXPORT void SAM_Singleowner_SalvageValue_salvage_percentage_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// SolutionMode parameters
	//

	/**
	 * Set ppa_soln_max: PPA solution maximum ppa [cents/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=100
	 */
	SAM_EXPORT void SAM_Singleowner_SolutionMode_ppa_soln_max_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ppa_soln_max_iterations: PPA solution maximum number of iterations
	 * options: None
	 * constraints: INTEGER,MIN=1
	 * required if: ?=100
	 */
	SAM_EXPORT void SAM_Singleowner_SolutionMode_ppa_soln_max_iterations_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ppa_soln_min: PPA solution minimum ppa [cents/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_SolutionMode_ppa_soln_min_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ppa_soln_mode: PPA solution mode [0/1]
	 * options: 0=solve ppa,1=specify ppa
	 * constraints: INTEGER,MIN=0,MAX=1
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_SolutionMode_ppa_soln_mode_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ppa_soln_tolerance: PPA solution tolerance
	 * options: None
	 * constraints: None
	 * required if: ?=1e-5
	 */
	SAM_EXPORT void SAM_Singleowner_SolutionMode_ppa_soln_tolerance_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// PPAPrice parameters
	//

	/**
	 * Set ppa_escalation: PPA escalation rate [%/year]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_PPAPrice_ppa_escalation_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set ppa_price_input: PPA price in first year [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=10
	 */
	SAM_EXPORT void SAM_Singleowner_PPAPrice_ppa_price_input_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// ConstructionFinancing parameters
	//

	/**
	 * Set construction_financing_cost: Construction financing total [$]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Singleowner_ConstructionFinancing_construction_financing_cost_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// ProjectTermDebt parameters
	//

	/**
	 * Set debt_option: Debt option [0/1]
	 * options: 0=debt percent,1=dscr
	 * constraints: INTEGER,MIN=0,MAX=1
	 * required if: ?=1
	 */
	SAM_EXPORT void SAM_Singleowner_ProjectTermDebt_debt_option_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set debt_percent: Debt percent [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=50
	 */
	SAM_EXPORT void SAM_Singleowner_ProjectTermDebt_debt_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set dscr: Debt service coverage ratio
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=1.5
	 */
	SAM_EXPORT void SAM_Singleowner_ProjectTermDebt_dscr_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set dscr_reserve_months: Debt service reserve account [months P&I]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=6
	 */
	SAM_EXPORT void SAM_Singleowner_ProjectTermDebt_dscr_reserve_months_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set payment_option: Debt repayment option [0/1]
	 * options: 0=Equal payments (standard amortization),1=Fixed principal declining interest
	 * constraints: INTEGER,MIN=0,MAX=1
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_ProjectTermDebt_payment_option_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set term_int_rate: Term financing interest rate [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=8.5
	 */
	SAM_EXPORT void SAM_Singleowner_ProjectTermDebt_term_int_rate_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set term_tenor: Term financing period [years]
	 * options: None
	 * constraints: INTEGER,MIN=0
	 * required if: ?=10
	 */
	SAM_EXPORT void SAM_Singleowner_ProjectTermDebt_term_tenor_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// OtherCapitalCosts parameters
	//

	/**
	 * Set cost_debt_closing: Debt closing cost [$]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=250000
	 */
	SAM_EXPORT void SAM_Singleowner_OtherCapitalCosts_cost_debt_closing_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cost_debt_fee: Debt closing fee (% of total debt amount) [%]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=1.5
	 */
	SAM_EXPORT void SAM_Singleowner_OtherCapitalCosts_cost_debt_fee_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set cost_other_financing: Other financing cost [$]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=150000
	 */
	SAM_EXPORT void SAM_Singleowner_OtherCapitalCosts_cost_other_financing_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set months_receivables_reserve: Receivables reserve months of PPA revenue [months]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_OtherCapitalCosts_months_receivables_reserve_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set months_working_reserve: Working capital reserve months of operating costs [months]
	 * options: None
	 * constraints: MIN=0
	 * required if: ?=6
	 */
	SAM_EXPORT void SAM_Singleowner_OtherCapitalCosts_months_working_reserve_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// IRRTargets parameters
	//

	/**
	 * Set flip_target_percent: After-tax IRR target [%]
	 * options: None
	 * constraints: MIN=0,MAX=100
	 * required if: ?=11
	 */
	SAM_EXPORT void SAM_Singleowner_IRRTargets_flip_target_percent_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set flip_target_year: IRR target year
	 * options: None
	 * constraints: MIN=1
	 * required if: ?=11
	 */
	SAM_EXPORT void SAM_Singleowner_IRRTargets_flip_target_year_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// CashIncentives parameters
	//

	/**
	 * Set pbi_fed_for_ds: Federal PBI available for debt service [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_CashIncentives_pbi_fed_for_ds_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_oth_for_ds: Other PBI available for debt service [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_CashIncentives_pbi_oth_for_ds_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_sta_for_ds: State PBI available for debt service [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_CashIncentives_pbi_sta_for_ds_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set pbi_uti_for_ds: Utility PBI available for debt service [0/1]
	 * options: None
	 * constraints: BOOLEAN
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_CashIncentives_pbi_uti_for_ds_fset(SAM_Singleowner ptr, float number, SAM_error *err);


	//
	// FuelCell parameters
	//

	/**
	 * Set en_fuelcell: Enable fuel cell storage model [0/1]
	 * options: None
	 * constraints: None
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_FuelCell_en_fuelcell_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set fuelcell_computed_bank_capacity: Fuel cell capacity [kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_FuelCell_fuelcell_computed_bank_capacity_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set fuelcell_per_kWh: Fuel cell cost [$/kWh]
	 * options: None
	 * constraints: None
	 * required if: ?=0.0
	 */
	SAM_EXPORT void SAM_Singleowner_FuelCell_fuelcell_per_kWh_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set fuelcell_replacement: Fuel cell replacements per year [number/year]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Singleowner_FuelCell_fuelcell_replacement_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set fuelcell_replacement_option: Enable fuel cell replacement? [0=none,1=capacity based,2=user schedule]
	 * options: None
	 * constraints: INTEGER,MIN=0,MAX=2
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_Singleowner_FuelCell_fuelcell_replacement_option_fset(SAM_Singleowner ptr, float number, SAM_error *err);

	/**
	 * Set fuelcell_replacement_schedule: Fuel cell replacements per year (user specified) [number/year]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_Singleowner_FuelCell_fuelcell_replacement_schedule_aset(SAM_Singleowner ptr, float* arr, int length, SAM_error *err);


	/**
	 * FinancialParameters Getters
	 */

	SAM_EXPORT float SAM_Singleowner_FinancialParameters_analysis_period_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_FinancialParameters_federal_tax_rate_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_FinancialParameters_inflation_rate_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_FinancialParameters_insurance_rate_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_FinancialParameters_prop_tax_assessed_decline_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_FinancialParameters_prop_tax_cost_assessed_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_FinancialParameters_property_tax_rate_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_FinancialParameters_real_discount_rate_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_FinancialParameters_state_tax_rate_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_FinancialParameters_system_capacity_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_FinancialParameters_system_heat_rate_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * SystemCosts Getters
	 */

	SAM_EXPORT float SAM_Singleowner_SystemCosts_add_om_num_types_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_annual_fuel_usage_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_capacity_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_capacity1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_om_capacity1_nameplate_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_capacity2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_om_capacity2_nameplate_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_om_capacity_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_fixed_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_fixed1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_fixed2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_om_fixed_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_fuel_cost_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_om_fuel_cost_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_opt_fuel_1_cost_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_om_opt_fuel_1_cost_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_om_opt_fuel_1_usage_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_opt_fuel_2_cost_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_om_opt_fuel_2_cost_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_om_opt_fuel_2_usage_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_production_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_production1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_production1_values_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_production2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_production2_values_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_om_production_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_replacement_cost1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemCosts_om_replacement_cost2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_om_replacement_cost_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemCosts_total_installed_cost_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * TaxCreditIncentives Getters
	 */

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_fed_amount_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_fed_amount_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_fed_amount_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_fed_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_fed_percent_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_fed_percent_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_fed_percent_maxvalue_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_sta_amount_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_sta_amount_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_sta_amount_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_sta_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_sta_percent_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_sta_percent_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_itc_sta_percent_maxvalue_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_TaxCreditIncentives_ptc_fed_amount_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_ptc_fed_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_ptc_fed_term_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_TaxCreditIncentives_ptc_sta_amount_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_ptc_sta_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TaxCreditIncentives_ptc_sta_term_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * PaymentIncentives Getters
	 */

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_fed_amount_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_fed_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_fed_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_fed_maxvalue_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_fed_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_fed_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_oth_amount_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_oth_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_oth_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_oth_maxvalue_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_oth_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_oth_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_sta_amount_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_sta_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_sta_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_sta_maxvalue_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_sta_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_sta_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_uti_amount_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_uti_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_uti_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_uti_maxvalue_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_uti_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_cbi_uti_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_fed_amount_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_fed_amount_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_fed_amount_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_fed_amount_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_fed_amount_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_fed_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_fed_percent_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_fed_percent_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_fed_percent_maxvalue_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_fed_percent_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_fed_percent_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_oth_amount_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_oth_amount_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_oth_amount_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_oth_amount_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_oth_amount_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_oth_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_oth_percent_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_oth_percent_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_oth_percent_maxvalue_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_oth_percent_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_oth_percent_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_sta_amount_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_sta_amount_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_sta_amount_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_sta_amount_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_sta_amount_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_sta_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_sta_percent_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_sta_percent_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_sta_percent_maxvalue_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_sta_percent_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_sta_percent_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_uti_amount_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_uti_amount_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_uti_amount_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_uti_amount_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_uti_amount_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_uti_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_uti_percent_deprbas_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_uti_percent_deprbas_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_uti_percent_maxvalue_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_uti_percent_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_ibi_uti_percent_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_PaymentIncentives_pbi_fed_amount_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_fed_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_fed_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_fed_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_fed_term_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_PaymentIncentives_pbi_oth_amount_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_oth_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_oth_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_oth_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_oth_term_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_PaymentIncentives_pbi_sta_amount_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_sta_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_sta_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_sta_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_sta_term_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_PaymentIncentives_pbi_uti_amount_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_uti_escal_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_uti_tax_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_uti_tax_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PaymentIncentives_pbi_uti_term_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * Battery Getters
	 */

	SAM_EXPORT float* SAM_Singleowner_Battery_batt_bank_replacement_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Battery_batt_computed_bank_capacity_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Battery_batt_meter_position_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Battery_batt_replacement_option_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Battery_batt_replacement_schedule_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Battery_battery_per_kWh_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Battery_en_batt_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Battery_grid_to_batt_aget(SAM_Singleowner ptr, int* length, SAM_error *err);


	/**
	 * SystemOutput Getters
	 */

	SAM_EXPORT float* SAM_Singleowner_SystemOutput_degradation_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_SystemOutput_gen_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SystemOutput_system_capacity_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * UtilityBill Getters
	 */

	SAM_EXPORT float* SAM_Singleowner_UtilityBill_utility_bill_w_sys_aget(SAM_Singleowner ptr, int* length, SAM_error *err);


	/**
	 * ReturnOnEquity Getters
	 */

	SAM_EXPORT float* SAM_Singleowner_ReturnOnEquity_roe_input_aget(SAM_Singleowner ptr, int* length, SAM_error *err);


	/**
	 * Moratorium Getters
	 */

	SAM_EXPORT float SAM_Singleowner_Moratorium_loan_moratorium_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * Recapitalization Getters
	 */

	SAM_EXPORT float* SAM_Singleowner_Recapitalization_system_lifetime_recapitalize_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Recapitalization_system_recapitalization_cost_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Recapitalization_system_recapitalization_escalation_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Recapitalization_system_use_recapitalization_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * TimeOfDelivery Getters
	 */

	SAM_EXPORT float SAM_Singleowner_TimeOfDelivery_dispatch_factor1_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TimeOfDelivery_dispatch_factor2_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TimeOfDelivery_dispatch_factor3_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TimeOfDelivery_dispatch_factor4_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TimeOfDelivery_dispatch_factor5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TimeOfDelivery_dispatch_factor6_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TimeOfDelivery_dispatch_factor7_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TimeOfDelivery_dispatch_factor8_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TimeOfDelivery_dispatch_factor9_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_TimeOfDelivery_dispatch_factors_ts_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_TimeOfDelivery_dispatch_sched_weekday_mget(SAM_Singleowner ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_TimeOfDelivery_dispatch_sched_weekend_mget(SAM_Singleowner ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TimeOfDelivery_ppa_multiplier_model_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_TimeOfDelivery_system_use_lifetime_output_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * ReserveAccounts Getters
	 */

	SAM_EXPORT float SAM_Singleowner_ReserveAccounts_equip1_reserve_cost_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ReserveAccounts_equip1_reserve_freq_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ReserveAccounts_equip2_reserve_cost_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ReserveAccounts_equip2_reserve_freq_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ReserveAccounts_equip3_reserve_cost_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ReserveAccounts_equip3_reserve_freq_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ReserveAccounts_reserves_interest_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * Depreciation Getters
	 */

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_alloc_custom_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_alloc_macrs_15_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_alloc_macrs_5_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_alloc_sl_15_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_alloc_sl_20_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_alloc_sl_39_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_alloc_sl_5_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_fed_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_fed_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_fed_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_fed_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_fed_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_fed_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_fed_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_sta_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_sta_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_sta_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_sta_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_sta_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_sta_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_bonus_sta_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Depreciation_depr_custom_schedule_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_fedbas_method_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_fed_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_fed_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_fed_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_fed_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_fed_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_fed_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_fed_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_sta_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_sta_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_sta_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_sta_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_sta_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_sta_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_itc_sta_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_depr_stabas_method_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_equip_reserve_depr_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Depreciation_equip_reserve_depr_sta_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * SalvageValue Getters
	 */

	SAM_EXPORT float SAM_Singleowner_SalvageValue_salvage_percentage_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * SolutionMode Getters
	 */

	SAM_EXPORT float SAM_Singleowner_SolutionMode_ppa_soln_max_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SolutionMode_ppa_soln_max_iterations_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SolutionMode_ppa_soln_min_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SolutionMode_ppa_soln_mode_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_SolutionMode_ppa_soln_tolerance_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * PPAPrice Getters
	 */

	SAM_EXPORT float SAM_Singleowner_PPAPrice_ppa_escalation_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_PPAPrice_ppa_price_input_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * ConstructionFinancing Getters
	 */

	SAM_EXPORT float SAM_Singleowner_ConstructionFinancing_construction_financing_cost_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * ProjectTermDebt Getters
	 */

	SAM_EXPORT float SAM_Singleowner_ProjectTermDebt_debt_option_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ProjectTermDebt_debt_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ProjectTermDebt_dscr_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ProjectTermDebt_dscr_reserve_months_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ProjectTermDebt_payment_option_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ProjectTermDebt_term_int_rate_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_ProjectTermDebt_term_tenor_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * OtherCapitalCosts Getters
	 */

	SAM_EXPORT float SAM_Singleowner_OtherCapitalCosts_cost_debt_closing_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_OtherCapitalCosts_cost_debt_fee_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_OtherCapitalCosts_cost_other_financing_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_OtherCapitalCosts_months_receivables_reserve_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_OtherCapitalCosts_months_working_reserve_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * IRRTargets Getters
	 */

	SAM_EXPORT float SAM_Singleowner_IRRTargets_flip_target_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_IRRTargets_flip_target_year_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * CashIncentives Getters
	 */

	SAM_EXPORT float SAM_Singleowner_CashIncentives_pbi_fed_for_ds_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_CashIncentives_pbi_oth_for_ds_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_CashIncentives_pbi_sta_for_ds_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_CashIncentives_pbi_uti_for_ds_fget(SAM_Singleowner ptr, SAM_error *err);


	/**
	 * FuelCell Getters
	 */

	SAM_EXPORT float SAM_Singleowner_FuelCell_en_fuelcell_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_FuelCell_fuelcell_computed_bank_capacity_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_FuelCell_fuelcell_per_kWh_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_FuelCell_fuelcell_replacement_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_FuelCell_fuelcell_replacement_option_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_FuelCell_fuelcell_replacement_schedule_aget(SAM_Singleowner ptr, int* length, SAM_error *err);


	/**
	 * Outputs Getters
	 */

	SAM_EXPORT float SAM_Singleowner_Outputs_adjusted_installed_cost_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_analysis_period_irr_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cash_for_debt_service_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cbi_fedtax_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cbi_statax_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cbi_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cbi_total_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cbi_total_oth_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cbi_total_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cbi_total_uti_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_annual_costs_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_battery_replacement_cost_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_battery_replacement_cost_schedule_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_cash_for_ds_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_debt_balance_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_debt_payment_interest_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_debt_payment_principal_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_debt_payment_total_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_debt_size_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_disbursement_debtservice_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_disbursement_equip1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_disbursement_equip2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_disbursement_equip3_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_disbursement_om_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_disbursement_receivables_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_ebitda_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_effective_tax_frac_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_apr_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_aug_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_dec_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_dispatch1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_dispatch2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_dispatch3_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_dispatch4_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_dispatch5_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_dispatch6_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_dispatch7_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_dispatch8_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_dispatch9_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_feb_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_jan_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_jul_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_jun_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_mar_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_may_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_monthly_firstyear_TOD1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_monthly_firstyear_TOD2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_monthly_firstyear_TOD3_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_monthly_firstyear_TOD4_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_monthly_firstyear_TOD5_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_monthly_firstyear_TOD6_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_monthly_firstyear_TOD7_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_monthly_firstyear_TOD8_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_monthly_firstyear_TOD9_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_nov_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_oct_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_net_sep_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_energy_value_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_feddepr_custom_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_feddepr_macrs_15_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_feddepr_macrs_5_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_feddepr_me1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_feddepr_me2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_feddepr_me3_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_feddepr_sl_15_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_feddepr_sl_20_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_feddepr_sl_39_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_feddepr_sl_5_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_feddepr_total_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_federal_tax_frac_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_fedtax_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_fedtax_income_prior_incentives_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_fedtax_income_with_incentives_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_fedtax_taxable_incentives_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_fuelcell_replacement_cost_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_fuelcell_replacement_cost_schedule_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_funding_debtservice_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_funding_equip1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_funding_equip2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_funding_equip3_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_funding_om_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_funding_receivables_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_insurance_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_lcog_costs_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cf_length_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_net_salvage_value_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_capacity1_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_capacity2_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_capacity_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_fixed1_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_fixed2_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_fixed_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_fuel_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_opt_fuel_1_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_opt_fuel_2_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_production1_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_production2_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_om_production_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_operating_expenses_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_pbi_fedtax_total_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_pbi_statax_total_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_pbi_total_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_pbi_total_fed_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_pbi_total_oth_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_pbi_total_sta_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_pbi_total_uti_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_ppa_price_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_pretax_cashflow_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_pretax_dscr_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_dsra_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_financing_activities_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_investing_activities_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_me1cs_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_me1ra_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_me2cs_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_me2ra_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_me3cs_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_me3ra_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_mecs_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_operating_activities_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_ra_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_receivablesra_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_return_aftertax_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_return_aftertax_cash_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_return_aftertax_irr_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_return_aftertax_max_irr_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_return_aftertax_npv_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_return_pretax_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_return_pretax_irr_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_return_pretax_npv_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_project_wcra_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_property_tax_assessed_value_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_property_tax_expense_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_ptc_fed_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_ptc_sta_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_pv_cash_for_ds_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_pv_interest_factor_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_recapitalization_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_reserve_debtservice_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_reserve_equip1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_reserve_equip2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_reserve_equip3_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_reserve_interest_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_reserve_om_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_reserve_receivables_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_reserve_total_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_return_on_equity_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_return_on_equity_dollars_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_return_on_equity_input_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_apr_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_aug_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_dec_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_dispatch1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_dispatch2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_dispatch3_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_dispatch4_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_dispatch5_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_dispatch6_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_dispatch7_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_dispatch8_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_dispatch9_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_feb_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_jan_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_jul_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_jun_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_mar_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_may_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_monthly_firstyear_TOD1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_monthly_firstyear_TOD2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_monthly_firstyear_TOD3_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_monthly_firstyear_TOD4_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_monthly_firstyear_TOD5_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_monthly_firstyear_TOD6_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_monthly_firstyear_TOD7_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_monthly_firstyear_TOD8_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_monthly_firstyear_TOD9_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_nov_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_oct_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_revenue_sep_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_stadepr_custom_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_stadepr_macrs_15_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_stadepr_macrs_5_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_stadepr_me1_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_stadepr_me2_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_stadepr_me3_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_stadepr_sl_15_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_stadepr_sl_20_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_stadepr_sl_39_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_stadepr_sl_5_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_stadepr_total_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_statax_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_statax_income_prior_incentives_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_statax_income_with_incentives_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_statax_taxable_incentives_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_state_tax_frac_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_thermal_value_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_total_revenue_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_cf_utility_bill_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cost_debt_upfront_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cost_financing_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cost_installed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cost_installedperwatt_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_cost_prefinancing_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_debt_fraction_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_alloc_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_alloc_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_alloc_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_alloc_none_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_alloc_none_percent_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_alloc_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_alloc_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_alloc_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_alloc_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_alloc_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_after_itc_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_after_itc_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_after_itc_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_after_itc_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_after_itc_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_after_itc_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_after_itc_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_after_itc_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_cbi_reduc_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_cbi_reduc_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_cbi_reduc_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_cbi_reduc_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_cbi_reduc_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_cbi_reduc_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_cbi_reduc_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_cbi_reduc_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_first_year_bonus_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_first_year_bonus_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_first_year_bonus_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_first_year_bonus_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_first_year_bonus_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_first_year_bonus_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_first_year_bonus_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_first_year_bonus_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_fixed_amount_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_fixed_amount_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_fixed_amount_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_fixed_amount_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_fixed_amount_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_fixed_amount_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_fixed_amount_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_fixed_amount_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_ibi_reduc_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_ibi_reduc_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_ibi_reduc_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_ibi_reduc_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_ibi_reduc_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_ibi_reduc_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_ibi_reduc_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_ibi_reduc_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_fed_reduction_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_fed_reduction_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_fed_reduction_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_fed_reduction_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_fed_reduction_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_fed_reduction_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_fed_reduction_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_fed_reduction_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_sta_reduction_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_sta_reduction_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_sta_reduction_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_sta_reduction_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_sta_reduction_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_sta_reduction_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_sta_reduction_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_itc_sta_reduction_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_amount_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_amount_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_amount_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_amount_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_amount_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_amount_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_amount_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_amount_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_qual_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_qual_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_qual_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_qual_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_qual_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_qual_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_qual_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_qual_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_percent_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_prior_itc_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_prior_itc_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_prior_itc_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_prior_itc_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_prior_itc_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_prior_itc_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_prior_itc_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_prior_itc_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_fedbas_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_after_itc_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_after_itc_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_after_itc_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_after_itc_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_after_itc_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_after_itc_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_after_itc_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_after_itc_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_cbi_reduc_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_cbi_reduc_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_cbi_reduc_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_cbi_reduc_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_cbi_reduc_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_cbi_reduc_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_cbi_reduc_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_cbi_reduc_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_first_year_bonus_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_first_year_bonus_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_first_year_bonus_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_first_year_bonus_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_first_year_bonus_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_first_year_bonus_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_first_year_bonus_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_first_year_bonus_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_fixed_amount_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_fixed_amount_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_fixed_amount_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_fixed_amount_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_fixed_amount_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_fixed_amount_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_fixed_amount_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_fixed_amount_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_ibi_reduc_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_ibi_reduc_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_ibi_reduc_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_ibi_reduc_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_ibi_reduc_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_ibi_reduc_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_ibi_reduc_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_ibi_reduc_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_fed_reduction_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_fed_reduction_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_fed_reduction_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_fed_reduction_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_fed_reduction_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_fed_reduction_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_fed_reduction_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_fed_reduction_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_sta_reduction_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_sta_reduction_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_sta_reduction_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_sta_reduction_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_sta_reduction_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_sta_reduction_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_sta_reduction_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_itc_sta_reduction_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_amount_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_amount_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_amount_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_amount_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_amount_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_amount_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_amount_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_amount_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_qual_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_qual_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_qual_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_qual_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_qual_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_qual_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_qual_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_qual_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_percent_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_prior_itc_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_prior_itc_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_prior_itc_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_prior_itc_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_prior_itc_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_prior_itc_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_prior_itc_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_prior_itc_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_depr_stabas_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_dispatch1_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_dispatch2_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_dispatch3_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_dispatch4_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_dispatch5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_dispatch6_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_dispatch7_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_dispatch8_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_dispatch9_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_price1_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_price2_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_price3_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_price4_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_price5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_price6_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_price7_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_price8_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_energy_price9_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_revenue_dispatch1_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_revenue_dispatch2_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_revenue_dispatch3_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_revenue_dispatch4_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_revenue_dispatch5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_revenue_dispatch6_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_revenue_dispatch7_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_revenue_dispatch8_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_firstyear_revenue_dispatch9_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_flip_actual_irr_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_flip_actual_year_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_flip_target_irr_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_flip_target_year_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_ibi_fedtax_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_ibi_statax_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_ibi_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_ibi_total_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_ibi_total_oth_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_ibi_total_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_ibi_total_uti_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_issuance_of_equity_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_fixed_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_fixed_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_fixed_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_fixed_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_fixed_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_fixed_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_fixed_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_fixed_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_percent_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_percent_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_percent_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_percent_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_percent_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_percent_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_percent_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_fed_percent_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_fixed_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_fixed_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_fixed_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_fixed_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_fixed_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_fixed_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_fixed_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_fixed_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_percent_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_percent_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_percent_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_percent_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_percent_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_percent_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_percent_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_disallow_sta_percent_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_fed_fixed_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_fed_percent_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_fed_qual_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_fed_qual_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_fed_qual_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_fed_qual_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_fed_qual_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_fed_qual_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_fed_qual_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_fed_qual_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_sta_fixed_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_sta_percent_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_sta_qual_custom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_sta_qual_macrs_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_sta_qual_macrs_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_sta_qual_sl_15_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_sta_qual_sl_20_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_sta_qual_sl_39_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_sta_qual_sl_5_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_sta_qual_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_total_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_total_fed_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_itc_total_sta_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcoe_nom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcoe_real_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcog_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcog_depr_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcog_loan_int_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcog_om_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcog_roe_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcog_wc_int_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcoptc_fed_nom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcoptc_fed_real_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcoptc_sta_nom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lcoptc_sta_real_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lppa_nom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_lppa_real_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_min_dscr_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_nominal_discount_rate_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_npv_annual_costs_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_npv_energy_nom_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_npv_energy_real_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_npv_ppa_revenue_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_ppa_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_ppa_escalation_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_ppa_gen_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Singleowner_Outputs_ppa_multipliers_aget(SAM_Singleowner ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_ppa_price_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_present_value_fuel_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_present_value_insandproptax_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_present_value_oandm_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_present_value_oandm_nonfuel_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_project_return_aftertax_irr_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_project_return_aftertax_npv_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_prop_tax_assessed_value_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_purchase_of_property_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_pv_cafds_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_salvage_value_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_size_of_debt_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_size_of_equity_fget(SAM_Singleowner ptr, SAM_error *err);

	SAM_EXPORT float SAM_Singleowner_Outputs_wacc_fget(SAM_Singleowner ptr, SAM_error *err);

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif