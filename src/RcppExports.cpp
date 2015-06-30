// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// cpp_detectGPUs
SEXP cpp_detectGPUs(SEXP platform_idx);
RcppExport SEXP gpuR_cpp_detectGPUs(SEXP platform_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type platform_idx(platform_idxSEXP);
    __result = Rcpp::wrap(cpp_detectGPUs(platform_idx));
    return __result;
END_RCPP
}
// detectPlatforms
SEXP detectPlatforms();
RcppExport SEXP gpuR_detectPlatforms() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(detectPlatforms());
    return __result;
END_RCPP
}
// cpp_device_has_double
bool cpp_device_has_double(SEXP platform_idx_, SEXP gpu_idx_);
RcppExport SEXP gpuR_cpp_device_has_double(SEXP platform_idx_SEXP, SEXP gpu_idx_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type platform_idx_(platform_idx_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type gpu_idx_(gpu_idx_SEXP);
    __result = Rcpp::wrap(cpp_device_has_double(platform_idx_, gpu_idx_));
    return __result;
END_RCPP
}
// matrixToIntXptr
SEXP matrixToIntXptr(SEXP data);
RcppExport SEXP gpuR_matrixToIntXptr(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    __result = Rcpp::wrap(matrixToIntXptr(data));
    return __result;
END_RCPP
}
// matrixToFloatXptr
SEXP matrixToFloatXptr(SEXP data);
RcppExport SEXP gpuR_matrixToFloatXptr(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    __result = Rcpp::wrap(matrixToFloatXptr(data));
    return __result;
END_RCPP
}
// matrixToDoubleXptr
SEXP matrixToDoubleXptr(SEXP data);
RcppExport SEXP gpuR_matrixToDoubleXptr(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    __result = Rcpp::wrap(matrixToDoubleXptr(data));
    return __result;
END_RCPP
}
// dXptrToSEXP
SEXP dXptrToSEXP(SEXP ptrA);
RcppExport SEXP gpuR_dXptrToSEXP(SEXP ptrASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA(ptrASEXP);
    __result = Rcpp::wrap(dXptrToSEXP(ptrA));
    return __result;
END_RCPP
}
// fXptrToSEXP
SEXP fXptrToSEXP(SEXP ptrA);
RcppExport SEXP gpuR_fXptrToSEXP(SEXP ptrASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA(ptrASEXP);
    __result = Rcpp::wrap(fXptrToSEXP(ptrA));
    return __result;
END_RCPP
}
// iXptrToSEXP
SEXP iXptrToSEXP(SEXP ptrA);
RcppExport SEXP gpuR_iXptrToSEXP(SEXP ptrASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA(ptrASEXP);
    __result = Rcpp::wrap(iXptrToSEXP(ptrA));
    return __result;
END_RCPP
}
// emptyIntXptr
SEXP emptyIntXptr(int nr, int nc);
RcppExport SEXP gpuR_emptyIntXptr(SEXP nrSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    __result = Rcpp::wrap(emptyIntXptr(nr, nc));
    return __result;
END_RCPP
}
// emptyFloatXptr
SEXP emptyFloatXptr(int nr, int nc);
RcppExport SEXP gpuR_emptyFloatXptr(SEXP nrSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    __result = Rcpp::wrap(emptyFloatXptr(nr, nc));
    return __result;
END_RCPP
}
// emptyDoubleXptr
SEXP emptyDoubleXptr(int nr, int nc);
RcppExport SEXP gpuR_emptyDoubleXptr(SEXP nrSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    __result = Rcpp::wrap(emptyDoubleXptr(nr, nc));
    return __result;
END_RCPP
}
// cpp_gpuInfo
List cpp_gpuInfo(SEXP platform_idx_, SEXP gpu_idx_);
RcppExport SEXP gpuR_cpp_gpuInfo(SEXP platform_idx_SEXP, SEXP gpu_idx_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type platform_idx_(platform_idx_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type gpu_idx_(gpu_idx_SEXP);
    __result = Rcpp::wrap(cpp_gpuInfo(platform_idx_, gpu_idx_));
    return __result;
END_RCPP
}
// cpp_gpuMatrix_iaxpy
void cpp_gpuMatrix_iaxpy(SEXP alpha_, SEXP ptrA_, SEXP ptrB_, SEXP sourceCode_, SEXP kernel_function_);
RcppExport SEXP gpuR_cpp_gpuMatrix_iaxpy(SEXP alpha_SEXP, SEXP ptrA_SEXP, SEXP ptrB_SEXP, SEXP sourceCode_SEXP, SEXP kernel_function_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type alpha_(alpha_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrA_(ptrA_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrB_(ptrB_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type sourceCode_(sourceCode_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type kernel_function_(kernel_function_SEXP);
    cpp_gpuMatrix_iaxpy(alpha_, ptrA_, ptrB_, sourceCode_, kernel_function_);
    return R_NilValue;
END_RCPP
}
// cpp_gpuMatrix_igemm
void cpp_gpuMatrix_igemm(SEXP ptrA_, SEXP ptrB_, SEXP ptrC_, SEXP sourceCode_, SEXP kernel_function_);
RcppExport SEXP gpuR_cpp_gpuMatrix_igemm(SEXP ptrA_SEXP, SEXP ptrB_SEXP, SEXP ptrC_SEXP, SEXP sourceCode_SEXP, SEXP kernel_function_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA_(ptrA_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrB_(ptrB_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrC_(ptrC_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type sourceCode_(sourceCode_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type kernel_function_(kernel_function_SEXP);
    cpp_gpuMatrix_igemm(ptrA_, ptrB_, ptrC_, sourceCode_, kernel_function_);
    return R_NilValue;
END_RCPP
}
// cpp_gpu_two_vec
IntegerVector cpp_gpu_two_vec(IntegerVector A_, IntegerVector B_, IntegerVector C_, SEXP sourceCode_, SEXP kernel_function_);
RcppExport SEXP gpuR_cpp_gpu_two_vec(SEXP A_SEXP, SEXP B_SEXP, SEXP C_SEXP, SEXP sourceCode_SEXP, SEXP kernel_function_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type A_(A_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type B_(B_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type C_(C_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type sourceCode_(sourceCode_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type kernel_function_(kernel_function_SEXP);
    __result = Rcpp::wrap(cpp_gpu_two_vec(A_, B_, C_, sourceCode_, kernel_function_));
    return __result;
END_RCPP
}
// cpp_platformInfo
List cpp_platformInfo(SEXP platform_idx_);
RcppExport SEXP gpuR_cpp_platformInfo(SEXP platform_idx_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type platform_idx_(platform_idx_SEXP);
    __result = Rcpp::wrap(cpp_platformInfo(platform_idx_));
    return __result;
END_RCPP
}
// truncIntgpuMat
SEXP truncIntgpuMat(SEXP ptrA_, int nr, int nc);
RcppExport SEXP gpuR_truncIntgpuMat(SEXP ptrA_SEXP, SEXP nrSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA_(ptrA_SEXP);
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    __result = Rcpp::wrap(truncIntgpuMat(ptrA_, nr, nc));
    return __result;
END_RCPP
}
// truncFloatgpuMat
SEXP truncFloatgpuMat(SEXP ptrA_, int nr, int nc);
RcppExport SEXP gpuR_truncFloatgpuMat(SEXP ptrA_SEXP, SEXP nrSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA_(ptrA_SEXP);
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    __result = Rcpp::wrap(truncFloatgpuMat(ptrA_, nr, nc));
    return __result;
END_RCPP
}
// truncDoublegpuMat
SEXP truncDoublegpuMat(SEXP ptrA_, int nr, int nc);
RcppExport SEXP gpuR_truncDoublegpuMat(SEXP ptrA_SEXP, SEXP nrSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA_(ptrA_SEXP);
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    __result = Rcpp::wrap(truncDoublegpuMat(ptrA_, nr, nc));
    return __result;
END_RCPP
}
// cpp_dncol
int cpp_dncol(SEXP ptrA);
RcppExport SEXP gpuR_cpp_dncol(SEXP ptrASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA(ptrASEXP);
    __result = Rcpp::wrap(cpp_dncol(ptrA));
    return __result;
END_RCPP
}
// cpp_fncol
int cpp_fncol(SEXP ptrA);
RcppExport SEXP gpuR_cpp_fncol(SEXP ptrASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA(ptrASEXP);
    __result = Rcpp::wrap(cpp_fncol(ptrA));
    return __result;
END_RCPP
}
// cpp_incol
int cpp_incol(SEXP ptrA);
RcppExport SEXP gpuR_cpp_incol(SEXP ptrASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA(ptrASEXP);
    __result = Rcpp::wrap(cpp_incol(ptrA));
    return __result;
END_RCPP
}
// cpp_dnrow
int cpp_dnrow(SEXP ptrA);
RcppExport SEXP gpuR_cpp_dnrow(SEXP ptrASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA(ptrASEXP);
    __result = Rcpp::wrap(cpp_dnrow(ptrA));
    return __result;
END_RCPP
}
// cpp_fnrow
int cpp_fnrow(SEXP ptrA);
RcppExport SEXP gpuR_cpp_fnrow(SEXP ptrASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA(ptrASEXP);
    __result = Rcpp::wrap(cpp_fnrow(ptrA));
    return __result;
END_RCPP
}
// cpp_inrow
int cpp_inrow(SEXP ptrA);
RcppExport SEXP gpuR_cpp_inrow(SEXP ptrASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA(ptrASEXP);
    __result = Rcpp::wrap(cpp_inrow(ptrA));
    return __result;
END_RCPP
}
// cpp_vienna_gpuMatrix_daxpy
void cpp_vienna_gpuMatrix_daxpy(SEXP alpha_, SEXP ptrA_, SEXP ptrB_);
RcppExport SEXP gpuR_cpp_vienna_gpuMatrix_daxpy(SEXP alpha_SEXP, SEXP ptrA_SEXP, SEXP ptrB_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type alpha_(alpha_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrA_(ptrA_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrB_(ptrB_SEXP);
    cpp_vienna_gpuMatrix_daxpy(alpha_, ptrA_, ptrB_);
    return R_NilValue;
END_RCPP
}
// cpp_vienna_gpuMatrix_saxpy
void cpp_vienna_gpuMatrix_saxpy(SEXP alpha_, SEXP ptrA_, SEXP ptrB_);
RcppExport SEXP gpuR_cpp_vienna_gpuMatrix_saxpy(SEXP alpha_SEXP, SEXP ptrA_SEXP, SEXP ptrB_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type alpha_(alpha_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrA_(ptrA_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrB_(ptrB_SEXP);
    cpp_vienna_gpuMatrix_saxpy(alpha_, ptrA_, ptrB_);
    return R_NilValue;
END_RCPP
}
// cpp_vienna_gpuMatrix_dgemm
void cpp_vienna_gpuMatrix_dgemm(SEXP ptrA_, SEXP ptrB_, SEXP ptrC_);
RcppExport SEXP gpuR_cpp_vienna_gpuMatrix_dgemm(SEXP ptrA_SEXP, SEXP ptrB_SEXP, SEXP ptrC_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA_(ptrA_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrB_(ptrB_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrC_(ptrC_SEXP);
    cpp_vienna_gpuMatrix_dgemm(ptrA_, ptrB_, ptrC_);
    return R_NilValue;
END_RCPP
}
// cpp_vienna_gpuMatrix_sgemm
SEXP cpp_vienna_gpuMatrix_sgemm(SEXP ptrA_, SEXP ptrB_, SEXP ptrC_);
RcppExport SEXP gpuR_cpp_vienna_gpuMatrix_sgemm(SEXP ptrA_SEXP, SEXP ptrB_SEXP, SEXP ptrC_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type ptrA_(ptrA_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrB_(ptrB_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptrC_(ptrC_SEXP);
    __result = Rcpp::wrap(cpp_vienna_gpuMatrix_sgemm(ptrA_, ptrB_, ptrC_));
    return __result;
END_RCPP
}
