/**************************************************************************************************\
 *** 
 *** Simulink model       : TestModel1
 *** TargetLink subsystem : TestModel1/TesModel1
 *** Codefile             : TesModel1.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2019-07-27 20:44:51
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : Standard
 *** Compiler                                 : <unknown>
 *** Target                                   : Generic
 *** ANSI-C compatible code                   : yes
 *** Code Optimization                        : enabled
 *** Constant style                           : decimal
 *** Clean code option                        : disabled
 *** Logging mode                             : According to block-specific data
 *** Code Coverage                            : disabled
 *** Generate empty conditional branches      : disabled
 *** Loop unroll threshold                    : 5
 *** Shift mode                               : automatic
 *** Handle unscaled SF expr. with TL type    : enabled
 *** Assignment of conditions                 : AllBooleanOutputs 
 *** Scope reduction only to function level   : disabled
 *** Exploit ranges if not erasable           : disabled
 *** Exploit Compute Through Overflow         : optimized
 *** Linker sections                          : enabled
 *** Enable Assembler                         : disabled
 *** Variable name length                     : 31 chars
 *** Use global bitfields                     : disabled
 *** Stateflow: use of bitfields              : enabled
 *** State activity encoding limit            : 5
 *** Omit zero inits in restart function      : disabled
 *** Share functions between TL subsystems    : disabled
 *** Generate 64bit functions                 : enabled
 *** Inlining Threshold                       : 6
 *** Line break limit                         : 100
 *** Target optimized boolean data type       : enabled
 *** Keep saturation elements                 : disabled
 *** Extended variable sharing                : disabled
 *** Extended lifetime optimization           : enabled
 *** Style definition file                    : C:\Program Files\dSPACE_TL_4_2\Matlab\Tl\Config\code
 ***                                            gen\cconfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE_TL_4_2\Matlab\Tl\XML\CodeGen
 ***                                            \Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** Sa1                      TesModel1
 *** Sa2                      TesModel1/MySubSystem_1
 *** Sa3                      TesModel1/MySubSystem_1/Saturation
 *** 
 *** SUBSYS                   CORRESPONDING MODEL BLOCK (REFERENCED MODEL)
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 4.2p2 from 27-Nov-2017
 *** Code generator version  : Build Id 4.2.0.33 from 2017-11-28 14:39:24

\**************************************************************************************************/

#ifndef TESMODEL1_C
#define TESMODEL1_C

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/

#include "TesModel1.h"

/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

/******************************************************************************\
   SLGlobal: Default storage class for global variables | Width: 32
\******************************************************************************/
UInt32 In_Value;

/******************************************************************************\
   SLGlobal: Default storage class for global variables | Width: 8
\******************************************************************************/
Bool Enable;

/******************************************************************************\
   SLGlobalInit: Default storage class for global variables with initial value | Width: 32
\******************************************************************************/
UInt32 Out_Value = 0;

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INLINE FUNCTIONS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

/**************************************************************************************************\
 ***  FUNCTION:
 ***      TesModel1
 *** 
 ***  DESCRIPTION:
 ***      
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***      void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/
void TesModel1(void)
{
   /* TesModel1/MySubSystem_1/Enable: Enable condition
      TesModel1/MySubSystem_1/Enable: Omitted comparison with constant. */
   if (Enable) {
      /* SLLocal: Default storage class for local variables | Width: 32 */
      UInt32 Sa2_Sum1;

      /* Sum: TesModel1/MySubSystem_1/Sum1 */
      Sa2_Sum1 = In_Value + 1;

      /* Switch: TesModel1/MySubSystem_1/Saturation/Switch
         TesModel1/MySubSystem_1/Saturation/Switch: Omitted comparison with constant.
         # combined # Relational: TesModel1/MySubSystem_1/Saturation/Relational Operator */
      if (Sa2_Sum1 >= 255) {
         /* Switch: TesModel1/MySubSystem_1/Saturation/Switch
            # combined # TargetLink outport: TesModel1/Out_Value */
         Out_Value = 255;
      }
      else {
         /* Switch: TesModel1/MySubSystem_1/Saturation/Switch
            # combined # TargetLink outport: TesModel1/Out_Value */
         Out_Value = Sa2_Sum1;
      }
   }
}

/*----------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/
#endif /* TESMODEL1_C */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/