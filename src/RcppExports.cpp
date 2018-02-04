// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_geigen
arma::cx_vec rcpp_geigen(arma::mat& A, arma::mat& B);
RcppExport SEXP _CovTools_rcpp_geigen(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_geigen(A, B));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ADMMprecision
arma::mat rcpp_ADMMprecision(arma::mat& S, const double lambda);
RcppExport SEXP _CovTools_rcpp_ADMMprecision(SEXP SSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_ADMMprecision(S, lambda));
    return rcpp_result_gen;
END_RCPP
}
// rcpptest1_cai11
double rcpptest1_cai11(arma::mat& X);
RcppExport SEXP _CovTools_rcpptest1_cai11(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpptest1_cai11(X));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CovTools_rcpp_geigen", (DL_FUNC) &_CovTools_rcpp_geigen, 2},
    {"_CovTools_rcpp_ADMMprecision", (DL_FUNC) &_CovTools_rcpp_ADMMprecision, 2},
    {"_CovTools_rcpptest1_cai11", (DL_FUNC) &_CovTools_rcpptest1_cai11, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_CovTools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
