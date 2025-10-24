#ifndef BoostConverter_h_
#define BoostConverter_h_
#ifndef BoostConverter_COMMON_INCLUDES_
#define BoostConverter_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "BoostConverter_types.h"
#include <stddef.h>
#include "rt_zcfcn.h"
#include "rtGetNaN.h"
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "zero_crossing_types.h"
#define MODEL_NAME BoostConverter
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (37) 
#define NUM_ZC_EVENTS (2) 
#ifndef NCSTATES
#define NCSTATES (6)   
#elif NCSTATES != 6
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T ldemcwf00w ; real_T nakyvj04a1 ; real_T m2b1nfjmhc [
3 ] ; real_T h5vpotfg4s [ 6 ] ; real_T jrlfdl2hqp ; real_T fbwybvroaj ;
real_T ov0gfuixpn ; real_T n0iensv3c5 ; real_T h1mp4mgbb3 ; real_T lbbqsjji0m
; real_T pa0me12c1m ; real_T oaazhxapzu ; real_T n2fwe452jt ; real_T
hh123vifhd ; real_T mjmt3wp12q ; real_T f1usjqoibe ; real_T miswuvizqy ;
real_T l0pgeuedq0 ; real_T i1dlj4fspj ; real_T bakgz2z12b ; real_T p3ifbgnqt5
; real_T eflbg3wwqo ; real_T pty04vevwg ; real_T i3yue2n4px ; real_T
esc23sc1wa ; real_T awm2pfwfkk ; real_T iwt2pd3usf ; real_T d24vdz2yfj ;
real_T d3e052cahd ; real_T exjjnufx5s ; real_T dgoxzfnrb5 ; real_T hnc03my5wq
; boolean_T azfgmr0zid ; boolean_T jobxkikgee ; } B ; typedef struct { real_T
oo014pokhm ; real_T psxtjj5nlv ; real_T bdgs14std1 [ 2 ] ; void * ifzhmqv4yg
[ 22 ] ; struct { void * LoggedData [ 3 ] ; } b45dm2yqqa ; struct { void *
LoggedData ; } jsq51btfco ; struct { void * LoggedData ; } ndlsejjrcp ;
int32_T pyhkuc20o4 ; int32_T mllkig2dyu ; int_T nlaif3mn3j [ 23 ] ; int_T
ius3yojd3t ; int_T c2cq3uyeea [ 4 ] ; int_T oh3hln1yvn ; int_T h2z5p0rstn ;
int_T btehitdfwy ; int_T hw4rczbcdr ; boolean_T hfjuot02mh ; boolean_T
o1knzjdf2y ; boolean_T oiercb2ob0 ; boolean_T c5q21oc2sp ; boolean_T
f3lyfy4pud ; boolean_T lelsbvtlh3 ; } DW ; typedef struct { real_T mk2jgpoe42
; real_T j0ilte4oye [ 2 ] ; real_T h4zuhzucpt ; real_T bjxqg4xqwt ; real_T
dhziggee5s ; } X ; typedef struct { real_T mk2jgpoe42 ; real_T j0ilte4oye [ 2
] ; real_T h4zuhzucpt ; real_T bjxqg4xqwt ; real_T dhziggee5s ; } XDot ;
typedef struct { boolean_T mk2jgpoe42 ; boolean_T j0ilte4oye [ 2 ] ;
boolean_T h4zuhzucpt ; boolean_T bjxqg4xqwt ; boolean_T dhziggee5s ; } XDis ;
typedef struct { real_T mk2jgpoe42 ; real_T j0ilte4oye [ 2 ] ; real_T
h4zuhzucpt ; real_T bjxqg4xqwt ; real_T dhziggee5s ; } CStateAbsTol ; typedef
struct { real_T mk2jgpoe42 ; real_T j0ilte4oye [ 2 ] ; real_T h4zuhzucpt ;
real_T bjxqg4xqwt ; real_T dhziggee5s ; } CXPtMin ; typedef struct { real_T
mk2jgpoe42 ; real_T j0ilte4oye [ 2 ] ; real_T h4zuhzucpt ; real_T bjxqg4xqwt
; real_T dhziggee5s ; } CXPtMax ; typedef struct { real_T h1krccv2i0 ; real_T
pdrmjhyexc ; real_T aalizalkcp [ 4 ] ; real_T kw4was1pxw ; real_T mubzahflhr
; real_T mzmtq4lmjq ; real_T ppugf55rvp ; real_T o0rdyhxlmk ; real_T
nb54qpoisd ; real_T pjhz4mzmih ; real_T cs4z042enf ; real_T no3cldpgy0 ;
real_T m3ievpqnab ; real_T l3fejh4fe4 ; real_T px1yzwr1j2 ; } ZCV ; typedef
struct { ZCSigState npek3fk5gu ; ZCSigState icw2eeyvnd ; } PrevZCX ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
Constant_Value ; real_T Constant_Value_odsjjxhutl ; real_T
Constant_Value_iwekyg2z5g ; real_T TransferFcn1_A ; real_T TransferFcn1_C ;
real_T Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T
StateSpace_P1_Size [ 2 ] ; real_T StateSpace_P1 [ 128 ] ; real_T
StateSpace_P2_Size [ 2 ] ; real_T StateSpace_P2 [ 4 ] ; real_T
StateSpace_P3_Size [ 2 ] ; real_T StateSpace_P3 [ 2 ] ; real_T
StateSpace_P4_Size [ 2 ] ; real_T StateSpace_P4 [ 624 ] ; real_T
StateSpace_P5_Size [ 2 ] ; real_T StateSpace_P5 [ 6 ] ; real_T
StateSpace_P6_Size [ 2 ] ; real_T StateSpace_P6 [ 3 ] ; real_T
StateSpace_P7_Size [ 2 ] ; real_T StateSpace_P7 [ 3 ] ; real_T
StateSpace_P8_Size [ 2 ] ; real_T StateSpace_P8 [ 3 ] ; real_T
StateSpace_P9_Size [ 2 ] ; real_T StateSpace_P9 ; real_T StateSpace_P10_Size
[ 2 ] ; real_T StateSpace_P10 ; real_T CurrentFilter_A ; real_T
CurrentFilter_C ; real_T Initialit_InitialCondition ; real_T
CoulombCounter_UpperSat ; real_T CoulombCounter_LowerSat ; real_T Gain1_Gain
; real_T donotdeletethisgain_Gain ; real_T Gain1_Gain_plyejubh1e ; real_T
Saturation_UpperSat_k3bm0knlts ; real_T Saturation_LowerSat_gtsxumhbdz ;
real_T Integrator2_IC ; real_T Gain_Gain ; real_T Gain_Gain_jsklo00cx1 ;
real_T Gain1_Gain_f1lo10iae3 ; real_T Gain2_Gain ; real_T Constant4_Value ;
real_T Constant2_Value ; real_T uib2_Gain ; real_T HitCrossing_Offset ;
real_T UnitDelay_InitialCondition ; real_T
donotdeletethisgain_Gain_mjx303azsy ; real_T
donotdeletethisgain_Gain_d4xgu1x4hh ; real_T Constant_Value_l4asnk125a ;
real_T Constant1_Value ; real_T capacity_Value ; real_T constantK_Value ;
real_T constantA_Value ; real_T constantB_Value ; real_T
Constant_Value_ihbzrbcjcd ; real_T gate_Value ; real_T gate_Value_hfhtxagkxf
; } ; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ;
extern X rtX ; extern DW rtDW ; extern PrevZCX rtPrevZCX ; extern P rtP ;
extern mxArray * mr_BoostConverter_GetDWork ( ) ; extern void
mr_BoostConverter_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_BoostConverter_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * BoostConverter_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T
tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
