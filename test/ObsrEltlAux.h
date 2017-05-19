/*********************************************************************************
 *
 *  COPYRIGHT:  $Company: AVL PTE Controls $
 *  FILENAME:   $Source: ObsrEltlAux.h $
 *  COMPILER:   -
 *  PROCESSOR:  -
 *
 *  LAST REVISION:      $Date: 2016/12/05 10:02:45GMT+00:00 $
 *                      $Author: Gajera, Dilip AVL/DE (u16p27) $
 *
 *  ==============================================================================
 *
 * ADD Information:
 * Project ID        : []
 * Container Name    : ObsrEltlAux
 * Container Version : 5174.2.0
 * Container Status  : DRAFT
 * Component Prefix  : ObEA
 * Data Type         : software
 *
 *  ==============================================================================
 * File: ObsrEltlAux.h
 *
 * Code generated for Simulink model 'ObsrEltlAux'.
 *
 * Model version                  : $Revision: 1.1 $
 * Simulink Coder version         : 8.5 (R2013b) 08-Aug-2013
 * TLC version                    : 8.5 (Aug  6 2013)
 * C/C++ source code generated on : Tue Jun 21 10:24:24 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 ********************************************************************************/

#ifndef RTW_HEADER_ObsrEltlAux_h_
#define RTW_HEADER_ObsrEltlAux_h_
#ifndef ObsrEltlAux_COMMON_INCLUDES_
# define ObsrEltlAux_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_shared_utils.h"
#endif                                 /* ObsrEltlAux_COMMON_INCLUDES_ */

#include "ObsrEltlAux_types.h"

/* Includes for objects with custom storage classes. */
#include "ObsrEltlAux_Data.h"
#include "ObsrEltlAux_Input.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((void*) 0)
#endif

/* Model entry point functions */
#define OBEA_START_SEC_CODE_RESET
#include "MemMap.h"

extern void ObEA_reset(void);

#define OBEA_STOP_SEC_CODE_RESET
#include "MemMap.h"
#define OBEA_START_SEC_CODE_PROC
#include "MemMap.h"

extern void ObEA_Proc(void);

#define OBEA_STOP_SEC_CODE_PROC
#include "MemMap.h"

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('ObsrEltlAux_Test/Algorithms/ObsrEltlAux')    - opens subsystem ObsrEltlAux_Test/Algorithms/ObsrEltlAux
 * hilite_system('ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ObsrEltlAux_Test/Algorithms'
 * '<S1>'   : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux'
 * '<S3>'   : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc'
 * '<S4>'   : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem'
 * '<S5>'   : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux'
 * '<S6>'   : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/CmprClima'
 * '<S7>'   : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc'
 * '<S8>'   : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat'
 * '<S9>'   : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Miscellaneous_consumer'
 * '<S10>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/ObEA_StFctAcv_P - 12'
 * '<S11>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/ObEA_StFctAcv_P - 13'
 * '<S12>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/ObEA_StStopEnaReplval_P'
 * '<S13>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/ObEA_StStrtReqReplval_P'
 * '<S14>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/CmprClima/ObEA_ICmprClimaReplval_P'
 * '<S15>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/CmprClima/ObEA_StCmprClima_M'
 * '<S16>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/CmprClima/ObEA_StFctAcv_P - 6'
 * '<S17>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/CmprClima/ObEA_StFctAcv_P - 7'
 * '<S18>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/CmprClima/ObEA_UCmprClimaReplval_P'
 * '<S19>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/CmprClima/ObEA_StFctAcv_P - 6/ObEA_StFctAcv_P'
 * '<S20>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/CmprClima/ObEA_StFctAcv_P - 7/ObEA_StFctAcv_P'
 * '<S21>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_IDcdcHvReplval_P'
 * '<S22>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_IDcdcLvReplval_P'
 * '<S23>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_ModeDcdc_M'
 * '<S24>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 0'
 * '<S25>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 1'
 * '<S26>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 15'
 * '<S27>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 2'
 * '<S28>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 3'
 * '<S29>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 4'
 * '<S30>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 5'
 * '<S31>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_TDcdcReplval_P'
 * '<S32>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_UDcdcHvReplval_P'
 * '<S33>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_UDcdcLvReplval_P'
 * '<S34>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_bAcvDcdcLvIniReplval_P'
 * '<S35>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_bAcvDcdcLvIniReplval_P1'
 * '<S36>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 0/ObEA_StFctAcv_P'
 * '<S37>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 1/ObEA_StFctAcv_P'
 * '<S38>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 15/ObEA_StFctAcv_P'
 * '<S39>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 2/ObEA_StFctAcv_P'
 * '<S40>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 3/ObEA_StFctAcv_P'
 * '<S41>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 4/ObEA_StFctAcv_P'
 * '<S42>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Dcdc/ObEA_StFctAcv_P - 5/ObEA_StFctAcv_P'
 * '<S43>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_ILvbatActReplval_P'
 * '<S44>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_SocLvbatReplval_P'
 * '<S45>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_StFctAcv_P - 10'
 * '<S46>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_StFctAcv_P - 11'
 * '<S47>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_StFctAcv_P - 8'
 * '<S48>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_StFctAcv_P - 9'
 * '<S49>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_TLvbatReplval_P'
 * '<S50>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_ULvbatActReplval_P'
 * '<S51>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_StFctAcv_P - 10/ObEA_StFctAcv_P'
 * '<S52>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_StFctAcv_P - 11/ObEA_StFctAcv_P'
 * '<S53>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_StFctAcv_P - 8/ObEA_StFctAcv_P'
 * '<S54>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Lvbat/ObEA_StFctAcv_P - 9/ObEA_StFctAcv_P'
 * '<S55>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Miscellaneous_consumer/ObEA_IDcdcCnsHvAddlReplval_P'
 * '<S56>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Miscellaneous_consumer/ObEA_StFctAcv_P - 14'
 * '<S57>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Miscellaneous_consumer/ObEA_bAcvChgDirForDcdcIHv_P'
 * '<S58>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Miscellaneous_consumer/ObEA_bAcvChgDirForHvbatI_P'
 * '<S59>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/Miscellaneous_consumer/ObEA_StFctAcv_P - 14/ObEA_StFctAcv_P'
 * '<S60>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/ObEA_StFctAcv_P - 12/ObHv_CswSign1_P'
 * '<S61>'  : 'ObsrEltlAux_Test/Algorithms/ObsrEltlAux/Proc/Subsystem/ObsrEltlAux/ObEA_StFctAcv_P - 13/ObHv_CswSign1_P'
 */
#endif                                 /* RTW_HEADER_ObsrEltlAux_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
