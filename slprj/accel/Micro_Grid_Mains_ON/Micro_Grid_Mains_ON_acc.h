#ifndef Micro_Grid_Mains_ON_acc_h_
#define Micro_Grid_Mains_ON_acc_h_
#ifndef Micro_Grid_Mains_ON_acc_COMMON_INCLUDES_
#define Micro_Grid_Mains_ON_acc_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME simulink_only_sfcn
#define S_FUNCTION_LEVEL 2
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif
#include "Micro_Grid_Mains_ON_acc_types.h"
#include <stddef.h>
#include <string.h>
#include "rtGetInf.h"
#include "rt_defines.h"
#include "simstruc_types.h"
typedef struct { real_T B_13_603_4672 ; real_T B_13_604_4680 ; }
B_Subsystempi2delay_Micro_Grid_Mains_ON_T ; typedef struct { int32_T
Subsystempi2delay_sysIdxToRun ; int8_T Subsystempi2delay_SubsysRanBC ;
boolean_T Subsystempi2delay_MODE ; char_T pad_Subsystempi2delay_MODE [ 2 ] ;
} DW_Subsystempi2delay_Micro_Grid_Mains_ON_T ; typedef struct { real_T
B_14_601_4656 ; real_T B_14_602_4664 ; } B_Subsystem1_Micro_Grid_Mains_ON_T ;
typedef struct { int32_T Subsystem1_sysIdxToRun ; int8_T
Subsystem1_SubsysRanBC ; boolean_T Subsystem1_MODE ; char_T
pad_Subsystem1_MODE [ 2 ] ; } DW_Subsystem1_Micro_Grid_Mains_ON_T ; typedef
struct { creal_T B_15_0_0 ; real_T B_25_1_16 [ 3 ] ; real_T B_25_4_40 [ 14 ]
; real_T B_25_18_152 ; real_T B_25_19_160 ; real_T B_25_20_168 ; real_T
B_25_21_176 ; real_T B_25_22_184 ; real_T B_25_23_192 ; real_T B_25_24_200 ;
real_T B_25_25_208 ; real_T B_25_26_216 ; real_T B_25_27_224 [ 42 ] ; real_T
B_25_69_560 [ 14 ] ; real_T B_25_83_672 [ 6 ] ; real_T B_25_89_720 [ 3 ] ;
real_T B_25_92_744 ; real_T B_25_93_752 ; real_T B_25_94_760 ; real_T
B_25_95_768 [ 2 ] ; real_T B_25_97_784 ; real_T B_25_98_792 ; real_T
B_25_99_800 [ 3 ] ; real_T B_25_102_824 [ 3 ] ; real_T B_25_105_848 ; real_T
B_25_106_856 ; real_T B_25_107_864 [ 3 ] ; real_T B_25_110_888 ; real_T
B_25_111_896 ; real_T B_25_112_904 ; real_T B_25_113_912 ; real_T
B_25_114_920 ; real_T B_25_115_928 ; real_T B_25_116_936 ; real_T
B_25_117_944 ; real_T B_25_118_952 ; real_T B_25_119_960 ; real_T
B_25_120_968 ; real_T B_25_121_976 ; real_T B_25_122_984 ; real_T
B_25_123_992 ; real_T B_25_124_1000 ; real_T B_25_125_1008 ; real_T
B_25_126_1016 ; real_T B_25_127_1024 ; real_T B_25_128_1032 ; real_T
B_25_129_1040 ; real_T B_25_130_1048 ; real_T B_25_131_1056 ; real_T
B_25_132_1064 ; real_T B_25_133_1072 ; real_T B_25_134_1080 ; real_T
B_25_135_1088 ; real_T B_25_136_1096 ; real_T B_25_137_1104 ; real_T
B_25_138_1112 ; real_T B_25_139_1120 ; real_T B_25_140_1128 ; real_T
B_25_141_1136 ; real_T B_25_142_1144 [ 3 ] ; real_T B_25_145_1168 [ 3 ] ;
real_T B_25_148_1192 [ 2 ] ; real_T B_25_150_1208 ; real_T B_25_151_1216 ;
real_T B_25_152_1224 ; real_T B_25_153_1232 ; real_T B_25_154_1240 [ 6 ] ;
real_T B_25_160_1288 ; real_T B_25_161_1296 ; real_T B_25_162_1304 [ 2 ] ;
real_T B_25_164_1320 ; real_T B_25_165_1328 ; real_T B_25_166_1336 ; real_T
B_25_167_1344 ; real_T B_25_168_1352 ; real_T B_25_169_1360 ; real_T
B_25_170_1368 ; real_T B_25_171_1376 ; real_T B_25_172_1384 ; real_T
B_25_173_1392 ; real_T B_25_174_1400 ; real_T B_25_175_1408 ; real_T
B_25_176_1416 ; real_T B_25_177_1424 ; real_T B_25_178_1432 ; real_T
B_25_179_1440 ; real_T B_25_180_1448 ; real_T B_25_181_1456 ; real_T
B_25_182_1464 ; real_T B_25_183_1472 ; real_T B_25_184_1480 [ 18 ] ; real_T
B_25_202_1624 ; real_T B_25_203_1632 ; real_T B_25_204_1640 ; real_T
B_25_205_1648 ; real_T B_25_206_1656 ; real_T B_25_207_1664 ; real_T
B_25_208_1672 ; real_T B_25_209_1680 ; real_T B_25_210_1688 ; real_T
B_25_211_1696 ; real_T B_25_212_1704 ; real_T B_25_213_1712 ; real_T
B_25_214_1720 ; real_T B_25_215_1728 ; real_T B_25_216_1736 ; real_T
B_25_217_1744 ; real_T B_25_218_1752 [ 5 ] ; real_T B_25_223_1792 ; real_T
B_25_224_1800 ; real_T B_25_225_1808 ; real_T B_25_226_1816 ; real_T
B_25_227_1824 ; real_T B_25_228_1832 ; real_T B_25_229_1840 ; real_T
B_25_230_1848 ; real_T B_25_231_1856 ; real_T B_25_232_1864 ; real_T
B_25_233_1872 [ 2 ] ; real_T B_25_235_1888 ; real_T B_25_236_1896 ; real_T
B_25_237_1904 ; real_T B_25_238_1912 ; real_T B_25_239_1920 ; real_T
B_25_240_1928 ; real_T B_25_241_1936 ; real_T B_25_242_1944 [ 6 ] ; real_T
B_25_248_1992 ; real_T B_25_249_2000 ; real_T B_25_250_2008 ; real_T
B_25_251_2016 ; real_T B_25_252_2024 ; real_T B_25_253_2032 ; real_T
B_25_254_2040 ; real_T B_25_255_2048 ; real_T B_25_256_2056 ; real_T
B_25_257_2064 ; real_T B_25_258_2072 [ 25 ] ; real_T B_25_283_2272 ; real_T
B_25_284_2280 [ 25 ] ; real_T B_25_309_2480 ; real_T B_25_310_2488 [ 2 ] ;
real_T B_25_312_2504 [ 2 ] ; real_T B_25_314_2520 [ 25 ] ; real_T
B_25_339_2720 [ 25 ] ; real_T B_25_364_2920 [ 2 ] ; real_T B_25_366_2936 ;
real_T B_25_367_2944 ; real_T B_25_368_2952 ; real_T B_25_369_2960 [ 8 ] ;
real_T B_24_377_3024 ; real_T B_24_378_3032 ; real_T B_23_379_3040 ; real_T
B_23_380_3048 ; real_T B_16_381_3056 ; real_T B_16_382_3064 ; real_T
B_15_383_3072 ; real_T B_15_384_3080 ; real_T B_15_385_3088 ; real_T
B_15_386_3096 ; real_T B_15_387_3104 ; real_T B_15_388_3112 ; real_T
B_15_389_3120 ; real_T B_15_390_3128 ; real_T B_15_391_3136 ; real_T
B_15_392_3144 ; real_T B_15_393_3152 ; real_T B_15_394_3160 ; real_T
B_15_395_3168 ; real_T B_15_396_3176 ; real_T B_15_397_3184 ; real_T
B_15_398_3192 [ 3 ] ; real_T B_15_401_3216 [ 3 ] ; real_T B_15_404_3240 [ 2 ]
; real_T B_15_406_3256 ; real_T B_15_407_3264 ; real_T B_15_408_3272 ; real_T
B_15_409_3280 ; real_T B_12_410_3288 ; real_T B_12_411_3296 ; real_T
B_11_412_3304 ; real_T B_11_413_3312 ; real_T B_7_414_3320 ; real_T
B_6_415_3328 ; real_T B_6_416_3336 ; real_T B_4_417_3344 ; real_T
B_4_418_3352 ; real_T B_4_419_3360 ; real_T B_4_420_3368 [ 25 ] ; real_T
B_4_445_3568 [ 25 ] ; real_T B_4_470_3768 ; real_T B_4_471_3776 ; real_T
B_4_472_3784 [ 2 ] ; real_T B_4_474_3800 [ 25 ] ; real_T B_4_499_4000 [ 25 ]
; real_T B_4_524_4200 [ 25 ] ; real_T B_4_549_4400 ; real_T B_4_550_4408 ;
real_T B_3_551_4416 ; real_T B_3_552_4424 ; real_T B_3_553_4432 ; real_T
B_3_554_4440 [ 3 ] ; real_T B_25_557_4464 [ 3 ] ; real_T B_25_560_4488 [ 3 ]
; real_T B_25_563_4512 [ 3 ] ; uint8_T B_25_566_4536 ; uint8_T B_25_567_4537
; uint8_T B_25_568_4538 ; uint8_T B_25_569_4539 ; uint8_T B_25_570_4540 ;
uint8_T B_25_571_4541 ; uint8_T B_25_572_4542 ; uint8_T B_25_573_4543 ;
uint8_T B_15_574_4544 ; uint8_T B_15_575_4545 ; boolean_T B_25_576_4546 ;
boolean_T B_25_577_4547 ; boolean_T B_25_578_4548 [ 3 ] ; boolean_T
B_25_581_4551 ; boolean_T B_25_582_4552 ; boolean_T B_25_583_4553 ; boolean_T
B_15_584_4554 ; boolean_T B_15_585_4555 ; boolean_T B_4_586_4556 ; boolean_T
B_4_587_4557 ; boolean_T B_4_588_4558 ; char_T pad_B_4_588_4558 [ 1 ] ;
B_Subsystem1_Micro_Grid_Mains_ON_T Subsystem1_g ;
B_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay_n ;
B_Subsystem1_Micro_Grid_Mains_ON_T Subsystem1_l ;
B_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay_k ;
B_Subsystem1_Micro_Grid_Mains_ON_T Subsystem1 ;
B_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay ;
B_Subsystem1_Micro_Grid_Mains_ON_T Subsystem1_b ;
B_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay_h ; }
B_Micro_Grid_Mains_ON_T ; typedef struct { real_T Rotorangledthetae_DSTATE ;
real_T fluxes_DSTATE [ 5 ] ; real_T StateSpace_DSTATE [ 35 ] ; real_T
UnitDelay_DSTATE [ 6 ] ; real_T UnitDelay_DSTATE_l ; real_T
UnitDelay_DSTATE_b ; real_T StateSpace_DSTATE_a ; real_T
CoulombCounter_DSTATE ; real_T DiscreteTimeIntegrator_DSTATE ; real_T
CurrentFilter_states ; real_T dw_delay_DSTATE ; real_T dw_predict_DSTATE ;
real_T UnitDelay2_DSTATE ; real_T DiscreteStateSpace_DSTATE ; real_T
UnitDelay1_DSTATE ; real_T DiscreteStateSpace_DSTATE_j ; real_T
DiscreteStateSpace_DSTATE_p ; real_T DiscreteStateSpace_DSTATE_l ; real_T
position_DSTATE ; real_T Derivative_states ; real_T
DiscreteTimeIntegrator_DSTATE_p ; real_T DiscreteStateSpace_DSTATE_o ; real_T
position_DSTATE_g ; real_T voltages_DSTATE [ 5 ] ; real_T
Rotorspeeddeviationdw_DSTATE ; real_T theta_DSTATE ; real_T Lmd_sat_DSTATE ;
real_T Lmq_sat_DSTATE ; real_T lastSin ; real_T lastCos ; real_T lastSin_p ;
real_T lastCos_l ; real_T lastSin_i ; real_T lastCos_e ; real_T lastSin_b ;
real_T lastCos_c ; real_T lastSin_pm ; real_T lastCos_b ; real_T lastSin_k ;
real_T lastCos_i ; real_T lastSin_n ; real_T lastCos_g ; real_T lastSin_i3 ;
real_T lastCos_k ; real_T lastSin_f ; real_T lastCos_l1 ; real_T
Initial_FirstOutputTime ; real_T Memory_PreviousInput ; real_T PrevY ; real_T
LastMajorTime ; real_T Initialit_PreviousInput ; real_T Derivative_tmp ;
real_T inversion_DWORK1 [ 25 ] ; real_T inversion_DWORK3 [ 25 ] ; real_T
inversion_DWORK4 [ 25 ] ; real_T inversion_DWORK4_m [ 25 ] ; struct { real_T
modelTStart ; } VariableTransportDelay_RWORK ; struct { real_T modelTStart ;
} VariableTransportDelay_RWORK_i ; struct { real_T modelTStart ; }
VariableTransportDelay_RWORK_id ; struct { void * AS ; void * BS ; void * CS
; void * DS ; void * DX_COL ; void * BD_COL ; void * TMP1 ; void * TMP2 ;
void * XTMP ; void * SWITCH_STATUS ; void * SWITCH_STATUS_INIT ; void *
SW_CHG ; void * G_STATE ; void * USWLAST ; void * XKM12 ; void * XKP12 ; void
* XLAST ; void * ULAST ; void * IDX_SW_CHG ; void * Y_SWITCH ; void *
SWITCH_TYPES ; void * IDX_OUT_SW ; void * SWITCH_TOPO_SAVED_IDX ; void *
SWITCH_MAP ; } StateSpace_PWORK ; void * IabcDG_PWORK ; void * VabcDG_PWORK ;
struct { void * AQHandles ; } _asyncqueue_inserted_for_ToWorkspace4_PWORK ;
struct { void * AQHandles ; } _asyncqueue_inserted_for_ToWorkspace5_PWORK ;
struct { void * AS ; void * BS ; void * CS ; void * DS ; void * DX_COL ; void
* BD_COL ; void * TMP1 ; void * TMP2 ; void * XTMP ; void * SWITCH_STATUS ;
void * SWITCH_STATUS_INIT ; void * SW_CHG ; void * G_STATE ; void * USWLAST ;
void * XKM12 ; void * XKP12 ; void * XLAST ; void * ULAST ; void * IDX_SW_CHG
; void * Y_SWITCH ; void * SWITCH_TYPES ; void * IDX_OUT_SW ; void *
SWITCH_TOPO_SAVED_IDX ; void * SWITCH_MAP ; } StateSpace_PWORK_p ; void *
Iabcgrid_PWORK ; struct { void * AQHandles ; }
_asyncqueue_inserted_for_ToWorkspace_PWORK ; struct { void * AQHandles ; }
_asyncqueue_inserted_for_ToWorkspace1_PWORK ; struct { void * TUbufferPtrs [
3 ] ; } VariableTransportDelay_PWORK ; struct { void * AS ; void * BS ; void
* CS ; void * DS ; void * DX_COL ; void * BD_COL ; void * TMP1 ; void * TMP2
; void * XTMP ; void * SWITCH_STATUS ; void * SWITCH_STATUS_INIT ; void *
SW_CHG ; void * G_STATE ; void * USWLAST ; void * XKM12 ; void * XKP12 ; void
* XLAST ; void * ULAST ; void * IDX_SW_CHG ; void * Y_SWITCH ; void *
SWITCH_TYPES ; void * IDX_OUT_SW ; void * SWITCH_TOPO_SAVED_IDX ; void *
SWITCH_MAP ; } StateSpace_PWORK_b ; void * Ibattery1_PWORK ; void * SoC_PWORK
; void * Vbattery_PWORK ; void * Scope2_PWORK ; void * RectifiedVoltage_PWORK
; void * Scope_PWORK [ 2 ] ; void * Vdclink_PWORK ; void *
ControlSignal_PWORK ; void * Vdclink_PWORK_k ; void * Current_PWORK ; void *
Vabcgrid_PWORK ; struct { void * AQHandles ; }
_asyncqueue_inserted_for_ToWorkspace_PWORK_e ; struct { void * AQHandles ; }
_asyncqueue_inserted_for_ToWorkspace1_PWORK_k ; void * IabcOUT_PWORK ; void *
VabcOUT_PWORK ; struct { void * AQHandles ; }
_asyncqueue_inserted_for_ToWorkspace2_PWORK ; struct { void * AQHandles ; }
_asyncqueue_inserted_for_ToWorkspace3_PWORK ; void * Iabcpu_PWORK ; void *
Speedpu_PWORK ; void * Vfpu_PWORK ; void * Scope_PWORK_a ; struct { void *
TUbufferPtrs [ 3 ] ; } VariableTransportDelay_PWORK_p ; struct { void *
TUbufferPtrs [ 3 ] ; } VariableTransportDelay_PWORK_h ; int32_T systemEnable
; int32_T systemEnable_k ; int32_T systemEnable_d ; int32_T systemEnable_b ;
int32_T systemEnable_i ; int32_T systemEnable_kd ; int32_T systemEnable_c ;
int32_T systemEnable_f ; int32_T systemEnable_m ; int32_T
Subsystem1_sysIdxToRun ; int32_T Subsystempi2delay_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun ; int32_T
AutomaticGainControl_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_b ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_c ; int32_T
TmpAtomicSubsysAtSwitch3Inport3_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitch3Inport1_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitch3Inport3_sysIdxToRun_m ; int32_T
MATLABFunction12_sysIdxToRun ; int32_T MATLABFunction_sysIdxToRun ; int32_T
TmpAtomicSubsysAtICInport1_sysIdxToRun ; int32_T inversion_DWORK2 [ 5 ] ;
int32_T Saturation_sysIdxToRun ; int32_T Lmq_sat_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_d ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_e ; int32_T
TmpAtomicSubsysAtSwitchInport3_sysIdxToRun ; uint32_T m_bpIndex ; uint32_T
m_bpIndex_c ; uint32_T m_bpIndex_b ; int_T StateSpace_IWORK [ 11 ] ; int_T
StateSpace_IWORK_g [ 11 ] ; struct { int_T Tail ; int_T Head ; int_T Last ;
int_T CircularBufSize ; int_T MaxNewBufSize ; } VariableTransportDelay_IWORK
; int_T StateSpace_IWORK_i [ 11 ] ; struct { int_T Tail ; int_T Head ; int_T
Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
VariableTransportDelay_IWORK_k ; struct { int_T Tail ; int_T Head ; int_T
Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
VariableTransportDelay_IWORK_l ; int_T Integrator_MODE ; int_T
Integrator_MODE_p ; int_T Saturation2_MODE ; int_T Saturation_MODE ; int8_T
CoulombCounter_PrevResetState ; int8_T Subsystem1_SubsysRanBC ; int8_T
Subsystempi2delay_SubsysRanBC ; int8_T AutomaticGainControl_SubsysRanBC ;
int8_T Saturation_SubsysRanBC ; int8_T Lmq_sat_SubsysRanBC ; uint8_T
Rotorangledthetae_NumInitCond ; uint8_T CoulombCounter_IC_LOADING ; uint8_T
CoulombCounter_NumInitCond ; uint8_T position_NumInitCond ; uint8_T
DiscreteTimeIntegrator_NumInitCond ; uint8_T position_NumInitCond_k ; uint8_T
Rotorspeeddeviationdw_SYSTEM_ENABLE ; uint8_T
Rotorspeeddeviationdw_NumInitCond ; uint8_T theta_NumInitCond ; boolean_T
RelationalOperator_Mode ; boolean_T Integrator_DWORK1 ; boolean_T
RelationalOperator_Mode_n ; boolean_T PrevLimited ; boolean_T
RelationalOperator2_Mode [ 3 ] ; boolean_T RelationalOperator_Mode_n3 ;
boolean_T RelationalOperator_Mode_i ; boolean_T Subsystem1_MODE ; boolean_T
Subsystempi2delay_MODE ; boolean_T AutomaticGainControl_MODE ; char_T
pad_AutomaticGainControl_MODE [ 5 ] ; DW_Subsystem1_Micro_Grid_Mains_ON_T
Subsystem1_g ; DW_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay_n
; DW_Subsystem1_Micro_Grid_Mains_ON_T Subsystem1_l ;
DW_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay_k ;
DW_Subsystem1_Micro_Grid_Mains_ON_T Subsystem1 ;
DW_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay ;
DW_Subsystem1_Micro_Grid_Mains_ON_T Subsystem1_b ;
DW_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay_h ; }
DW_Micro_Grid_Mains_ON_T ; typedef struct { real_T Integrator_CSTATE ; real_T
Integrator_CSTATE_d ; real_T Integrator_CSTATE_p ; real_T Integrator_CSTATE_m
; real_T VariableTransportDelay_CSTATE ; real_T integrator_CSTATE ; real_T
TransferFcn_CSTATE ; real_T Integrator_x1_CSTATE ; real_T
Integrator_x2_CSTATE ; real_T VariableTransportDelay_CSTATE_m ; real_T
integrator_CSTATE_c ; real_T VariableTransportDelay_CSTATE_a ; real_T
integrator_CSTATE_g ; } X_Micro_Grid_Mains_ON_T ; typedef struct { real_T
Integrator_CSTATE ; real_T Integrator_CSTATE_d ; real_T Integrator_CSTATE_p ;
real_T Integrator_CSTATE_m ; real_T VariableTransportDelay_CSTATE ; real_T
integrator_CSTATE ; real_T TransferFcn_CSTATE ; real_T Integrator_x1_CSTATE ;
real_T Integrator_x2_CSTATE ; real_T VariableTransportDelay_CSTATE_m ; real_T
integrator_CSTATE_c ; real_T VariableTransportDelay_CSTATE_a ; real_T
integrator_CSTATE_g ; } XDot_Micro_Grid_Mains_ON_T ; typedef struct {
boolean_T Integrator_CSTATE ; boolean_T Integrator_CSTATE_d ; boolean_T
Integrator_CSTATE_p ; boolean_T Integrator_CSTATE_m ; boolean_T
VariableTransportDelay_CSTATE ; boolean_T integrator_CSTATE ; boolean_T
TransferFcn_CSTATE ; boolean_T Integrator_x1_CSTATE ; boolean_T
Integrator_x2_CSTATE ; boolean_T VariableTransportDelay_CSTATE_m ; boolean_T
integrator_CSTATE_c ; boolean_T VariableTransportDelay_CSTATE_a ; boolean_T
integrator_CSTATE_g ; } XDis_Micro_Grid_Mains_ON_T ; typedef struct { real_T
Integrator_CSTATE ; real_T Integrator_CSTATE_d ; real_T Integrator_CSTATE_p ;
real_T Integrator_CSTATE_m ; real_T VariableTransportDelay_CSTATE ; real_T
integrator_CSTATE ; real_T TransferFcn_CSTATE ; real_T Integrator_x1_CSTATE ;
real_T Integrator_x2_CSTATE ; real_T VariableTransportDelay_CSTATE_m ; real_T
integrator_CSTATE_c ; real_T VariableTransportDelay_CSTATE_a ; real_T
integrator_CSTATE_g ; } CStateAbsTol_Micro_Grid_Mains_ON_T ; typedef struct {
real_T Integrator_CSTATE ; real_T Integrator_CSTATE_d ; real_T
Integrator_CSTATE_p ; real_T Integrator_CSTATE_m ; real_T
VariableTransportDelay_CSTATE ; real_T integrator_CSTATE ; real_T
TransferFcn_CSTATE ; real_T Integrator_x1_CSTATE ; real_T
Integrator_x2_CSTATE ; real_T VariableTransportDelay_CSTATE_m ; real_T
integrator_CSTATE_c ; real_T VariableTransportDelay_CSTATE_a ; real_T
integrator_CSTATE_g ; } CXPtMin_Micro_Grid_Mains_ON_T ; typedef struct {
real_T Integrator_CSTATE ; real_T Integrator_CSTATE_d ; real_T
Integrator_CSTATE_p ; real_T Integrator_CSTATE_m ; real_T
VariableTransportDelay_CSTATE ; real_T integrator_CSTATE ; real_T
TransferFcn_CSTATE ; real_T Integrator_x1_CSTATE ; real_T
Integrator_x2_CSTATE ; real_T VariableTransportDelay_CSTATE_m ; real_T
integrator_CSTATE_c ; real_T VariableTransportDelay_CSTATE_a ; real_T
integrator_CSTATE_g ; } CXPtMax_Micro_Grid_Mains_ON_T ; typedef struct {
real_T RelationalOperator_RelopInput_ZC ; real_T Integrator_Reset_ZC ; real_T
Integrator_xUpperSaturation_ZC ; real_T Integrator_xLowerSaturation_ZC ;
real_T Integrator_InputPortSignal_ZC ; real_T HitCrossing_HitNoOutput_ZC ;
real_T Integrator_xUpperSaturation_ZC_m ; real_T
Integrator_xLowerSaturation_ZC_b ; real_T Integrator_InputPortSignal_ZC_d ;
real_T RelationalOperator_RelopInput_ZC_l ; real_T Saturation2_UprLim_ZC ;
real_T Saturation2_LwrLim_ZC ; real_T RelationalOperator2_RelopInput_ZC [ 3 ]
; real_T RelationalOperator_RelopInput_ZC_j ; real_T
RelationalOperator_RelopInput_ZC_b ; real_T Saturation_UprLim_ZC ; real_T
Saturation_LwrLim_ZC ; } ZCV_Micro_Grid_Mains_ON_T ; typedef struct {
ZCSigState RelationalOperator_RelopInput_ZCE ; ZCSigState
Integrator_Reset_ZCE ; ZCSigState Integrator_xUpperSaturation_ZCE ;
ZCSigState Integrator_xLowerSaturation_ZCE ; ZCSigState
Integrator_InputPortSignal_ZCE ; ZCSigState HitCrossing_HitNoOutput_ZCE ;
ZCSigState Integrator_xUpperSaturation_ZCE_j ; ZCSigState
Integrator_xLowerSaturation_ZCE_e ; ZCSigState
Integrator_InputPortSignal_ZCE_l ; ZCSigState
RelationalOperator_RelopInput_ZCE_f ; ZCSigState Saturation2_UprLim_ZCE ;
ZCSigState Saturation2_LwrLim_ZCE ; ZCSigState
RelationalOperator2_RelopInput_ZCE [ 3 ] ; ZCSigState
RelationalOperator_RelopInput_ZCE_i ; ZCSigState
RelationalOperator_RelopInput_ZCE_fg ; ZCSigState Saturation_UprLim_ZCE ;
ZCSigState Saturation_LwrLim_ZCE ; } PrevZCX_Micro_Grid_Mains_ON_T ; typedef
struct { const real_T B_25_1069_8336 ; const real_T B_25_1070_8344 ; }
ConstB_Micro_Grid_Mains_ON_T ;
#define Micro_Grid_Mains_ON_rtC(S) ((ConstB_Micro_Grid_Mains_ON_T *) _ssGetConstBlockIO(S))
struct P_Subsystempi2delay_Micro_Grid_Mains_ON_T_ { real_T P_0 [ 2 ] ; } ;
struct P_Subsystem1_Micro_Grid_Mains_ON_T_ { real_T P_0 [ 2 ] ; } ; struct
P_Micro_Grid_Mains_ON_T_ { real_T P_0 ; real_T P_1 ; real_T P_2 [ 2 ] ;
real_T P_3 ; real_T P_4 [ 10 ] ; real_T P_5 [ 10 ] ; real_T P_6 ; real_T P_7
; real_T P_8 [ 3 ] ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ;
real_T P_13 [ 3 ] ; real_T P_14 ; real_T P_15 [ 10 ] ; real_T P_16 [ 10 ] ;
real_T P_17 ; real_T P_18 ; real_T P_19 [ 2 ] ; real_T P_20 [ 25 ] ; real_T
P_21 [ 25 ] ; real_T P_22 [ 25 ] ; real_T P_23 ; real_T P_24 ; real_T P_25 ;
real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 [ 5 ] ; real_T P_30 [ 5
] ; real_T P_31 [ 5 ] ; real_T P_32 [ 5 ] ; real_T P_33 ; real_T P_34 ;
real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T
P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ;
real_T P_46 [ 9 ] ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ;
real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 [ 2 ] ;
real_T P_56 [ 2 ] ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ;
real_T P_61 ; real_T P_62 [ 5 ] ; real_T P_63 ; real_T P_64 [ 5 ] ; real_T
P_65 ; real_T P_66 [ 2 ] ; real_T P_67 [ 28 ] ; real_T P_68 ; real_T P_69 ;
real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T
P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ;
real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T
P_86 ; real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ;
real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 ; real_T
P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101 ; real_T P_102
; real_T P_103 ; real_T P_104 ; real_T P_105 ; real_T P_106 ; real_T P_107 ;
real_T P_108 ; real_T P_109 ; real_T P_110 ; real_T P_111 ; real_T P_112 ;
real_T P_113 ; real_T P_114 ; real_T P_115 ; real_T P_116 ; real_T P_117 ;
real_T P_118 ; real_T P_119 ; real_T P_120 ; real_T P_121 ; real_T P_122 ;
real_T P_123 ; real_T P_124 ; real_T P_125 ; real_T P_126 ; real_T P_127 ;
real_T P_128 ; real_T P_129 ; real_T P_130 ; real_T P_131 ; real_T P_132 ;
real_T P_133 ; real_T P_134 ; real_T P_135 ; real_T P_136 ; real_T P_137 ;
real_T P_138 ; real_T P_139 ; real_T P_140 ; real_T P_141 ; real_T P_142 ;
real_T P_143 ; real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ;
real_T P_148 [ 2 ] ; real_T P_149 [ 1225 ] ; real_T P_150 [ 2 ] ; real_T
P_151 [ 805 ] ; real_T P_152 [ 2 ] ; real_T P_153 [ 1470 ] ; real_T P_154 [ 2
] ; real_T P_155 [ 966 ] ; real_T P_156 [ 2 ] ; real_T P_157 [ 35 ] ; real_T
P_158 ; real_T P_159 ; real_T P_160 ; real_T P_161 ; real_T P_162 ; real_T
P_163 ; real_T P_164 ; real_T P_165 ; real_T P_166 ; real_T P_167 ; real_T
P_168 ; real_T P_169 ; real_T P_170 ; real_T P_171 ; real_T P_172 ; real_T
P_173 ; real_T P_174 ; real_T P_175 ; real_T P_176 [ 9 ] ; real_T P_177 ;
real_T P_178 ; real_T P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182 ;
real_T P_183 ; real_T P_184 ; real_T P_185 ; real_T P_186 ; real_T P_187 ;
real_T P_188 [ 9 ] ; real_T P_189 ; real_T P_190 ; real_T P_191 ; real_T
P_192 ; real_T P_193 [ 9 ] ; real_T P_194 ; real_T P_195 ; real_T P_196 ;
real_T P_197 ; real_T P_198 ; real_T P_199 ; real_T P_200 ; real_T P_201 ;
real_T P_202 ; real_T P_203 ; real_T P_204 ; real_T P_205 ; real_T P_206 ;
real_T P_207 ; real_T P_208 ; real_T P_209 ; real_T P_210 ; real_T P_211 ;
real_T P_212 ; real_T P_213 ; real_T P_214 ; real_T P_215 ; real_T P_216 ;
real_T P_217 ; real_T P_218 ; real_T P_219 ; real_T P_220 ; real_T P_221 ;
real_T P_222 ; real_T P_223 ; real_T P_224 ; real_T P_225 ; real_T P_226 ;
real_T P_227 ; real_T P_228 ; real_T P_229 [ 9 ] ; real_T P_230 ; real_T
P_231 ; real_T P_232 ; real_T P_233 ; real_T P_234 [ 3 ] ; real_T P_235 [ 3 ]
; real_T P_236 ; real_T P_237 ; real_T P_238 ; real_T P_239 ; real_T P_240 ;
real_T P_241 [ 2 ] ; real_T P_242 ; real_T P_243 [ 2 ] ; real_T P_244 ;
real_T P_245 [ 2 ] ; real_T P_246 [ 2 ] ; real_T P_247 [ 2 ] ; real_T P_248 [
2 ] ; real_T P_249 [ 2 ] ; real_T P_250 ; real_T P_251 ; real_T P_252 ;
real_T P_253 ; real_T P_254 ; real_T P_255 ; real_T P_256 ; real_T P_257 ;
real_T P_258 ; real_T P_259 ; real_T P_260 ; real_T P_261 ; real_T P_262 ;
real_T P_263 [ 2 ] ; real_T P_264 ; real_T P_265 ; real_T P_266 ; real_T
P_267 ; real_T P_268 ; real_T P_269 ; real_T P_270 ; real_T P_271 ; real_T
P_272 ; real_T P_273 ; real_T P_274 ; real_T P_275 ; real_T P_276 ; real_T
P_277 ; real_T P_278 ; real_T P_279 ; real_T P_280 ; real_T P_281 ; real_T
P_282 ; real_T P_283 ; real_T P_284 ; real_T P_285 ; real_T P_286 ; real_T
P_287 ; real_T P_288 ; real_T P_289 ; real_T P_290 ; real_T P_291 ; real_T
P_292 ; real_T P_293 ; real_T P_294 [ 2 ] ; real_T P_295 ; real_T P_296 [ 3 ]
; real_T P_297 ; real_T P_298 ; real_T P_299 ; real_T P_300 ; real_T P_301 ;
real_T P_302 [ 18 ] ; real_T P_303 ; real_T P_304 ; real_T P_305 ; real_T
P_306 ; real_T P_307 ; real_T P_308 ; real_T P_309 ; real_T P_310 ; real_T
P_311 ; real_T P_312 ; real_T P_313 ; real_T P_317 ; real_T P_319 ; real_T
P_320 ; real_T P_321 ; real_T P_322 ; real_T P_323 ; real_T P_324 ; real_T
P_325 ; real_T P_326 ; real_T P_327 ; real_T P_328 ; real_T P_329 ; real_T
P_330 ; real_T P_331 ; real_T P_332 ; real_T P_333 ; real_T P_334 ; real_T
P_335 ; real_T P_336 ; real_T P_337 ; real_T P_338 ; real_T P_339 ; real_T
P_340 ; real_T P_341 ; real_T P_342 ; real_T P_343 ; real_T P_344 ; real_T
P_345 [ 2 ] ; real_T P_346 [ 2 ] ; real_T P_347 ; real_T P_348 ; real_T P_349
; real_T P_350 ; real_T P_351 ; real_T P_352 ; real_T P_353 ; real_T P_354 ;
real_T P_355 ; real_T P_356 ; real_T P_357 ; real_T P_358 ; real_T P_359 ;
real_T P_360 ; real_T P_361 ; real_T P_362 ; real_T P_363 ; real_T P_364 ;
real_T P_365 ; real_T P_366 ; real_T P_367 ; real_T P_368 ; real_T P_369 ;
real_T P_370 [ 2 ] ; real_T P_371 ; real_T P_372 ; real_T P_373 ; real_T
P_374 ; real_T P_375 ; real_T P_376 ; real_T P_377 ; real_T P_378 ; real_T
P_379 ; real_T P_380 ; real_T P_381 ; real_T P_382 ; real_T P_383 ; real_T
P_384 ; real_T P_385 ; real_T P_386 ; real_T P_387 ; real_T P_388 ; real_T
P_389 ; real_T P_390 ; real_T P_391 ; real_T P_392 ; real_T P_393 ; real_T
P_394 ; real_T P_395 [ 2 ] ; real_T P_396 ; real_T P_397 ; real_T P_398 ;
real_T P_399 ; real_T P_400 ; real_T P_401 ; real_T P_402 ; real_T P_403 ;
real_T P_404 ; real_T P_405 ; real_T P_406 ; real_T P_407 ; real_T P_408 ;
real_T P_409 ; real_T P_410 ; real_T P_411 ; real_T P_412 [ 6 ] ; real_T
P_413 ; real_T P_414 ; real_T P_415 ; real_T P_416 ; real_T P_417 ; real_T
P_418 ; real_T P_419 ; real_T P_420 ; real_T P_421 ; real_T P_422 ; real_T
P_423 ; real_T P_424 ; real_T P_425 [ 25 ] ; real_T P_426 ; real_T P_427 [ 25
] ; real_T P_428 ; real_T P_429 [ 2 ] ; real_T P_430 [ 2 ] ; real_T P_431 [
25 ] ; real_T P_432 [ 25 ] ; real_T P_433 [ 2 ] ; real_T P_434 ; real_T P_435
; real_T P_436 ; real_T P_437 [ 8 ] ; boolean_T P_438 ; boolean_T P_439 ;
boolean_T P_440 ; boolean_T P_441 ; char_T pad_P_441 [ 4 ] ;
P_Subsystem1_Micro_Grid_Mains_ON_T Subsystem1_g ;
P_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay_n ;
P_Subsystem1_Micro_Grid_Mains_ON_T Subsystem1_l ;
P_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay_k ;
P_Subsystem1_Micro_Grid_Mains_ON_T Subsystem1 ;
P_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay ;
P_Subsystem1_Micro_Grid_Mains_ON_T Subsystem1_b ;
P_Subsystempi2delay_Micro_Grid_Mains_ON_T Subsystempi2delay_h ; } ; extern
P_Micro_Grid_Mains_ON_T Micro_Grid_Mains_ON_rtDefaultP ; extern const
ConstB_Micro_Grid_Mains_ON_T Micro_Grid_Mains_ON_rtInvariant ;
#endif
