#ifndef RTW_HEADER_Soundtest_h_
#define RTW_HEADER_Soundtest_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Soundtest_COMMON_INCLUDES_
#define Soundtest_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
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
#include "dt_info.h"
#include "ext_work.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#endif
#include "Soundtest_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Soundtest
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (12)     
#define NBLOCKIO (12) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
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
typedef struct { real_T czfifsj3oz ; real_T ib03hsddxr ; real_T b1vih2woof ;
real_T ft1a0n1ehw ; real_T ccpkoltuba ; real_T nf5sepae1r ; uint8_T
fcsadje32p ; uint8_T nlywfjb45m ; uint8_T l5a4frtxi0 ; uint8_T dheywqcnzn ;
uint8_T id30cwmetj ; boolean_T ndglj50x2z ; } B ; typedef struct { real_T
dsbvr4pwev [ 1813 ] ; real_T diy0fulw1v [ 1813 ] ; real_T mxbfh1v4sm [ 1813 ]
; real_T jddebgpoxa [ 1813 ] ; real_T kedb2llvpb [ 137 ] ; real_T akjj2jujhy
[ 5 ] ; real_T htn3npmpyc [ 11 ] ; real_T mrwavk3rtu [ 137 ] ; real_T
ochg21hd4z [ 5 ] ; real_T cq5nh4i3nk [ 11 ] ; real_T ht3ddrfrpg [ 137 ] ;
real_T if0df2k4g4 [ 5 ] ; real_T jwyc3nvniv [ 11 ] ; real_T plhtbthenu [ 137
] ; real_T dxcnleurn5 [ 5 ] ; real_T et3cfpbuuj [ 11 ] ; struct { void *
LoggedData [ 3 ] ; } epst4lnx3h ; struct { void * AQHandles ; } jlxac0ng14 ;
struct { void * AQHandles ; } pdrmu0rn2a ; struct { void * AQHandles ; }
eesyvxjae3 ; struct { void * AQHandles ; } pux1ryd5f4 ; struct { void *
AQHandles ; } hj1jo00r1w ; struct { void * AQHandles ; } pw5i2w0o13 ; struct
{ void * AQHandles ; } phxtloxrej ; struct { void * AQHandles ; } keftty1qrf
; struct { void * AQHandles ; } lnnvcjvznh ; struct { void * AQHandles ; }
b0vyhzhvoh ; struct { void * AQHandles ; } d4nv2evlo1 ; struct { void *
AQHandles ; } aipq0nlcyw ; uint8_T kswstcvok1 ; uint8_T jrgwrnn5oz ; uint8_T
macf3k4cd4 ; uint8_T pqdbhjf5ay ; uint8_T hrh4xyuoiw ; } DW ; typedef struct
{ boolean_T dpsnzhtm0n ; boolean_T efy4xl4kgi ; boolean_T bkietojhnr ;
boolean_T cy5dpondld ; boolean_T oofabeuo3g ; boolean_T al4pieaajx ;
boolean_T ommkkbnkx1 ; boolean_T ox5dg5dqwv ; boolean_T netmcfnyd3 ;
boolean_T ei20ddu30v ; boolean_T ahz3vzxds0 ; boolean_T l30yu4h4wi ; } ExtY ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T Counter_CountStep ; real_T Post_1_CountStep ; real_T Post_2_CountStep
; real_T Post_3_CountStep ; real_T Post_4_CountStep ; real_T Comparator_const
; real_T Comparator_const_d033brb2vo ; real_T Comparator_const_pioesafcgo ;
real_T Comparator_const_m25y23yiup ; uint8_T Reset_7_const ; uint8_T
Comparator_1_const ; uint8_T Comparator_2_const ; uint8_T Comparator_3_const
; uint8_T Comparator_4_const ; uint8_T Comparator_1_const_g3nu3rgqbw ;
uint8_T Comparator_2_const_lagsbyf4qy ; uint8_T Comparator_3_const_pwsaox3pev
; uint8_T Comparator_4_const_dgd5oe5hfm ; real_T
GeneratedFilterBlock_InitialStates ; real_T GeneratedFilterBlock_Coefficients
[ 1814 ] ; real_T GeneratedFilterBlock_InitialStates_niatik3e4q ; real_T
GeneratedFilterBlock_Coefficients_oug5f0iyou [ 1814 ] ; real_T
GeneratedFilterBlock_InitialStates_lmekea2412 ; real_T
GeneratedFilterBlock_Coefficients_o0bzmpfr3u [ 1814 ] ; real_T
GeneratedFilterBlock_InitialStates_a1rnyibp4y ; real_T
GeneratedFilterBlock_Coefficients_fhy1dmuvmq [ 1814 ] ; int16_T
Switch_wrap_Threshold ; int16_T Switch_wrap_Threshold_ilxisw3115 ; int16_T
Switch_wrap_Threshold_ey0zfbgwj3 ; int16_T Switch_wrap_Threshold_alk1tdmjnq ;
int16_T Switch_wrap_Threshold_lcat5sauc4 ; uint16_T Mod_value_Value ;
uint16_T Mod_value_Value_pfmi5sjsyq ; uint16_T
Switch_wrap_Threshold_nqdzfhyfsb ; uint16_T Mod_value_Value_hyfgccsjyk ;
uint16_T Mod_value_Value_ouagenfdcs ; uint16_T
Switch_wrap_Threshold_ccptq0vysg ; uint16_T Mod_value_Value_d2hq32y35n ;
uint16_T Mod_value_Value_ollj1kioal ; uint16_T
Switch_wrap_Threshold_nqfooyrgjc ; uint16_T Mod_value_Value_co1alzad4v ;
uint16_T Mod_value_Value_co2rbcel4i ; uint16_T
Switch_wrap_Threshold_ipekyipjv5 ; uint16_T Mod_value_Value_aaywqtzjrm ;
uint16_T Mod_value_Value_ez5ekr1h5l ; uint16_T
Switch_wrap_Threshold_gqqppszgtc ; boolean_T Free_running_or_modulo_Value ;
boolean_T const_load_Value ; boolean_T
Free_running_or_modulo_Value_pa1sfshgyy ; boolean_T
const_load_Value_de3qw32hgi ; boolean_T
Free_running_or_modulo_Value_lpk1sphxlx ; boolean_T
const_load_Value_dtby5pprax ; boolean_T
Free_running_or_modulo_Value_fxpzz5wo0e ; boolean_T
const_load_Value_mwh51w42oa ; boolean_T
Free_running_or_modulo_Value_h5efkkinpr ; boolean_T
const_load_Value_iqbiffpytv ; boolean_T const_dir_Value ; boolean_T
const_dir_Value_dvidi3pjbj ; boolean_T const_rst_Value ; boolean_T
const_dir_Value_gdz2gdxwjs ; boolean_T const_rst_Value_iktdo5gxcw ; boolean_T
const_dir_Value_isja52yvkp ; boolean_T const_rst_Value_kby3yeewcc ; boolean_T
const_dir_Value_jnp44nu52s ; boolean_T const_rst_Value_kcy5vsg3r5 ; uint8_T
Init_value_Value ; uint8_T const_load_val_Value ; uint8_T From_value_Value ;
uint8_T Constant_Value ; uint8_T Init_value_Value_p0egjy1hzz ; uint8_T
const_load_val_Value_fbmg2xziyv ; uint8_T From_value_Value_gy12crc3fm ;
uint8_T Constant_Value_date50fpml ; uint8_T Init_value_Value_oxrom1yvr2 ;
uint8_T const_load_val_Value_ae5sfrtanm ; uint8_T From_value_Value_pws1nszmok
; uint8_T Constant_Value_b1wde2d4ks ; uint8_T Init_value_Value_hfvjow5qjd ;
uint8_T const_load_val_Value_bmmopv0qum ; uint8_T From_value_Value_cee0qult2g
; uint8_T Constant_Value_hk2g3vr2ni ; uint8_T Init_value_Value_dzhbzxnf55 ;
uint8_T const_load_val_Value_dglxkdn0vc ; uint8_T From_value_Value_in33eojgx2
; uint8_T Constant_Value_oqpfb3zgy2 ; uint8_T Count_reg_InitialCondition ;
uint8_T Count_reg_InitialCondition_f54ov2skey ; uint8_T
Count_reg_InitialCondition_exbsx0wihj ; uint8_T
Count_reg_InitialCondition_c3rgtkvq2p ; uint8_T
Count_reg_InitialCondition_lcttsx30ps ; uint8_T Step_value_Value ; uint8_T
Step_value_Value_l4spz3550o ; uint8_T Step_value_Value_ln0o53q5vb ; uint8_T
Step_value_Value_hd3zbq5j43 ; uint8_T Step_value_Value_c3g5okkrrz ; } ;
extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW
rtDW ; extern ExtY rtY ; extern P rtP ; extern mxArray *
mr_Soundtest_GetDWork ( ) ; extern void mr_Soundtest_SetDWork ( const mxArray
* ssDW ) ; extern mxArray * mr_Soundtest_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo * Soundtest_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
