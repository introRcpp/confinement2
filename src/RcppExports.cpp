// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// demo_heure
void demo_heure();
RcppExport SEXP _confinement2_demo_heure() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    demo_heure();
    return R_NilValue;
END_RCPP
}
// demo_lapin_1
void demo_lapin_1();
RcppExport SEXP _confinement2_demo_lapin_1() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    demo_lapin_1();
    return R_NilValue;
END_RCPP
}
// demo_lapin_2
void demo_lapin_2();
RcppExport SEXP _confinement2_demo_lapin_2() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    demo_lapin_2();
    return R_NilValue;
END_RCPP
}
// demo_rdv
void demo_rdv();
RcppExport SEXP _confinement2_demo_rdv() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    demo_rdv();
    return R_NilValue;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _confinement2_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_confinement2_demo_heure", (DL_FUNC) &_confinement2_demo_heure, 0},
    {"_confinement2_demo_lapin_1", (DL_FUNC) &_confinement2_demo_lapin_1, 0},
    {"_confinement2_demo_lapin_2", (DL_FUNC) &_confinement2_demo_lapin_2, 0},
    {"_confinement2_demo_rdv", (DL_FUNC) &_confinement2_demo_rdv, 0},
    {"_confinement2_rcpp_hello_world", (DL_FUNC) &_confinement2_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_confinement2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
