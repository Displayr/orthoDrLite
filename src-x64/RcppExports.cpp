// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// gen_solver
List gen_solver(arma::mat B, Rcpp::Function f, Rcpp::Function g, Environment env, int useg, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose);
RcppExport SEXP _orthoDr_gen_solver(SEXP BSEXP, SEXP fSEXP, SEXP gSEXP, SEXP envSEXP, SEXP usegSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type f(fSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type g(gSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    Rcpp::traits::input_parameter< int >::type useg(usegSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_solver(B, f, g, env, useg, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose));
    return rcpp_result_gen;
END_RCPP
}
// surv_solver
List surv_solver(arma::mat B, arma::mat X, arma::mat Phit, NumericMatrix inRisk, double bw, NumericVector Fail_Ind, double rho, double eta, double gamma, double tau, double epsilon, double btol, double ftol, double gtol, int maxitr, int verbose);
RcppExport SEXP _orthoDr_surv_solver(SEXP BSEXP, SEXP XSEXP, SEXP PhitSEXP, SEXP inRiskSEXP, SEXP bwSEXP, SEXP Fail_IndSEXP, SEXP rhoSEXP, SEXP etaSEXP, SEXP gammaSEXP, SEXP tauSEXP, SEXP epsilonSEXP, SEXP btolSEXP, SEXP ftolSEXP, SEXP gtolSEXP, SEXP maxitrSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Phit(PhitSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type inRisk(inRiskSEXP);
    Rcpp::traits::input_parameter< double >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Fail_Ind(Fail_IndSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type btol(btolSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< int >::type maxitr(maxitrSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(surv_solver(B, X, Phit, inRisk, bw, Fail_Ind, rho, eta, gamma, tau, epsilon, btol, ftol, gtol, maxitr, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_orthoDr_gen_solver", (DL_FUNC) &_orthoDr_gen_solver, 15},
    {"_orthoDr_surv_solver", (DL_FUNC) &_orthoDr_surv_solver, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_orthoDr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}