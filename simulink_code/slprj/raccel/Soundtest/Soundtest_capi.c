#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Soundtest_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Soundtest.h"
#include "Soundtest_capi.h"
#include "Soundtest_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Soundtest/Input_Sensors/Sensor_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 1 , 0 , TARGET_STRING ( "Soundtest/Input_Sensors/Sensor_2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"Soundtest/Input_Sensors/Sensor_3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 3 , 0 , TARGET_STRING ( "Soundtest/Input_Sensors/Sensor_4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Soundtest/Ambulance_Detectors/Ambulance_Detector_1/Complex _to_Magnitude" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"Soundtest/Traffic System/Counter/Switch_reset" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_1/Bandpass_Filter/Generated Filter Block"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"Soundtest/Ambulance_Detectors/Ambulance_Detector_1/Comparator/Compare" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/Switch_reset" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/Switch_reset" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/Switch_reset" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/Switch_reset" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 ,
0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 12 ,
TARGET_STRING ( "Soundtest/Traffic System/Counter" ) , TARGET_STRING (
"CountStep" ) , 0 , 0 , 0 } , { 13 , TARGET_STRING (
"Soundtest/Traffic System/Reset_7" ) , TARGET_STRING ( "const" ) , 1 , 0 , 0
} , { 14 , TARGET_STRING (
"Soundtest/Ambulance_Detectors/Ambulance_Detector_1/Comparator" ) ,
TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 15 , TARGET_STRING (
"Soundtest/Ambulance_Detectors/Ambulance_Detector_2/Comparator" ) ,
TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 16 , TARGET_STRING (
"Soundtest/Ambulance_Detectors/Ambulance_Detector_3/Comparator" ) ,
TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 17 , TARGET_STRING (
"Soundtest/Ambulance_Detectors/Ambulance_Detector_4/Comparator" ) ,
TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 18 , TARGET_STRING (
"Soundtest/Traffic System/Counter/Constant" ) , TARGET_STRING ( "Value" ) , 1
, 0 , 0 } , { 19 , TARGET_STRING (
"Soundtest/Traffic System/Counter/Free_running_or_modulo" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 20 , TARGET_STRING (
"Soundtest/Traffic System/Counter/From_value" ) , TARGET_STRING ( "Value" ) ,
1 , 0 , 0 } , { 21 , TARGET_STRING (
"Soundtest/Traffic System/Counter/Init_value" ) , TARGET_STRING ( "Value" ) ,
1 , 0 , 0 } , { 22 , TARGET_STRING (
"Soundtest/Traffic System/Counter/Step_value" ) , TARGET_STRING ( "Value" ) ,
1 , 0 , 0 } , { 23 , TARGET_STRING (
"Soundtest/Traffic System/Counter/const_dir" ) , TARGET_STRING ( "Value" ) ,
2 , 0 , 0 } , { 24 , TARGET_STRING (
"Soundtest/Traffic System/Counter/const_load" ) , TARGET_STRING ( "Value" ) ,
2 , 0 , 0 } , { 25 , TARGET_STRING (
"Soundtest/Traffic System/Counter/const_load_val" ) , TARGET_STRING ( "Value"
) , 1 , 0 , 0 } , { 26 , TARGET_STRING (
"Soundtest/Traffic System/Counter/Count_reg" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 0 } , { 27 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Comparator_1" ) , TARGET_STRING ( "const"
) , 1 , 0 , 0 } , { 28 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Comparator_2" ) , TARGET_STRING ( "const"
) , 1 , 0 , 0 } , { 29 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Comparator_3" ) , TARGET_STRING ( "const"
) , 1 , 0 , 0 } , { 30 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Comparator_4" ) , TARGET_STRING ( "const"
) , 1 , 0 , 0 } , { 31 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1" ) , TARGET_STRING ( "CountStep" )
, 0 , 0 , 0 } , { 32 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2" ) , TARGET_STRING ( "CountStep" )
, 0 , 0 , 0 } , { 33 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Comparator_1" ) , TARGET_STRING ( "const"
) , 1 , 0 , 0 } , { 34 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Comparator_2" ) , TARGET_STRING ( "const"
) , 1 , 0 , 0 } , { 35 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Comparator_3" ) , TARGET_STRING ( "const"
) , 1 , 0 , 0 } , { 36 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Comparator_4" ) , TARGET_STRING ( "const"
) , 1 , 0 , 0 } , { 37 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3" ) , TARGET_STRING ( "CountStep" )
, 0 , 0 , 0 } , { 38 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4" ) , TARGET_STRING ( "CountStep" )
, 0 , 0 , 0 } , { 39 , TARGET_STRING (
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_1/Bandpass_Filter/Generated Filter Block"
) , TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 40 , TARGET_STRING (
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_1/Bandpass_Filter/Generated Filter Block"
) , TARGET_STRING ( "Coefficients" ) , 0 , 1 , 0 } , { 41 , TARGET_STRING (
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_2/Bandpass_Filter/Generated Filter Block"
) , TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 42 , TARGET_STRING (
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_2/Bandpass_Filter/Generated Filter Block"
) , TARGET_STRING ( "Coefficients" ) , 0 , 1 , 0 } , { 43 , TARGET_STRING (
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_3/Bandpass_Filter/Generated Filter Block"
) , TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 44 , TARGET_STRING (
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_3/Bandpass_Filter/Generated Filter Block"
) , TARGET_STRING ( "Coefficients" ) , 0 , 1 , 0 } , { 45 , TARGET_STRING (
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_4/Bandpass_Filter/Generated Filter Block"
) , TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 46 , TARGET_STRING (
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_4/Bandpass_Filter/Generated Filter Block"
) , TARGET_STRING ( "Coefficients" ) , 0 , 1 , 0 } , { 47 , TARGET_STRING (
"Soundtest/Traffic System/Counter/Add_wrap/Mod_value" ) , TARGET_STRING (
"Value" ) , 3 , 0 , 1 } , { 48 , TARGET_STRING (
"Soundtest/Traffic System/Counter/Add_wrap/Switch_wrap" ) , TARGET_STRING (
"Threshold" ) , 3 , 0 , 1 } , { 49 , TARGET_STRING (
"Soundtest/Traffic System/Counter/Sub_wrap/Mod_value" ) , TARGET_STRING (
"Value" ) , 3 , 0 , 1 } , { 50 , TARGET_STRING (
"Soundtest/Traffic System/Counter/Sub_wrap/Switch_wrap" ) , TARGET_STRING (
"Threshold" ) , 4 , 0 , 2 } , { 51 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/Constant" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 52 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/Free_running_or_modulo" ) ,
TARGET_STRING ( "Value" ) , 2 , 0 , 0 } , { 53 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/From_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 54 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/Init_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 55 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/Step_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 56 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/const_dir" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 57 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/const_load" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 58 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/const_load_val" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 59 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/const_rst" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 60 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/Count_reg" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 0 } , { 61 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/Constant" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 62 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/Free_running_or_modulo" ) ,
TARGET_STRING ( "Value" ) , 2 , 0 , 0 } , { 63 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/From_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 64 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/Init_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 65 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/Step_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 66 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/const_dir" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 67 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/const_load" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 68 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/const_load_val" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 69 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/const_rst" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 70 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/Count_reg" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 0 } , { 71 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/Constant" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 72 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/Free_running_or_modulo" ) ,
TARGET_STRING ( "Value" ) , 2 , 0 , 0 } , { 73 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/From_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 74 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/Init_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 75 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/Step_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 76 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/const_dir" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 77 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/const_load" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 78 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/const_load_val" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 79 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/const_rst" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 80 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/Count_reg" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 0 } , { 81 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/Constant" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 82 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/Free_running_or_modulo" ) ,
TARGET_STRING ( "Value" ) , 2 , 0 , 0 } , { 83 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/From_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 84 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/Init_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 85 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/Step_value" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 86 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/const_dir" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 87 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/const_load" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 88 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/const_load_val" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 89 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/const_rst" ) , TARGET_STRING (
"Value" ) , 2 , 0 , 0 } , { 90 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/Count_reg" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 0 } , { 91 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/Add_wrap/Mod_value" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 1 } , { 92 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/Add_wrap/Switch_wrap" ) ,
TARGET_STRING ( "Threshold" ) , 3 , 0 , 1 } , { 93 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/Sub_wrap/Mod_value" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 1 } , { 94 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_1/Sub_wrap/Switch_wrap" ) ,
TARGET_STRING ( "Threshold" ) , 4 , 0 , 2 } , { 95 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/Add_wrap/Mod_value" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 1 } , { 96 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/Add_wrap/Switch_wrap" ) ,
TARGET_STRING ( "Threshold" ) , 3 , 0 , 1 } , { 97 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/Sub_wrap/Mod_value" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 1 } , { 98 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_1/Post_2/Sub_wrap/Switch_wrap" ) ,
TARGET_STRING ( "Threshold" ) , 4 , 0 , 2 } , { 99 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/Add_wrap/Mod_value" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 1 } , { 100 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/Add_wrap/Switch_wrap" ) ,
TARGET_STRING ( "Threshold" ) , 3 , 0 , 1 } , { 101 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/Sub_wrap/Mod_value" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 1 } , { 102 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_3/Sub_wrap/Switch_wrap" ) ,
TARGET_STRING ( "Threshold" ) , 4 , 0 , 2 } , { 103 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/Add_wrap/Mod_value" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 1 } , { 104 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/Add_wrap/Switch_wrap" ) ,
TARGET_STRING ( "Threshold" ) , 3 , 0 , 1 } , { 105 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/Sub_wrap/Mod_value" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 1 } , { 106 , TARGET_STRING (
"Soundtest/Traffic System/Tr_Sys_2/Post_4/Sub_wrap/Switch_wrap" ) ,
TARGET_STRING ( "Threshold" ) , 4 , 0 , 2 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 107 , 0
, TARGET_STRING ( "Soundtest/Yellow1" ) , TARGET_STRING ( "" ) , 1 , 2 , 0 ,
0 , 0 } , { 108 , 0 , TARGET_STRING ( "Soundtest/Green1" ) , TARGET_STRING (
"" ) , 2 , 2 , 0 , 0 , 0 } , { 109 , 0 , TARGET_STRING ( "Soundtest/Red1" ) ,
TARGET_STRING ( "" ) , 3 , 2 , 0 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
"Soundtest/Yellow2" ) , TARGET_STRING ( "" ) , 4 , 2 , 0 , 0 , 0 } , { 111 ,
0 , TARGET_STRING ( "Soundtest/Green2" ) , TARGET_STRING ( "" ) , 5 , 2 , 0 ,
0 , 0 } , { 112 , 0 , TARGET_STRING ( "Soundtest/Red2" ) , TARGET_STRING ( ""
) , 6 , 2 , 0 , 0 , 0 } , { 113 , 0 , TARGET_STRING ( "Soundtest/Yellow3" ) ,
TARGET_STRING ( "" ) , 7 , 2 , 0 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
"Soundtest/Green3" ) , TARGET_STRING ( "" ) , 8 , 2 , 0 , 0 , 0 } , { 115 , 0
, TARGET_STRING ( "Soundtest/Red3" ) , TARGET_STRING ( "" ) , 9 , 2 , 0 , 0 ,
0 } , { 116 , 0 , TARGET_STRING ( "Soundtest/Yellow4" ) , TARGET_STRING ( ""
) , 10 , 2 , 0 , 0 , 0 } , { 117 , 0 , TARGET_STRING ( "Soundtest/Green4" ) ,
TARGET_STRING ( "" ) , 11 , 2 , 0 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
"Soundtest/Red4" ) , TARGET_STRING ( "" ) , 12 , 2 , 0 , 0 , 0 } , { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . czfifsj3oz , & rtB . ft1a0n1ehw ,
& rtB . ccpkoltuba , & rtB . nf5sepae1r , & rtB . b1vih2woof , & rtB .
fcsadje32p , & rtB . ib03hsddxr , & rtB . ndglj50x2z , & rtB . nlywfjb45m , &
rtB . l5a4frtxi0 , & rtB . dheywqcnzn , & rtB . id30cwmetj , & rtP .
Counter_CountStep , & rtP . Reset_7_const , & rtP . Comparator_const , & rtP
. Comparator_const_d033brb2vo , & rtP . Comparator_const_pioesafcgo , & rtP .
Comparator_const_m25y23yiup , & rtP . Constant_Value , & rtP .
Free_running_or_modulo_Value , & rtP . From_value_Value , & rtP .
Init_value_Value , & rtP . Step_value_Value , & rtP . const_dir_Value , & rtP
. const_load_Value , & rtP . const_load_val_Value , & rtP .
Count_reg_InitialCondition , & rtP . Comparator_1_const , & rtP .
Comparator_2_const , & rtP . Comparator_3_const , & rtP . Comparator_4_const
, & rtP . Post_1_CountStep , & rtP . Post_2_CountStep , & rtP .
Comparator_1_const_g3nu3rgqbw , & rtP . Comparator_2_const_lagsbyf4qy , & rtP
. Comparator_3_const_pwsaox3pev , & rtP . Comparator_4_const_dgd5oe5hfm , &
rtP . Post_3_CountStep , & rtP . Post_4_CountStep , & rtP .
GeneratedFilterBlock_InitialStates , & rtP .
GeneratedFilterBlock_Coefficients [ 0 ] , & rtP .
GeneratedFilterBlock_InitialStates_niatik3e4q , & rtP .
GeneratedFilterBlock_Coefficients_oug5f0iyou [ 0 ] , & rtP .
GeneratedFilterBlock_InitialStates_lmekea2412 , & rtP .
GeneratedFilterBlock_Coefficients_o0bzmpfr3u [ 0 ] , & rtP .
GeneratedFilterBlock_InitialStates_a1rnyibp4y , & rtP .
GeneratedFilterBlock_Coefficients_fhy1dmuvmq [ 0 ] , & rtP .
Mod_value_Value_pfmi5sjsyq , & rtP . Switch_wrap_Threshold_nqdzfhyfsb , & rtP
. Mod_value_Value , & rtP . Switch_wrap_Threshold , & rtP .
Constant_Value_date50fpml , & rtP . Free_running_or_modulo_Value_pa1sfshgyy ,
& rtP . From_value_Value_gy12crc3fm , & rtP . Init_value_Value_p0egjy1hzz , &
rtP . Step_value_Value_l4spz3550o , & rtP . const_dir_Value_dvidi3pjbj , &
rtP . const_load_Value_de3qw32hgi , & rtP . const_load_val_Value_fbmg2xziyv ,
& rtP . const_rst_Value , & rtP . Count_reg_InitialCondition_f54ov2skey , &
rtP . Constant_Value_b1wde2d4ks , & rtP .
Free_running_or_modulo_Value_lpk1sphxlx , & rtP . From_value_Value_pws1nszmok
, & rtP . Init_value_Value_oxrom1yvr2 , & rtP . Step_value_Value_ln0o53q5vb ,
& rtP . const_dir_Value_gdz2gdxwjs , & rtP . const_load_Value_dtby5pprax , &
rtP . const_load_val_Value_ae5sfrtanm , & rtP . const_rst_Value_iktdo5gxcw ,
& rtP . Count_reg_InitialCondition_exbsx0wihj , & rtP .
Constant_Value_hk2g3vr2ni , & rtP . Free_running_or_modulo_Value_fxpzz5wo0e ,
& rtP . From_value_Value_cee0qult2g , & rtP . Init_value_Value_hfvjow5qjd , &
rtP . Step_value_Value_hd3zbq5j43 , & rtP . const_dir_Value_isja52yvkp , &
rtP . const_load_Value_mwh51w42oa , & rtP . const_load_val_Value_bmmopv0qum ,
& rtP . const_rst_Value_kby3yeewcc , & rtP .
Count_reg_InitialCondition_c3rgtkvq2p , & rtP . Constant_Value_oqpfb3zgy2 , &
rtP . Free_running_or_modulo_Value_h5efkkinpr , & rtP .
From_value_Value_in33eojgx2 , & rtP . Init_value_Value_dzhbzxnf55 , & rtP .
Step_value_Value_c3g5okkrrz , & rtP . const_dir_Value_jnp44nu52s , & rtP .
const_load_Value_iqbiffpytv , & rtP . const_load_val_Value_dglxkdn0vc , & rtP
. const_rst_Value_kcy5vsg3r5 , & rtP . Count_reg_InitialCondition_lcttsx30ps
, & rtP . Mod_value_Value_ouagenfdcs , & rtP .
Switch_wrap_Threshold_ccptq0vysg , & rtP . Mod_value_Value_hyfgccsjyk , & rtP
. Switch_wrap_Threshold_ilxisw3115 , & rtP . Mod_value_Value_ollj1kioal , &
rtP . Switch_wrap_Threshold_nqfooyrgjc , & rtP . Mod_value_Value_d2hq32y35n ,
& rtP . Switch_wrap_Threshold_ey0zfbgwj3 , & rtP . Mod_value_Value_co2rbcel4i
, & rtP . Switch_wrap_Threshold_ipekyipjv5 , & rtP .
Mod_value_Value_co1alzad4v , & rtP . Switch_wrap_Threshold_alk1tdmjnq , & rtP
. Mod_value_Value_ez5ekr1h5l , & rtP . Switch_wrap_Threshold_gqqppszgtc , &
rtP . Mod_value_Value_aaywqtzjrm , & rtP . Switch_wrap_Threshold_lcat5sauc4 ,
& rtY . dpsnzhtm0n , & rtY . efy4xl4kgi , & rtY . bkietojhnr , & rtY .
cy5dpondld , & rtY . oofabeuo3g , & rtY . al4pieaajx , & rtY . ommkkbnkx1 , &
rtY . ox5dg5dqwv , & rtY . netmcfnyd3 , & rtY . ei20ddu30v , & rtY .
ahz3vzxds0 , & rtY . l30yu4h4wi , } ; static int32_T * rtVarDimsAddrMap [ ] =
{ ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , SS_UINT8 , 0 , 0 ,
0 } , { "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) ,
SS_BOOLEAN , 0 , 0 , 0 } , { "unsigned short" , "uint16_T" , 0 , 0 , sizeof (
uint16_T ) , SS_UINT16 , 0 , 0 , 0 } , { "short" , "int16_T" , 0 , 0 , sizeof
( int16_T ) , SS_INT16 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 1 , 1814 } ; static const
real_T rtcapiStoredFloats [ ] = { 2.0833333333333333E-5 , 0.0 , 1.0 } ;
static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 9 , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 9 , 0 , 1 } } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 0 ,
0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals
, 12 , rtRootInputs , 0 , rtRootOutputs , 12 } , { rtBlockParameters , 95 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 4180985868U , 3928969692U , 2080150678U , 768653082U } , ( NULL ) , 0 , 0
, rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
Soundtest_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Soundtest_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Soundtest_host_InitializeDataMapInfo ( Soundtest_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
