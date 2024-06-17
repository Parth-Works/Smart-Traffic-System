#include "rt_logging_mmi.h"
#include "Soundtest_capi.h"
#include <math.h>
#include "Soundtest.h"
#include "Soundtest_private.h"
#include "Soundtest_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 1 , & stopRequested ) ; }
rtExtModeShutdown ( 1 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 2 ; const char_T
* gbl_raccel_Version = "9.5 (R2021a) 14-Nov-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct
* S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; DW rtDW ; ExtY rtY ; static SimStruct model_S ; SimStruct * const rtS
= & model_S ; void MdlInitialize ( void ) { int32_T i ; LibReset ( & rtDW .
kedb2llvpb [ 0U ] ) ; for ( i = 0 ; i < 1813 ; i ++ ) { rtDW . dsbvr4pwev [ i
] = rtP . GeneratedFilterBlock_InitialStates ; } LibReset ( & rtDW .
mrwavk3rtu [ 0U ] ) ; for ( i = 0 ; i < 1813 ; i ++ ) { rtDW . diy0fulw1v [ i
] = rtP . GeneratedFilterBlock_InitialStates_niatik3e4q ; } LibReset ( & rtDW
. ht3ddrfrpg [ 0U ] ) ; for ( i = 0 ; i < 1813 ; i ++ ) { rtDW . mxbfh1v4sm [
i ] = rtP . GeneratedFilterBlock_InitialStates_lmekea2412 ; } LibReset ( &
rtDW . plhtbthenu [ 0U ] ) ; for ( i = 0 ; i < 1813 ; i ++ ) { rtDW .
jddebgpoxa [ i ] = rtP . GeneratedFilterBlock_InitialStates_a1rnyibp4y ; }
rtDW . kswstcvok1 = rtP . Count_reg_InitialCondition ; rtDW . jrgwrnn5oz =
rtP . Count_reg_InitialCondition_f54ov2skey ; rtDW . macf3k4cd4 = rtP .
Count_reg_InitialCondition_exbsx0wihj ; rtDW . pqdbhjf5ay = rtP .
Count_reg_InitialCondition_c3rgtkvq2p ; rtDW . hrh4xyuoiw = rtP .
Count_reg_InitialCondition_lcttsx30ps ; } void MdlStart ( void ) { char_T *
sErr ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath
= sdiGetLabelFromChars ( "Soundtest/Yellow1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . jlxac0ng14 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "7f5fc950-8b62-4032-8331-ecec3502e795" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. jlxac0ng14 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . jlxac0ng14
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . jlxac0ng14 . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . jlxac0ng14 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . jlxac0ng14 . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . jlxac0ng14 . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . jlxac0ng14 . AQHandles , 1 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Soundtest/Green1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . pdrmu0rn2a . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "5498a294-03ce-48a0-bf33-7283532f3152" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. pdrmu0rn2a . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . pdrmu0rn2a
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . pdrmu0rn2a . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . pdrmu0rn2a . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . pdrmu0rn2a . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . pdrmu0rn2a . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . pdrmu0rn2a . AQHandles , 2 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Soundtest/Green4" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . eesyvxjae3 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "e66792ee-cdce-40eb-b715-ad78e711e4bb" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. eesyvxjae3 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . eesyvxjae3
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . eesyvxjae3 . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . eesyvxjae3 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . eesyvxjae3 . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . eesyvxjae3 . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . eesyvxjae3 . AQHandles , 11 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Soundtest/Red4" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . pux1ryd5f4 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ad97b9ae-47d6-4ee3-be55-3c9b5a2d2ae8" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. pux1ryd5f4 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . pux1ryd5f4
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . pux1ryd5f4 . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . pux1ryd5f4 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . pux1ryd5f4 . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . pux1ryd5f4 . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . pux1ryd5f4 . AQHandles , 12 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Soundtest/Red1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . hj1jo00r1w . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "551a78cc-f021-44ef-84a4-5c4940234710" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. hj1jo00r1w . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . hj1jo00r1w
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . hj1jo00r1w . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . hj1jo00r1w . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . hj1jo00r1w . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . hj1jo00r1w . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . hj1jo00r1w . AQHandles , 3 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Soundtest/Yellow2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . pw5i2w0o13 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "e7fa3ffd-e279-4693-8fc4-bece6ef4486d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. pw5i2w0o13 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . pw5i2w0o13
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . pw5i2w0o13 . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . pw5i2w0o13 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . pw5i2w0o13 . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . pw5i2w0o13 . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . pw5i2w0o13 . AQHandles , 4 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Soundtest/Green2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . phxtloxrej . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "b1a87683-1b12-4f2c-b279-7d8d905f24b6" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. phxtloxrej . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . phxtloxrej
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . phxtloxrej . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . phxtloxrej . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . phxtloxrej . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . phxtloxrej . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . phxtloxrej . AQHandles , 5 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Soundtest/Red2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . keftty1qrf . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "bd7fb50e-2fc0-4836-b0b2-589c85f7ba5c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. keftty1qrf . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . keftty1qrf
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . keftty1qrf . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . keftty1qrf . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . keftty1qrf . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . keftty1qrf . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . keftty1qrf . AQHandles , 6 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Soundtest/Yellow3" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . lnnvcjvznh . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "2f06f6ab-57c1-4086-8527-e35654edce58" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. lnnvcjvznh . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . lnnvcjvznh
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . lnnvcjvznh . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . lnnvcjvznh . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . lnnvcjvznh . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . lnnvcjvznh . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . lnnvcjvznh . AQHandles , 7 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Soundtest/Green3" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . b0vyhzhvoh . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "3a59b661-967a-4b67-9f4b-240f4773839f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. b0vyhzhvoh . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . b0vyhzhvoh
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . b0vyhzhvoh . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . b0vyhzhvoh . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . b0vyhzhvoh . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . b0vyhzhvoh . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . b0vyhzhvoh . AQHandles , 8 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Soundtest/Red3" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . d4nv2evlo1 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "9d8aa9ca-a954-4d70-899e-c31490475c09" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. d4nv2evlo1 . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . d4nv2evlo1
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . d4nv2evlo1 . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . d4nv2evlo1 . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . d4nv2evlo1 . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . d4nv2evlo1 . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . d4nv2evlo1 . AQHandles , 9 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Soundtest/Yellow4" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_BOOLEAN ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . aipq0nlcyw . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "7995a5d6-92ac-44c7-92a7-25d59b928af7" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. aipq0nlcyw . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . aipq0nlcyw
. AQHandles , "2.08333e-05" , 2.0833333333333333E-5 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . aipq0nlcyw . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . aipq0nlcyw . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . aipq0nlcyw . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . aipq0nlcyw . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . aipq0nlcyw . AQHandles , 10 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } sErr =
GetErrorBuffer ( & rtDW . kedb2llvpb [ 0U ] ) ; CreateHostLibrary (
"frommmfile.dll" , & rtDW . kedb2llvpb [ 0U ] ) ; createAudioInfo ( & rtDW .
akjj2jujhy [ 0U ] , 1U , 1U , 48000.0 , 32 , 1 , 1 , 0 , GetNullPointer ( ) )
; createVideoInfo ( & rtDW . htn3npmpyc [ 0U ] , 0U , 0.0 , 0.0 , "" , 0 , 0
, 0 , 0 , 1U , 0 , 0 , GetNullPointer ( ) ) ; if ( * sErr == 0 ) {
LibCreate_FromMMFile ( & rtDW . kedb2llvpb [ 0U ] , 0 , ( void * )
 "D:\\Technical Softwares\\Majot Project\\[MONO]Traffic Sound+Amb Effect-320k.mp3"
, 1 ,
 "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\shared\\multimedia\\bin\\win64\\audio\\audiofilemfreaderplugin.dll"
,
 "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\shared\\multimedia\\bin\\win64\\audioslconverter"
, & rtDW . akjj2jujhy [ 0U ] , & rtDW . htn3npmpyc [ 0U ] , 0U , 1U , 1U , 0U
, 0U , 1U , 1.0 , 9.2233720368547758E+18 ) ; } if ( * sErr == 0 ) { LibStart
( & rtDW . kedb2llvpb [ 0U ] ) ; } if ( * sErr != 0 ) { DestroyHostLibrary (
& rtDW . kedb2llvpb [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS ,
sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr = GetErrorBuffer ( & rtDW
. mrwavk3rtu [ 0U ] ) ; CreateHostLibrary ( "frommmfile.dll" , & rtDW .
mrwavk3rtu [ 0U ] ) ; createAudioInfo ( & rtDW . ochg21hd4z [ 0U ] , 1U , 1U
, 48000.0 , 32 , 1 , 1 , 0 , GetNullPointer ( ) ) ; createVideoInfo ( & rtDW
. cq5nh4i3nk [ 0U ] , 0U , 0.0 , 0.0 , "" , 0 , 0 , 0 , 0 , 1U , 0 , 0 ,
GetNullPointer ( ) ) ; if ( * sErr == 0 ) { LibCreate_FromMMFile ( & rtDW .
mrwavk3rtu [ 0U ] , 0 , ( void * )
"D:\\Technical Softwares\\Majot Project\\[MONO]Traffic Noise-320k.mp3" , 1 ,
 "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\shared\\multimedia\\bin\\win64\\audio\\audiofilemfreaderplugin.dll"
,
 "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\shared\\multimedia\\bin\\win64\\audioslconverter"
, & rtDW . ochg21hd4z [ 0U ] , & rtDW . cq5nh4i3nk [ 0U ] , 0U , 1U , 1U , 0U
, 0U , 1U , 1.0 , 9.2233720368547758E+18 ) ; } if ( * sErr == 0 ) { LibStart
( & rtDW . mrwavk3rtu [ 0U ] ) ; } if ( * sErr != 0 ) { DestroyHostLibrary (
& rtDW . mrwavk3rtu [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS ,
sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr = GetErrorBuffer ( & rtDW
. ht3ddrfrpg [ 0U ] ) ; CreateHostLibrary ( "frommmfile.dll" , & rtDW .
ht3ddrfrpg [ 0U ] ) ; createAudioInfo ( & rtDW . if0df2k4g4 [ 0U ] , 1U , 1U
, 48000.0 , 32 , 1 , 1 , 0 , GetNullPointer ( ) ) ; createVideoInfo ( & rtDW
. jwyc3nvniv [ 0U ] , 0U , 0.0 , 0.0 , "" , 0 , 0 , 0 , 0 , 1U , 0 , 0 ,
GetNullPointer ( ) ) ; if ( * sErr == 0 ) { LibCreate_FromMMFile ( & rtDW .
ht3ddrfrpg [ 0U ] , 0 , ( void * )
"D:\\Technical Softwares\\Majot Project\\[MONO]Traffic Noise-320k.mp3" , 1 ,
 "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\shared\\multimedia\\bin\\win64\\audio\\audiofilemfreaderplugin.dll"
,
 "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\shared\\multimedia\\bin\\win64\\audioslconverter"
, & rtDW . if0df2k4g4 [ 0U ] , & rtDW . jwyc3nvniv [ 0U ] , 0U , 1U , 1U , 0U
, 0U , 1U , 1.0 , 9.2233720368547758E+18 ) ; } if ( * sErr == 0 ) { LibStart
( & rtDW . ht3ddrfrpg [ 0U ] ) ; } if ( * sErr != 0 ) { DestroyHostLibrary (
& rtDW . ht3ddrfrpg [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS ,
sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr = GetErrorBuffer ( & rtDW
. plhtbthenu [ 0U ] ) ; CreateHostLibrary ( "frommmfile.dll" , & rtDW .
plhtbthenu [ 0U ] ) ; createAudioInfo ( & rtDW . dxcnleurn5 [ 0U ] , 1U , 1U
, 48000.0 , 32 , 1 , 1 , 0 , GetNullPointer ( ) ) ; createVideoInfo ( & rtDW
. et3cfpbuuj [ 0U ] , 0U , 0.0 , 0.0 , "" , 0 , 0 , 0 , 0 , 1U , 0 , 0 ,
GetNullPointer ( ) ) ; if ( * sErr == 0 ) { LibCreate_FromMMFile ( & rtDW .
plhtbthenu [ 0U ] , 0 , ( void * )
"D:\\Technical Softwares\\Majot Project\\[MONO]Traffic Noise-320k.mp3" , 1 ,
 "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\shared\\multimedia\\bin\\win64\\audio\\audiofilemfreaderplugin.dll"
,
 "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\shared\\multimedia\\bin\\win64\\audioslconverter"
, & rtDW . dxcnleurn5 [ 0U ] , & rtDW . et3cfpbuuj [ 0U ] , 0U , 1U , 1U , 0U
, 0U , 1U , 1.0 , 9.2233720368547758E+18 ) ; } if ( * sErr == 0 ) { LibStart
( & rtDW . plhtbthenu [ 0U ] ) ; } if ( * sErr != 0 ) { DestroyHostLibrary (
& rtDW . plhtbthenu [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS ,
sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { real_T acc1 ; real_T acp2gzt40y ; real_T
ax1tw1nj0n ; real_T jpqnpizjsa ; real_T zCurr ; int32_T n ; int16_T
ivcit1zch5 ; uint16_T a0irmqbquj ; char_T * sErr ; uint8_T mz4fxhvewf ;
boolean_T d1bkqeiajt ; boolean_T eal5pzydcu ; boolean_T egdyzzyxeo ;
boolean_T g0qvgp35te ; boolean_T ijxhlmli3m ; boolean_T iqeq22qel4 ;
boolean_T ir12mug40c ; boolean_T jm2q2uolu2 ; boolean_T k2bmorgwel ;
boolean_T k5atnjkmaz ; boolean_T kuujwr0xvu ; boolean_T luiu1rs2ja ;
boolean_T mpcjww0iyd ; boolean_T mrjemcdxox ; boolean_T npk1b0kied ;
boolean_T nql3rlmfl4 ; boolean_T pmatg1npow ; void * audio ; sErr =
GetErrorBuffer ( & rtDW . kedb2llvpb [ 0U ] ) ; audio = ( void * ) & rtB .
czfifsj3oz ; LibOutputs_FromMMFile ( & rtDW . kedb2llvpb [ 0U ] ,
GetNullPointer ( ) , audio , GetNullPointer ( ) , GetNullPointer ( ) ,
GetNullPointer ( ) ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } rtB . ib03hsddxr = rtB . czfifsj3oz ; acc1
= 0.0 ; jpqnpizjsa = rtB . ib03hsddxr ; for ( n = 0 ; n < 1813 ; n ++ ) {
zCurr = jpqnpizjsa ; jpqnpizjsa = rtDW . dsbvr4pwev [ n ] ; rtDW . dsbvr4pwev
[ n ] = zCurr ; acc1 += rtP . GeneratedFilterBlock_Coefficients [ n ] * zCurr
; } rtB . ib03hsddxr = rtP . GeneratedFilterBlock_Coefficients [ n ] *
jpqnpizjsa + acc1 ; rtB . b1vih2woof = muDoubleScalarAbs ( rtB . ib03hsddxr )
; rtB . ndglj50x2z = ( rtB . b1vih2woof >= rtP . Comparator_const ) ; sErr =
GetErrorBuffer ( & rtDW . mrwavk3rtu [ 0U ] ) ; audio = ( void * ) & rtB .
ft1a0n1ehw ; LibOutputs_FromMMFile ( & rtDW . mrwavk3rtu [ 0U ] ,
GetNullPointer ( ) , audio , GetNullPointer ( ) , GetNullPointer ( ) ,
GetNullPointer ( ) ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } jpqnpizjsa = rtB . ft1a0n1ehw ; acc1 = 0.0
; for ( n = 0 ; n < 1813 ; n ++ ) { zCurr = jpqnpizjsa ; jpqnpizjsa = rtDW .
diy0fulw1v [ n ] ; rtDW . diy0fulw1v [ n ] = zCurr ; acc1 += rtP .
GeneratedFilterBlock_Coefficients_oug5f0iyou [ n ] * zCurr ; } jpqnpizjsa =
rtP . GeneratedFilterBlock_Coefficients_oug5f0iyou [ n ] * jpqnpizjsa + acc1
; sErr = GetErrorBuffer ( & rtDW . ht3ddrfrpg [ 0U ] ) ; audio = ( void * ) &
rtB . ccpkoltuba ; LibOutputs_FromMMFile ( & rtDW . ht3ddrfrpg [ 0U ] ,
GetNullPointer ( ) , audio , GetNullPointer ( ) , GetNullPointer ( ) ,
GetNullPointer ( ) ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } ax1tw1nj0n = rtB . ccpkoltuba ; acc1 = 0.0
; for ( n = 0 ; n < 1813 ; n ++ ) { zCurr = ax1tw1nj0n ; ax1tw1nj0n = rtDW .
mxbfh1v4sm [ n ] ; rtDW . mxbfh1v4sm [ n ] = zCurr ; acc1 += rtP .
GeneratedFilterBlock_Coefficients_o0bzmpfr3u [ n ] * zCurr ; } ax1tw1nj0n =
rtP . GeneratedFilterBlock_Coefficients_o0bzmpfr3u [ n ] * ax1tw1nj0n + acc1
; sErr = GetErrorBuffer ( & rtDW . plhtbthenu [ 0U ] ) ; audio = ( void * ) &
rtB . nf5sepae1r ; LibOutputs_FromMMFile ( & rtDW . plhtbthenu [ 0U ] ,
GetNullPointer ( ) , audio , GetNullPointer ( ) , GetNullPointer ( ) ,
GetNullPointer ( ) ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } acp2gzt40y = rtB . nf5sepae1r ; acc1 = 0.0
; for ( n = 0 ; n < 1813 ; n ++ ) { zCurr = acp2gzt40y ; acp2gzt40y = rtDW .
jddebgpoxa [ n ] ; rtDW . jddebgpoxa [ n ] = zCurr ; acc1 += rtP .
GeneratedFilterBlock_Coefficients_fhy1dmuvmq [ n ] * zCurr ; } acp2gzt40y =
rtP . GeneratedFilterBlock_Coefficients_fhy1dmuvmq [ n ] * acp2gzt40y + acc1
; ijxhlmli3m = ( ( ! rtB . ndglj50x2z ) && ( ! ( muDoubleScalarAbs (
jpqnpizjsa ) >= rtP . Comparator_const_d033brb2vo ) ) && ( ! (
muDoubleScalarAbs ( ax1tw1nj0n ) >= rtP . Comparator_const_pioesafcgo ) ) &&
( ! ( muDoubleScalarAbs ( acp2gzt40y ) >= rtP . Comparator_const_m25y23yiup )
) ) ; jm2q2uolu2 = ( rtDW . kswstcvok1 > rtP . Comparator_1_const ) ;
eal5pzydcu = ( ijxhlmli3m && ( ! jm2q2uolu2 ) ) ; g0qvgp35te = ( rtDW .
jrgwrnn5oz <= rtP . Comparator_3_const ) ; luiu1rs2ja = ( eal5pzydcu &&
g0qvgp35te ) ; rtY . dpsnzhtm0n = luiu1rs2ja ; g0qvgp35te = ! g0qvgp35te ;
rtY . efy4xl4kgi = g0qvgp35te ; rtY . bkietojhnr = jm2q2uolu2 ; mrjemcdxox =
( jm2q2uolu2 && ( rtDW . kswstcvok1 < rtP . Comparator_2_const ) ) ;
iqeq22qel4 = ( rtDW . macf3k4cd4 <= rtP . Comparator_4_const ) ; kuujwr0xvu =
( mrjemcdxox && iqeq22qel4 ) ; rtY . cy5dpondld = kuujwr0xvu ; iqeq22qel4 = !
iqeq22qel4 ; rtY . oofabeuo3g = iqeq22qel4 ; pmatg1npow = ! mrjemcdxox ; rtY
. al4pieaajx = pmatg1npow ; k2bmorgwel = ( rtDW . kswstcvok1 <= rtP .
Comparator_2_const_lagsbyf4qy ) ; npk1b0kied = ( ( rtDW . kswstcvok1 >= rtP .
Comparator_1_const_g3nu3rgqbw ) && k2bmorgwel ) ; d1bkqeiajt = ( rtDW .
pqdbhjf5ay <= rtP . Comparator_3_const_pwsaox3pev ) ; egdyzzyxeo = (
npk1b0kied && d1bkqeiajt ) ; rtY . ommkkbnkx1 = egdyzzyxeo ; d1bkqeiajt = !
d1bkqeiajt ; rtY . ox5dg5dqwv = d1bkqeiajt ; ir12mug40c = ! npk1b0kied ; rtY
. netmcfnyd3 = ir12mug40c ; mpcjww0iyd = ! k2bmorgwel ; nql3rlmfl4 = ( rtDW .
hrh4xyuoiw <= rtP . Comparator_4_const_dgd5oe5hfm ) ; k5atnjkmaz = (
mpcjww0iyd && nql3rlmfl4 ) ; rtY . ei20ddu30v = k5atnjkmaz ; nql3rlmfl4 = !
nql3rlmfl4 ; rtY . ahz3vzxds0 = nql3rlmfl4 ; rtY . l30yu4h4wi = k2bmorgwel ;
{ if ( rtDW . jlxac0ng14 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . jlxac0ng14 . AQHandles , ssGetTaskTime ( rtS , 0 ) ,
( char * ) & luiu1rs2ja + 0 ) ; } } { if ( rtDW . pdrmu0rn2a . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . pdrmu0rn2a . AQHandles ,
ssGetTaskTime ( rtS , 0 ) , ( char * ) & g0qvgp35te + 0 ) ; } } { if ( rtDW .
eesyvxjae3 . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
eesyvxjae3 . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & nql3rlmfl4
+ 0 ) ; } } { if ( rtDW . pux1ryd5f4 . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( rtDW . pux1ryd5f4 . AQHandles , ssGetTaskTime ( rtS , 0 )
, ( char * ) & k2bmorgwel + 0 ) ; } } { if ( rtDW . hj1jo00r1w . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . hj1jo00r1w . AQHandles ,
ssGetTaskTime ( rtS , 0 ) , ( char * ) & jm2q2uolu2 + 0 ) ; } } { if ( rtDW .
pw5i2w0o13 . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
pw5i2w0o13 . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & kuujwr0xvu
+ 0 ) ; } } { if ( rtDW . phxtloxrej . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( rtDW . phxtloxrej . AQHandles , ssGetTaskTime ( rtS , 0 )
, ( char * ) & iqeq22qel4 + 0 ) ; } } { if ( rtDW . keftty1qrf . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . keftty1qrf . AQHandles ,
ssGetTaskTime ( rtS , 0 ) , ( char * ) & pmatg1npow + 0 ) ; } } { if ( rtDW .
lnnvcjvznh . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
lnnvcjvznh . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & egdyzzyxeo
+ 0 ) ; } } { if ( rtDW . b0vyhzhvoh . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( rtDW . b0vyhzhvoh . AQHandles , ssGetTaskTime ( rtS , 0 )
, ( char * ) & d1bkqeiajt + 0 ) ; } } { if ( rtDW . d4nv2evlo1 . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . d4nv2evlo1 . AQHandles ,
ssGetTaskTime ( rtS , 0 ) , ( char * ) & ir12mug40c + 0 ) ; } } { if ( rtDW .
aipq0nlcyw . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
aipq0nlcyw . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & k5atnjkmaz
+ 0 ) ; } } if ( ( boolean_T ) ( ( muDoubleScalarSign ( rtP .
Counter_CountStep ) == 1.0 ) ^ rtP . const_dir_Value ) ) { ivcit1zch5 = (
int16_T ) ( rtDW . kswstcvok1 - rtP . Step_value_Value ) ; ivcit1zch5 = (
int16_T ) ( ( ivcit1zch5 & 256U ) != 0U ? ivcit1zch5 | - 256 : ivcit1zch5 &
255 ) ; if ( ivcit1zch5 >= rtP . Switch_wrap_Threshold ) { mz4fxhvewf = (
uint8_T ) ivcit1zch5 ; } else { ivcit1zch5 += ( int16_T ) rtP .
Mod_value_Value ; mz4fxhvewf = ( uint8_T ) ( ( ivcit1zch5 & 1024U ) != 0U ?
ivcit1zch5 | - 1024 : ivcit1zch5 & 1023 ) ; } } else { a0irmqbquj = (
uint16_T ) ( ( uint32_T ) rtP . Step_value_Value + rtDW . kswstcvok1 ) ; if (
a0irmqbquj > rtP . Switch_wrap_Threshold_nqdzfhyfsb ) { ivcit1zch5 = (
int16_T ) ( a0irmqbquj - ( int16_T ) rtP . Mod_value_Value_pfmi5sjsyq ) ;
mz4fxhvewf = ( uint8_T ) ( ( ivcit1zch5 & 1024U ) != 0U ? ivcit1zch5 | - 1024
: ivcit1zch5 & 1023 ) ; } else { mz4fxhvewf = ( uint8_T ) a0irmqbquj ; } } if
( rtDW . hrh4xyuoiw == rtP . Reset_7_const ) { rtB . fcsadje32p = rtP .
Init_value_Value ; } else if ( rtP . const_load_Value ) { rtB . fcsadje32p =
rtP . const_load_val_Value ; } else if ( ijxhlmli3m ) { if ( rtP .
Free_running_or_modulo_Value ) { rtB . fcsadje32p = mz4fxhvewf ; } else if (
rtDW . kswstcvok1 == rtP . Constant_Value ) { rtB . fcsadje32p = rtP .
From_value_Value ; } else { rtB . fcsadje32p = mz4fxhvewf ; } } else { rtB .
fcsadje32p = rtDW . kswstcvok1 ; } if ( ( boolean_T ) ( ( muDoubleScalarSign
( rtP . Post_1_CountStep ) == 1.0 ) ^ rtP . const_dir_Value_dvidi3pjbj ) ) {
ivcit1zch5 = ( int16_T ) ( rtDW . jrgwrnn5oz - rtP .
Step_value_Value_l4spz3550o ) ; ivcit1zch5 = ( int16_T ) ( ( ivcit1zch5 &
256U ) != 0U ? ivcit1zch5 | - 256 : ivcit1zch5 & 255 ) ; if ( ivcit1zch5 >=
rtP . Switch_wrap_Threshold_ilxisw3115 ) { mz4fxhvewf = ( uint8_T )
ivcit1zch5 ; } else { ivcit1zch5 += ( int16_T ) rtP .
Mod_value_Value_hyfgccsjyk ; mz4fxhvewf = ( uint8_T ) ( ( ivcit1zch5 & 1024U
) != 0U ? ivcit1zch5 | - 1024 : ivcit1zch5 & 1023 ) ; } } else { a0irmqbquj =
( uint16_T ) ( ( uint32_T ) rtP . Step_value_Value_l4spz3550o + rtDW .
jrgwrnn5oz ) ; if ( a0irmqbquj > rtP . Switch_wrap_Threshold_ccptq0vysg ) {
ivcit1zch5 = ( int16_T ) ( a0irmqbquj - ( int16_T ) rtP .
Mod_value_Value_ouagenfdcs ) ; mz4fxhvewf = ( uint8_T ) ( ( ivcit1zch5 &
1024U ) != 0U ? ivcit1zch5 | - 1024 : ivcit1zch5 & 1023 ) ; } else {
mz4fxhvewf = ( uint8_T ) a0irmqbquj ; } } if ( rtP . const_rst_Value ) { rtB
. nlywfjb45m = rtP . Init_value_Value_p0egjy1hzz ; } else if ( rtP .
const_load_Value_de3qw32hgi ) { rtB . nlywfjb45m = rtP .
const_load_val_Value_fbmg2xziyv ; } else if ( eal5pzydcu ) { if ( rtP .
Free_running_or_modulo_Value_pa1sfshgyy ) { rtB . nlywfjb45m = mz4fxhvewf ; }
else if ( rtDW . jrgwrnn5oz == rtP . Constant_Value_date50fpml ) { rtB .
nlywfjb45m = rtP . From_value_Value_gy12crc3fm ; } else { rtB . nlywfjb45m =
mz4fxhvewf ; } } else { rtB . nlywfjb45m = rtDW . jrgwrnn5oz ; } if ( (
boolean_T ) ( ( muDoubleScalarSign ( rtP . Post_2_CountStep ) == 1.0 ) ^ rtP
. const_dir_Value_gdz2gdxwjs ) ) { ivcit1zch5 = ( int16_T ) ( rtDW .
macf3k4cd4 - rtP . Step_value_Value_ln0o53q5vb ) ; ivcit1zch5 = ( int16_T ) (
( ivcit1zch5 & 256U ) != 0U ? ivcit1zch5 | - 256 : ivcit1zch5 & 255 ) ; if (
ivcit1zch5 >= rtP . Switch_wrap_Threshold_ey0zfbgwj3 ) { mz4fxhvewf = (
uint8_T ) ivcit1zch5 ; } else { ivcit1zch5 += ( int16_T ) rtP .
Mod_value_Value_d2hq32y35n ; mz4fxhvewf = ( uint8_T ) ( ( ivcit1zch5 & 1024U
) != 0U ? ivcit1zch5 | - 1024 : ivcit1zch5 & 1023 ) ; } } else { a0irmqbquj =
( uint16_T ) ( ( uint32_T ) rtP . Step_value_Value_ln0o53q5vb + rtDW .
macf3k4cd4 ) ; if ( a0irmqbquj > rtP . Switch_wrap_Threshold_nqfooyrgjc ) {
ivcit1zch5 = ( int16_T ) ( a0irmqbquj - ( int16_T ) rtP .
Mod_value_Value_ollj1kioal ) ; mz4fxhvewf = ( uint8_T ) ( ( ivcit1zch5 &
1024U ) != 0U ? ivcit1zch5 | - 1024 : ivcit1zch5 & 1023 ) ; } else {
mz4fxhvewf = ( uint8_T ) a0irmqbquj ; } } if ( rtP .
const_rst_Value_iktdo5gxcw ) { rtB . l5a4frtxi0 = rtP .
Init_value_Value_oxrom1yvr2 ; } else if ( rtP . const_load_Value_dtby5pprax )
{ rtB . l5a4frtxi0 = rtP . const_load_val_Value_ae5sfrtanm ; } else if (
mrjemcdxox ) { if ( rtP . Free_running_or_modulo_Value_lpk1sphxlx ) { rtB .
l5a4frtxi0 = mz4fxhvewf ; } else if ( rtDW . macf3k4cd4 == rtP .
Constant_Value_b1wde2d4ks ) { rtB . l5a4frtxi0 = rtP .
From_value_Value_pws1nszmok ; } else { rtB . l5a4frtxi0 = mz4fxhvewf ; } }
else { rtB . l5a4frtxi0 = rtDW . macf3k4cd4 ; } if ( ( boolean_T ) ( (
muDoubleScalarSign ( rtP . Post_3_CountStep ) == 1.0 ) ^ rtP .
const_dir_Value_isja52yvkp ) ) { ivcit1zch5 = ( int16_T ) ( rtDW . pqdbhjf5ay
- rtP . Step_value_Value_hd3zbq5j43 ) ; ivcit1zch5 = ( int16_T ) ( (
ivcit1zch5 & 256U ) != 0U ? ivcit1zch5 | - 256 : ivcit1zch5 & 255 ) ; if (
ivcit1zch5 >= rtP . Switch_wrap_Threshold_alk1tdmjnq ) { mz4fxhvewf = (
uint8_T ) ivcit1zch5 ; } else { ivcit1zch5 += ( int16_T ) rtP .
Mod_value_Value_co1alzad4v ; mz4fxhvewf = ( uint8_T ) ( ( ivcit1zch5 & 1024U
) != 0U ? ivcit1zch5 | - 1024 : ivcit1zch5 & 1023 ) ; } } else { a0irmqbquj =
( uint16_T ) ( ( uint32_T ) rtP . Step_value_Value_hd3zbq5j43 + rtDW .
pqdbhjf5ay ) ; if ( a0irmqbquj > rtP . Switch_wrap_Threshold_ipekyipjv5 ) {
ivcit1zch5 = ( int16_T ) ( a0irmqbquj - ( int16_T ) rtP .
Mod_value_Value_co2rbcel4i ) ; mz4fxhvewf = ( uint8_T ) ( ( ivcit1zch5 &
1024U ) != 0U ? ivcit1zch5 | - 1024 : ivcit1zch5 & 1023 ) ; } else {
mz4fxhvewf = ( uint8_T ) a0irmqbquj ; } } if ( rtP .
const_rst_Value_kby3yeewcc ) { rtB . dheywqcnzn = rtP .
Init_value_Value_hfvjow5qjd ; } else if ( rtP . const_load_Value_mwh51w42oa )
{ rtB . dheywqcnzn = rtP . const_load_val_Value_bmmopv0qum ; } else if (
npk1b0kied ) { if ( rtP . Free_running_or_modulo_Value_fxpzz5wo0e ) { rtB .
dheywqcnzn = mz4fxhvewf ; } else if ( rtDW . pqdbhjf5ay == rtP .
Constant_Value_hk2g3vr2ni ) { rtB . dheywqcnzn = rtP .
From_value_Value_cee0qult2g ; } else { rtB . dheywqcnzn = mz4fxhvewf ; } }
else { rtB . dheywqcnzn = rtDW . pqdbhjf5ay ; } if ( ( boolean_T ) ( (
muDoubleScalarSign ( rtP . Post_4_CountStep ) == 1.0 ) ^ rtP .
const_dir_Value_jnp44nu52s ) ) { ivcit1zch5 = ( int16_T ) ( rtDW . hrh4xyuoiw
- rtP . Step_value_Value_c3g5okkrrz ) ; ivcit1zch5 = ( int16_T ) ( (
ivcit1zch5 & 256U ) != 0U ? ivcit1zch5 | - 256 : ivcit1zch5 & 255 ) ; if (
ivcit1zch5 >= rtP . Switch_wrap_Threshold_lcat5sauc4 ) { mz4fxhvewf = (
uint8_T ) ivcit1zch5 ; } else { ivcit1zch5 += ( int16_T ) rtP .
Mod_value_Value_aaywqtzjrm ; mz4fxhvewf = ( uint8_T ) ( ( ivcit1zch5 & 1024U
) != 0U ? ivcit1zch5 | - 1024 : ivcit1zch5 & 1023 ) ; } } else { a0irmqbquj =
( uint16_T ) ( ( uint32_T ) rtP . Step_value_Value_c3g5okkrrz + rtDW .
hrh4xyuoiw ) ; if ( a0irmqbquj > rtP . Switch_wrap_Threshold_gqqppszgtc ) {
ivcit1zch5 = ( int16_T ) ( a0irmqbquj - ( int16_T ) rtP .
Mod_value_Value_ez5ekr1h5l ) ; mz4fxhvewf = ( uint8_T ) ( ( ivcit1zch5 &
1024U ) != 0U ? ivcit1zch5 | - 1024 : ivcit1zch5 & 1023 ) ; } else {
mz4fxhvewf = ( uint8_T ) a0irmqbquj ; } } if ( rtP .
const_rst_Value_kcy5vsg3r5 ) { rtB . id30cwmetj = rtP .
Init_value_Value_dzhbzxnf55 ; } else if ( rtP . const_load_Value_iqbiffpytv )
{ rtB . id30cwmetj = rtP . const_load_val_Value_dglxkdn0vc ; } else if (
mpcjww0iyd ) { if ( rtP . Free_running_or_modulo_Value_h5efkkinpr ) { rtB .
id30cwmetj = mz4fxhvewf ; } else if ( rtDW . hrh4xyuoiw == rtP .
Constant_Value_oqpfb3zgy2 ) { rtB . id30cwmetj = rtP .
From_value_Value_in33eojgx2 ; } else { rtB . id30cwmetj = mz4fxhvewf ; } }
else { rtB . id30cwmetj = rtDW . hrh4xyuoiw ; } UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID1 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { rtDW . kswstcvok1 = rtB . fcsadje32p ; rtDW .
jrgwrnn5oz = rtB . nlywfjb45m ; rtDW . macf3k4cd4 = rtB . l5a4frtxi0 ; rtDW .
pqdbhjf5ay = rtB . dheywqcnzn ; rtDW . hrh4xyuoiw = rtB . id30cwmetj ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID1 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { char_T * sErr ;
sErr = GetErrorBuffer ( & rtDW . kedb2llvpb [ 0U ] ) ; LibTerminate ( & rtDW
. kedb2llvpb [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr )
; ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . kedb2llvpb [ 0U ]
, 0 ) ; DestroyHostLibrary ( & rtDW . kedb2llvpb [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . mrwavk3rtu [ 0U ] ) ; LibTerminate ( & rtDW .
mrwavk3rtu [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . mrwavk3rtu [ 0U ] ,
0 ) ; DestroyHostLibrary ( & rtDW . mrwavk3rtu [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . ht3ddrfrpg [ 0U ] ) ; LibTerminate ( & rtDW .
ht3ddrfrpg [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . ht3ddrfrpg [ 0U ] ,
0 ) ; DestroyHostLibrary ( & rtDW . ht3ddrfrpg [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . plhtbthenu [ 0U ] ) ; LibTerminate ( & rtDW .
plhtbthenu [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . plhtbthenu [ 0U ] ,
0 ) ; DestroyHostLibrary ( & rtDW . plhtbthenu [ 0U ] ) ; { if ( rtDW .
jlxac0ng14 . AQHandles ) { sdiTerminateStreaming ( & rtDW . jlxac0ng14 .
AQHandles ) ; } } { if ( rtDW . pdrmu0rn2a . AQHandles ) {
sdiTerminateStreaming ( & rtDW . pdrmu0rn2a . AQHandles ) ; } } { if ( rtDW .
eesyvxjae3 . AQHandles ) { sdiTerminateStreaming ( & rtDW . eesyvxjae3 .
AQHandles ) ; } } { if ( rtDW . pux1ryd5f4 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . pux1ryd5f4 . AQHandles ) ; } } { if ( rtDW .
hj1jo00r1w . AQHandles ) { sdiTerminateStreaming ( & rtDW . hj1jo00r1w .
AQHandles ) ; } } { if ( rtDW . pw5i2w0o13 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . pw5i2w0o13 . AQHandles ) ; } } { if ( rtDW .
phxtloxrej . AQHandles ) { sdiTerminateStreaming ( & rtDW . phxtloxrej .
AQHandles ) ; } } { if ( rtDW . keftty1qrf . AQHandles ) {
sdiTerminateStreaming ( & rtDW . keftty1qrf . AQHandles ) ; } } { if ( rtDW .
lnnvcjvznh . AQHandles ) { sdiTerminateStreaming ( & rtDW . lnnvcjvznh .
AQHandles ) ; } } { if ( rtDW . b0vyhzhvoh . AQHandles ) {
sdiTerminateStreaming ( & rtDW . b0vyhzhvoh . AQHandles ) ; } } { if ( rtDW .
d4nv2evlo1 . AQHandles ) { sdiTerminateStreaming ( & rtDW . d4nv2evlo1 .
AQHandles ) ; } } { if ( rtDW . aipq0nlcyw . AQHandles ) {
sdiTerminateStreaming ( & rtDW . aipq0nlcyw . AQHandles ) ; } } } static void
mr_Soundtest_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_Soundtest_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Soundtest_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Soundtest_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Soundtest_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Soundtest_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Soundtest_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_Soundtest_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_Soundtest_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_Soundtest_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Soundtest_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Soundtest_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Soundtest_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Soundtest_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_Soundtest_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Soundtest_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Soundtest_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Soundtest_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 21 ] = {
"rtDW.dsbvr4pwev" , "rtDW.diy0fulw1v" , "rtDW.mxbfh1v4sm" , "rtDW.jddebgpoxa"
, "rtDW.kedb2llvpb" , "rtDW.akjj2jujhy" , "rtDW.htn3npmpyc" ,
"rtDW.mrwavk3rtu" , "rtDW.ochg21hd4z" , "rtDW.cq5nh4i3nk" , "rtDW.ht3ddrfrpg"
, "rtDW.if0df2k4g4" , "rtDW.jwyc3nvniv" , "rtDW.plhtbthenu" ,
"rtDW.dxcnleurn5" , "rtDW.et3cfpbuuj" , "rtDW.kswstcvok1" , "rtDW.jrgwrnn5oz"
, "rtDW.macf3k4cd4" , "rtDW.pqdbhjf5ay" , "rtDW.hrh4xyuoiw" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 21 , rtdwDataFieldNames ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
rtDW . dsbvr4pwev ) , sizeof ( rtDW . dsbvr4pwev ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
rtDW . diy0fulw1v ) , sizeof ( rtDW . diy0fulw1v ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
rtDW . mxbfh1v4sm ) , sizeof ( rtDW . mxbfh1v4sm ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
rtDW . jddebgpoxa ) , sizeof ( rtDW . jddebgpoxa ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
rtDW . kedb2llvpb ) , sizeof ( rtDW . kedb2llvpb ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
rtDW . akjj2jujhy ) , sizeof ( rtDW . akjj2jujhy ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
rtDW . htn3npmpyc ) , sizeof ( rtDW . htn3npmpyc ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
rtDW . mrwavk3rtu ) , sizeof ( rtDW . mrwavk3rtu ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
rtDW . ochg21hd4z ) , sizeof ( rtDW . ochg21hd4z ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
rtDW . cq5nh4i3nk ) , sizeof ( rtDW . cq5nh4i3nk ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
rtDW . ht3ddrfrpg ) , sizeof ( rtDW . ht3ddrfrpg ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
rtDW . if0df2k4g4 ) , sizeof ( rtDW . if0df2k4g4 ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
rtDW . jwyc3nvniv ) , sizeof ( rtDW . jwyc3nvniv ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
rtDW . plhtbthenu ) , sizeof ( rtDW . plhtbthenu ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
rtDW . dxcnleurn5 ) , sizeof ( rtDW . dxcnleurn5 ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
rtDW . et3cfpbuuj ) , sizeof ( rtDW . et3cfpbuuj ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
rtDW . kswstcvok1 ) , sizeof ( rtDW . kswstcvok1 ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
rtDW . jrgwrnn5oz ) , sizeof ( rtDW . jrgwrnn5oz ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
rtDW . macf3k4cd4 ) , sizeof ( rtDW . macf3k4cd4 ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
rtDW . pqdbhjf5ay ) , sizeof ( rtDW . pqdbhjf5ay ) ) ;
mr_Soundtest_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
rtDW . hrh4xyuoiw ) , sizeof ( rtDW . hrh4xyuoiw ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_Soundtest_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ; mr_Soundtest_restoreDataFromMxArray
( ( void * ) & ( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . dsbvr4pwev ) ,
rtdwData , 0 , 0 , sizeof ( rtDW . dsbvr4pwev ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . diy0fulw1v ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . diy0fulw1v ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . mxbfh1v4sm ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . mxbfh1v4sm ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . jddebgpoxa ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . jddebgpoxa ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . kedb2llvpb ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . kedb2llvpb ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . akjj2jujhy ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . akjj2jujhy ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . htn3npmpyc ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . htn3npmpyc ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . mrwavk3rtu ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . mrwavk3rtu ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . ochg21hd4z ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . ochg21hd4z ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . cq5nh4i3nk ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . cq5nh4i3nk ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . ht3ddrfrpg ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . ht3ddrfrpg ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . if0df2k4g4 ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . if0df2k4g4 ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . jwyc3nvniv ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . jwyc3nvniv ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . plhtbthenu ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . plhtbthenu ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . dxcnleurn5 ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . dxcnleurn5 ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . et3cfpbuuj ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . et3cfpbuuj ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . kswstcvok1 ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . kswstcvok1 ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . jrgwrnn5oz ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . jrgwrnn5oz ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . macf3k4cd4 ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . macf3k4cd4 ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . pqdbhjf5ay ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . pqdbhjf5ay ) ) ;
mr_Soundtest_restoreDataFromMxArray ( ( void * ) & ( rtDW . hrh4xyuoiw ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . hrh4xyuoiw ) ) ; } } mxArray *
mr_Soundtest_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 5 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 5 ] = { "Scope" , "S-Function" , "S-Function" ,
"S-Function" , "S-Function" , } ; static const char * blockPath [ 5 ] = {
"Soundtest/Scope" , "Soundtest/Input_Sensors/Sensor_1" ,
"Soundtest/Input_Sensors/Sensor_2" , "Soundtest/Input_Sensors/Sensor_3" ,
"Soundtest/Input_Sensors/Sensor_4" , } ; static const int reason [ 5 ] = { 0
, 1 , 1 , 1 , 1 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 5 ; ++ ( subs [ 0 ]
) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 12 ) ; ssSetNumU ( rtS , 0
) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 1 ) ;
ssSetNumBlocks ( rtS , 269 ) ; ssSetNumBlockIO ( rtS , 12 ) ;
ssSetNumBlockParams ( rtS , 7347 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 2.0833333333333333E-5 ) ; ssSetOffsetTime ( rtS
, 0 , 0.0 ) ; } void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 ,
4180985868U ) ; ssSetChecksumVal ( rtS , 1 , 3928969692U ) ; ssSetChecksumVal
( rtS , 2 , 2080150678U ) ; ssSetChecksumVal ( rtS , 3 , 768653082U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { ssSetY ( rtS , & rtY ) ; ( void ) memset ( ( void * ) & rtY , 0
, sizeof ( ExtY ) ) ; ssSetWorkSizeInBytes ( rtS , sizeof ( rtY ) , "YOut" )
; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; (
void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo
dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 17 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } Soundtest_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Soundtest" ) ; ssSetPath ( rtS , "Soundtest" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 1.0 ) ; ssSetStepSize ( rtS , 2.0833333333333333E-5 ) ;
ssSetFixedStepSize ( rtS , 2.0833333333333333E-5 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1813 , 1813 , 1813 , 1813 , 1 , 1 , 1 , 1 , 1 }
; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1813 , 1813 , 1813
, 1813 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] =
{ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_UINT8 , SS_UINT8 , SS_UINT8 , SS_UINT8 , SS_UINT8 } ; static
int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
} ; static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = {
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = {
"states" , "states" , "states" , "states" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] =
{
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_1/Bandpass_Filter/Generated Filter Block"
,
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_2/Bandpass_Filter/Generated Filter Block"
,
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_3/Bandpass_Filter/Generated Filter Block"
,
 "Soundtest/Ambulance_Detectors/Ambulance_Detector_4/Bandpass_Filter/Generated Filter Block"
, "Soundtest/Traffic System/Counter/Count_reg" ,
"Soundtest/Traffic System/Tr_Sys_1/Post_1/Count_reg" ,
"Soundtest/Traffic System/Tr_Sys_1/Post_2/Count_reg" ,
"Soundtest/Traffic System/Tr_Sys_2/Post_3/Count_reg" ,
"Soundtest/Traffic System/Tr_Sys_2/Post_4/Count_reg" } ; static const char_T
* rt_LoggedStateNames [ ] = { "states" , "states" , "states" , "states" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE
, SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 ,
0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_UINT8 , SS_UINT8
, 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 29 , 30 , 31 , 32 , 33 } ;
static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 9 , rt_LoggedStateWidths
, rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 9 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) rtDW . dsbvr4pwev ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) rtDW . diy0fulw1v ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) rtDW . mxbfh1v4sm ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) rtDW . jddebgpoxa ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . kswstcvok1 ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . jrgwrnn5oz ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtDW . macf3k4cd4 ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtDW . pqdbhjf5ay ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtDW . hrh4xyuoiw ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; { static void * rt_LoggedOutputSignalPtrs [ ] = { & rtY .
dpsnzhtm0n , & rtY . efy4xl4kgi , & rtY . bkietojhnr , & rtY . cy5dpondld , &
rtY . oofabeuo3g , & rtY . al4pieaajx , & rtY . ommkkbnkx1 , & rtY .
ox5dg5dqwv , & rtY . netmcfnyd3 , & rtY . ei20ddu30v , & rtY . ahz3vzxds0 , &
rtY . l30yu4h4wi } ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( (
LogSignalPtrsType ) rt_LoggedOutputSignalPtrs ) ) ; } { static int_T
rt_LoggedOutputWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 }
; static int_T rt_LoggedOutputNumDimensions [ ] = { 2 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedOutputDimensions [ ] = { 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T
rt_LoggedOutputIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 } ; static void * rt_LoggedCurrentSignalDimensions [ ] = { ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static int_T
rt_LoggedCurrentSignalDimensionsSize [ ] = { 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 ,
4 , 4 , 4 , 4 , 4 } ; static BuiltInDTypeId rt_LoggedOutputDataTypeIds [ ] =
{ SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN
, SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN
} ; static int_T rt_LoggedOutputComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingPreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) } ; static const char_T * rt_LoggedOutputLabels [ ] = { ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" } ; static const
char_T * rt_LoggedOutputBlockNames [ ] = { "Soundtest/Yellow1" ,
"Soundtest/Green1" , "Soundtest/Red1" , "Soundtest/Yellow2" ,
"Soundtest/Green2" , "Soundtest/Red2" , "Soundtest/Yellow3" ,
"Soundtest/Green3" , "Soundtest/Red3" , "Soundtest/Yellow4" ,
"Soundtest/Green4" , "Soundtest/Red4" } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 }
, { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0
, SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } } ; static RTWLogSignalInfo rt_LoggedOutputSignalInfo [ ] = { { 12
, rt_LoggedOutputWidths , rt_LoggedOutputNumDimensions ,
rt_LoggedOutputDimensions , rt_LoggedOutputIsVarDims ,
rt_LoggedCurrentSignalDimensions , rt_LoggedCurrentSignalDimensionsSize ,
rt_LoggedOutputDataTypeIds , rt_LoggedOutputComplexSignals , ( NULL ) ,
rt_LoggingPreprocessingFcnPtrs , { rt_LoggedOutputLabels } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedOutputBlockNames } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert , ( NULL ) } } ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , rt_LoggedOutputSignalInfo ) ;
rt_LoggedCurrentSignalDimensions [ 0 ] = & rt_LoggedOutputWidths [ 0 ] ;
rt_LoggedCurrentSignalDimensions [ 1 ] = & rt_LoggedOutputWidths [ 0 ] ;
rt_LoggedCurrentSignalDimensions [ 2 ] = & rt_LoggedOutputWidths [ 1 ] ;
rt_LoggedCurrentSignalDimensions [ 3 ] = & rt_LoggedOutputWidths [ 2 ] ;
rt_LoggedCurrentSignalDimensions [ 4 ] = & rt_LoggedOutputWidths [ 3 ] ;
rt_LoggedCurrentSignalDimensions [ 5 ] = & rt_LoggedOutputWidths [ 4 ] ;
rt_LoggedCurrentSignalDimensions [ 6 ] = & rt_LoggedOutputWidths [ 5 ] ;
rt_LoggedCurrentSignalDimensions [ 7 ] = & rt_LoggedOutputWidths [ 6 ] ;
rt_LoggedCurrentSignalDimensions [ 8 ] = & rt_LoggedOutputWidths [ 7 ] ;
rt_LoggedCurrentSignalDimensions [ 9 ] = & rt_LoggedOutputWidths [ 8 ] ;
rt_LoggedCurrentSignalDimensions [ 10 ] = & rt_LoggedOutputWidths [ 9 ] ;
rt_LoggedCurrentSignalDimensions [ 11 ] = & rt_LoggedOutputWidths [ 10 ] ;
rt_LoggedCurrentSignalDimensions [ 12 ] = & rt_LoggedOutputWidths [ 11 ] ; }
rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "yout" ) ; } { static ssSolverInfo
slvrInfo ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"FixedStepDiscrete" ) ; ssSetVariableStepSolver ( rtS , 0 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelLogData ( rtS ,
rt_UpdateTXYLogVars ) ; ssSetModelLogDataIfInInterval ( rtS ,
rt_UpdateTXXFYLogVars ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ;
ssSetTNextTid ( rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ;
ssSetSolverNeedsReset ( rtS ) ; ssSetNumNonsampledZCs ( rtS , 0 ) ; }
ssSetChecksumVal ( rtS , 0 , 4180985868U ) ; ssSetChecksumVal ( rtS , 1 ,
3928969692U ) ; ssSetChecksumVal ( rtS , 2 , 2080150678U ) ; ssSetChecksumVal
( rtS , 3 , 768653082U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 56 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ;
systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ;
systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = & rtAlwaysEnabled ;
systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = & rtAlwaysEnabled ;
systemRan [ 16 ] = & rtAlwaysEnabled ; systemRan [ 17 ] = & rtAlwaysEnabled ;
systemRan [ 18 ] = & rtAlwaysEnabled ; systemRan [ 19 ] = & rtAlwaysEnabled ;
systemRan [ 20 ] = & rtAlwaysEnabled ; systemRan [ 21 ] = & rtAlwaysEnabled ;
systemRan [ 22 ] = & rtAlwaysEnabled ; systemRan [ 23 ] = & rtAlwaysEnabled ;
systemRan [ 24 ] = & rtAlwaysEnabled ; systemRan [ 25 ] = & rtAlwaysEnabled ;
systemRan [ 26 ] = & rtAlwaysEnabled ; systemRan [ 27 ] = & rtAlwaysEnabled ;
systemRan [ 28 ] = & rtAlwaysEnabled ; systemRan [ 29 ] = & rtAlwaysEnabled ;
systemRan [ 30 ] = & rtAlwaysEnabled ; systemRan [ 31 ] = & rtAlwaysEnabled ;
systemRan [ 32 ] = & rtAlwaysEnabled ; systemRan [ 33 ] = & rtAlwaysEnabled ;
systemRan [ 34 ] = & rtAlwaysEnabled ; systemRan [ 35 ] = & rtAlwaysEnabled ;
systemRan [ 36 ] = & rtAlwaysEnabled ; systemRan [ 37 ] = & rtAlwaysEnabled ;
systemRan [ 38 ] = & rtAlwaysEnabled ; systemRan [ 39 ] = & rtAlwaysEnabled ;
systemRan [ 40 ] = & rtAlwaysEnabled ; systemRan [ 41 ] = & rtAlwaysEnabled ;
systemRan [ 42 ] = & rtAlwaysEnabled ; systemRan [ 43 ] = & rtAlwaysEnabled ;
systemRan [ 44 ] = & rtAlwaysEnabled ; systemRan [ 45 ] = & rtAlwaysEnabled ;
systemRan [ 46 ] = & rtAlwaysEnabled ; systemRan [ 47 ] = & rtAlwaysEnabled ;
systemRan [ 48 ] = & rtAlwaysEnabled ; systemRan [ 49 ] = & rtAlwaysEnabled ;
systemRan [ 50 ] = & rtAlwaysEnabled ; systemRan [ 51 ] = & rtAlwaysEnabled ;
systemRan [ 52 ] = & rtAlwaysEnabled ; systemRan [ 53 ] = & rtAlwaysEnabled ;
systemRan [ 54 ] = & rtAlwaysEnabled ; systemRan [ 55 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Soundtest_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP (
rtS , mr_Soundtest_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_Soundtest_SetDWork ) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if (
ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 1 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID1 ( tid ) ; }
