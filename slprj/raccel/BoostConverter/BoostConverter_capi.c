#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "BoostConverter_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 19
#endif
#ifndef SS_INT64
#define SS_INT64 20
#endif
#else
#include "builtin_typeid_types.h"
#include "BoostConverter.h"
#include "BoostConverter_capi.h"
#include "BoostConverter_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Data Type Conversion" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Fcn" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING ( "BoostConverter/Voltage Measurement/do not delete this gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 3 , 0 , TARGET_STRING ( "BoostConverter/Voltage Measurement1/do not delete this gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 4 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Current Measurement/do not delete this gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 5 , 0 , TARGET_STRING ( "BoostConverter/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 6 , 0 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 7 , 0 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "" ) , 1 , 0 , 2 , 0 , 1 } , { 8 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Data Type Conversion2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 11 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 12 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Coulomb Counter" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 13 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Initial it" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Saturation" ) , TARGET_STRING ( "Voltage (V)" ) , 0 , 0 , 0 , 0 , 1 } , { 15 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Add" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 16 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Current Filter" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 17 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Transfer Fcn1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING ( "BoostConverter/Mosfet/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 19 , 0 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Constant2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Constant4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Sawtooth Generator/Model/1\\ib2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Hit  Crossing" ) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Unit Delay" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 24 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Compare To Zero/Compare" ) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Exponential Zone Voltage/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Exponential Zone Voltage/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Exponential Zone Voltage/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Exponential Zone Voltage/Integrator2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 29 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Exponential Zone Voltage/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Exponential Zone Voltage/Product1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Exponential Zone Voltage/Add1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/SoC/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/SoC/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 34 , TARGET_STRING ( "BoostConverter/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 35 , TARGET_STRING ( "BoostConverter/Voltage Measurement/do not delete this gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 36 , TARGET_STRING ( "BoostConverter/Voltage Measurement1/do not delete this gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 37 , TARGET_STRING ( "BoostConverter/Battery1/Current Measurement/do not delete this gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 38 , TARGET_STRING ( "BoostConverter/Diode/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 39 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Compare To Zero/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 40 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P1" ) , 0 , 3 , 0 } , { 41 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P2" ) , 0 , 4 , 0 } , { 42 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P3" ) , 0 , 5 , 0 } , { 43 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P4" ) , 0 , 6 , 0 } , { 44 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P5" ) , 0 , 7 , 0 } , { 45 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P6" ) , 0 , 8 , 0 } , { 46 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P7" ) , 0 , 1 , 0 } , { 47 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P8" ) , 0 , 8 , 0 } , { 48 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P9" ) , 0 , 0 , 0 } , { 49 , TARGET_STRING ( "BoostConverter/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P10" ) , 0 , 0 , 0 } , { 50 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 51 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 52 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/capacity" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 53 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/constantA" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 54 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/constantB" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 55 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/constantK" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 56 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 57 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Coulomb Counter" ) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Coulomb Counter" ) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Initial it" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Saturation" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 63 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Saturation" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Current Filter" ) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 65 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Current Filter" ) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Transfer Fcn1" ) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 67 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Transfer Fcn1" ) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING ( "BoostConverter/Mosfet/Diode/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 69 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Constant2" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 70 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Constant4" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Sawtooth Generator/Model/1\\ib2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 72 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Hit  Crossing" ) , TARGET_STRING ( "HitCrossingOffset" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING ( "BoostConverter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Unit Delay" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Compare To Zero/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Compare To Zero1/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 76 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Exponential Zone Voltage/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Exponential Zone Voltage/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/Exponential Zone Voltage/Integrator2" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/SoC/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/SoC/Saturation" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING ( "BoostConverter/Battery1/Model/Continuous/SoC/Saturation" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . iwt2pd3usf , & rtB . awm2pfwfkk ,
& rtB . d3e052cahd , & rtB . exjjnufx5s , & rtB . lbbqsjji0m , & rtB .
hnc03my5wq , & rtB . m2b1nfjmhc [ 0 ] , & rtB . h5vpotfg4s [ 0 ] , & rtB .
fbwybvroaj , & rtB . hh123vifhd , & rtB . h1mp4mgbb3 , & rtB . eflbg3wwqo , &
rtB . n0iensv3c5 , & rtB . ov0gfuixpn , & rtB . nakyvj04a1 , & rtB .
mjmt3wp12q , & rtB . jrlfdl2hqp , & rtB . ldemcwf00w , & rtB . dgoxzfnrb5 , &
rtB . i3yue2n4px , & rtB . pty04vevwg , & rtB . esc23sc1wa , & rtB .
jobxkikgee , & rtB . d24vdz2yfj , & rtB . azfgmr0zid , & rtB . f1usjqoibe , &
rtB . miswuvizqy , & rtB . i1dlj4fspj , & rtB . n2fwe452jt , & rtB .
bakgz2z12b , & rtB . l0pgeuedq0 , & rtB . p3ifbgnqt5 , & rtB . pa0me12c1m , &
rtB . oaazhxapzu , & rtP . Constant_Value_ihbzrbcjcd , & rtP .
donotdeletethisgain_Gain_mjx303azsy , & rtP .
donotdeletethisgain_Gain_d4xgu1x4hh , & rtP . donotdeletethisgain_Gain , &
rtP . gate_Value_hfhtxagkxf , & rtP . Constant_Value_iwekyg2z5g , & rtP .
StateSpace_P1 [ 0 ] , & rtP . StateSpace_P2 [ 0 ] , & rtP . StateSpace_P3 [ 0
] , & rtP . StateSpace_P4 [ 0 ] , & rtP . StateSpace_P5 [ 0 ] , & rtP .
StateSpace_P6 [ 0 ] , & rtP . StateSpace_P7 [ 0 ] , & rtP . StateSpace_P8 [ 0
] , & rtP . StateSpace_P9 , & rtP . StateSpace_P10 , & rtP .
Constant_Value_l4asnk125a , & rtP . Constant1_Value , & rtP . capacity_Value
, & rtP . constantA_Value , & rtP . constantB_Value , & rtP . constantK_Value
, & rtP . Gain_Gain , & rtP . Gain1_Gain , & rtP . Gain2_Gain , & rtP .
CoulombCounter_UpperSat , & rtP . CoulombCounter_LowerSat , & rtP .
Initialit_InitialCondition , & rtP . Saturation_UpperSat , & rtP .
Saturation_LowerSat , & rtP . CurrentFilter_A , & rtP . CurrentFilter_C , &
rtP . TransferFcn1_A , & rtP . TransferFcn1_C , & rtP . gate_Value , & rtP .
Constant2_Value , & rtP . Constant4_Value , & rtP . uib2_Gain , & rtP .
HitCrossing_Offset , & rtP . UnitDelay_InitialCondition , & rtP .
Constant_Value , & rtP . Constant_Value_odsjjxhutl , & rtP .
Gain_Gain_jsklo00cx1 , & rtP . Gain1_Gain_f1lo10iae3 , & rtP . Integrator2_IC
, & rtP . Gain1_Gain_plyejubh1e , & rtP . Saturation_UpperSat_k3bm0knlts , &
rtP . Saturation_LowerSat_gtsxumhbdz , } ; static int32_T * rtVarDimsAddrMap
[ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 14 , 2
, 0 } , { rtwCAPI_VECTOR , 16 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 1 , 1 , 3 , 1 , 6 , 1 , 16 , 8 , 1 , 4 , 2 , 1 , 16
, 39 , 2 , 3 , 1 , 3 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 ,
1.0 , 2.5E-5 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL )
, ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 3 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 2 , ( uint8_T ) 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 34 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 48 , rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 3653411439U , 3866566779U , 3669353515U , 4093746224U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo * BoostConverter_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void BoostConverter_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void BoostConverter_host_InitializeDataMapInfo ( BoostConverter_host_DataMapInfo_T * dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
