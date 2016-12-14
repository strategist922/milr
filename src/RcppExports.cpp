// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// logit
arma::vec logit(const arma::mat& X, const arma::vec& beta);
RcppExport SEXP milr_logit(SEXP XSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(logit(X, beta));
    return rcpp_result_gen;
END_RCPP
}
// CLR_lasso
arma::vec CLR_lasso(const arma::vec& Z, const arma::mat& X, const arma::vec& ID_dbl, const arma::vec& init_beta, const double& lambda, double alpha, double maxit);
RcppExport SEXP milr_CLR_lasso(SEXP ZSEXP, SEXP XSEXP, SEXP ID_dblSEXP, SEXP init_betaSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ID_dbl(ID_dblSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init_beta(init_betaSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(CLR_lasso(Z, X, ID_dbl, init_beta, lambda, alpha, maxit));
    return rcpp_result_gen;
END_RCPP
}
// softmaxlogL
double softmaxlogL(const arma::vec& bag, const arma::mat& X, const arma::vec& Z, const arma::vec& beta, const double& alpha);
RcppExport SEXP milr_softmaxlogL(SEXP bagSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP betaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type bag(bagSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(softmaxlogL(bag, X, Z, beta, alpha));
    return rcpp_result_gen;
END_RCPP
}
