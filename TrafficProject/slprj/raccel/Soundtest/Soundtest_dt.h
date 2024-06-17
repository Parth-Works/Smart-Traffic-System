#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "uint16_T" , 14 , 2 } , { "int16_T" , 15
, 2 } , { "int16_T" , 16 , 2 } } ; static uint_T rtDataTypeSizes [ ] = {
sizeof ( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof (
uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) ,
sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof (
int_T ) , sizeof ( void * ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) ,
sizeof ( uint16_T ) , sizeof ( int16_T ) , sizeof ( int16_T ) } ; static
const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" ,
"uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"uint16_T" , "int16_T" , "int16_T" } ; static DataTypeTransition
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . czfifsj3oz ) , 0 , 0 , 6 } ,
{ ( char_T * ) ( & rtB . fcsadje32p ) , 3 , 0 , 5 } , { ( char_T * ) ( & rtB
. ndglj50x2z ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW . dsbvr4pwev [ 0 ] ) ,
0 , 0 , 7864 } , { ( char_T * ) ( & rtDW . epst4lnx3h . LoggedData [ 0 ] ) ,
11 , 0 , 15 } , { ( char_T * ) ( & rtDW . kswstcvok1 ) , 3 , 0 , 5 } } ;
static DataTypeTransitionTable rtBTransTable = { 6U , rtBTransitions } ;
static DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
Counter_CountStep ) , 0 , 0 , 9 } , { ( char_T * ) ( & rtP . Reset_7_const )
, 3 , 0 , 9 } , { ( char_T * ) ( & rtP . GeneratedFilterBlock_InitialStates )
, 0 , 0 , 7260 } , { ( char_T * ) ( & rtP . Switch_wrap_Threshold ) , 16 , 0
, 5 } , { ( char_T * ) ( & rtP . Mod_value_Value ) , 14 , 0 , 15 } , { (
char_T * ) ( & rtP . Free_running_or_modulo_Value ) , 8 , 0 , 19 } , { (
char_T * ) ( & rtP . Init_value_Value ) , 3 , 0 , 30 } } ; static
DataTypeTransitionTable rtPTransTable = { 7U , rtPTransitions } ;
