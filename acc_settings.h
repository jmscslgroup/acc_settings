//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: acc_settings.h
//
// Code generated for Simulink model 'acc_settings'.
//
// Model version                  : 3.241
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Wed Aug 31 15:13:51 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_acc_settings_h_
#define RTW_HEADER_acc_settings_h_
#include <math.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "acc_settings_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_acc_settings_T {
  SL_Bus_acc_settings_geometry_msgs_Twist In1;// '<S10>/In1'
  SL_Bus_acc_settings_geometry_msgs_Twist In1_k;// '<S9>/In1'
  SL_Bus_acc_settings_geometry_msgs_Twist b_varargout_2;
};

// Block states (default storage) for system '<Root>'
struct DW_acc_settings_T {
  ros_slros_internal_block_GetP_T obj; // '<S1>/Get Parameter1'
  ros_slros_internal_block_GetP_T obj_a;// '<S1>/Get Parameter'
  ros_slroscpp_internal_block_P_T obj_d;// '<S6>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_l;// '<S5>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_k;// '<S8>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_ks;// '<S7>/SourceBlock'
};

// Parameters (default storage)
struct P_acc_settings_T_ {
  SL_Bus_acc_settings_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                     //  Referenced by: '<S9>/Out1'

  SL_Bus_acc_settings_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                            //  Referenced by: '<S7>/Constant'

  SL_Bus_acc_settings_geometry_msgs_Twist Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                       //  Referenced by: '<S10>/Out1'

  SL_Bus_acc_settings_geometry_msgs_Twist Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                              //  Referenced by: '<S8>/Constant'

  SL_Bus_acc_settings_std_msgs_Int32 Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                         //  Referenced by: '<S2>/Constant'

  SL_Bus_acc_settings_std_msgs_Int32 Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                         //  Referenced by: '<S3>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_acc_settings_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_acc_settings_T acc_settings_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_acc_settings_T acc_settings_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_acc_settings_T acc_settings_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void acc_settings_initialize(void);
  extern void acc_settings_step(void);
  extern void acc_settings_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_acc_settings_T *const acc_settings_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'acc_settings'
//  '<S1>'   : 'acc_settings/ACC_SETTINGS'
//  '<S2>'   : 'acc_settings/ACC_SETTINGS/Blank Message1'
//  '<S3>'   : 'acc_settings/ACC_SETTINGS/Blank Message2'
//  '<S4>'   : 'acc_settings/ACC_SETTINGS/MATLAB Function'
//  '<S5>'   : 'acc_settings/ACC_SETTINGS/Publish1'
//  '<S6>'   : 'acc_settings/ACC_SETTINGS/Publish2'
//  '<S7>'   : 'acc_settings/ACC_SETTINGS/Subscribe7'
//  '<S8>'   : 'acc_settings/ACC_SETTINGS/Subscribe8'
//  '<S9>'   : 'acc_settings/ACC_SETTINGS/Subscribe7/Enabled Subsystem'
//  '<S10>'  : 'acc_settings/ACC_SETTINGS/Subscribe8/Enabled Subsystem'

#endif                                 // RTW_HEADER_acc_settings_h_

//
// File trailer for generated code.
//
// [EOF]
//
