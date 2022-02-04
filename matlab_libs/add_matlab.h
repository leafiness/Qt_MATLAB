//
// MATLAB Compiler: 8.1 (R2020b)
// Date: Sat Jan 29 16:36:36 2022
// Arguments:
// "-B""macro_default""-W""cpplib:add_matlab,all,version=1.0""-T""link:lib""-d""
// E:\OneDrive -
// stu.qlu.edu.cn\My_Projects\Qt\QtPractices\Qt_Matlab_MUX\Qt_Matlab\add_matlab\
// for_testing""-v""E:\OneDrive -
// stu.qlu.edu.cn\My_Projects\Qt\QtPractices\Qt_Matlab_MUX\Qt_Matlab\add_matlab.
// m"
//

#ifndef add_matlab_h
#define add_matlab_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" { // sbcheck:ok:extern_c
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_add_matlab_C_API 
#define LIB_add_matlab_C_API /* No special import/export declaration */
#endif

/* GENERAL LIBRARY FUNCTIONS -- START */

extern LIB_add_matlab_C_API 
bool MW_CALL_CONV add_matlabInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_add_matlab_C_API 
bool MW_CALL_CONV add_matlabInitialize(void);

extern LIB_add_matlab_C_API 
void MW_CALL_CONV add_matlabTerminate(void);

extern LIB_add_matlab_C_API 
void MW_CALL_CONV add_matlabPrintStackTrace(void);

/* GENERAL LIBRARY FUNCTIONS -- END */

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_add_matlab_C_API 
bool MW_CALL_CONV mlxAdd_matlab(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

#ifdef __cplusplus
}
#endif


/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__MINGW64__)

#ifdef EXPORTING_add_matlab
#define PUBLIC_add_matlab_CPP_API __declspec(dllexport)
#else
#define PUBLIC_add_matlab_CPP_API __declspec(dllimport)
#endif

#define LIB_add_matlab_CPP_API PUBLIC_add_matlab_CPP_API

#else

#if !defined(LIB_add_matlab_CPP_API)
#if defined(LIB_add_matlab_C_API)
#define LIB_add_matlab_CPP_API LIB_add_matlab_C_API
#else
#define LIB_add_matlab_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_add_matlab_CPP_API void MW_CALL_CONV add_matlab(int nargout, mwArray& c, const mwArray& a, const mwArray& b);

/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */
#endif

#endif
