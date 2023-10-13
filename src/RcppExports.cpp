// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
#include "TMB.h"

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// get_graph
Rcpp::S4 get_graph(Rcpp::XPtr<TMBad::ADFun<> > adf);
RcppExport SEXP _RTMB_get_graph(SEXP adfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TMBad::ADFun<> > >::type adf(adfSEXP);
    rcpp_result_gen = Rcpp::wrap(get_graph(adf));
    return rcpp_result_gen;
END_RCPP
}
// get_df
Rcpp::DataFrame get_df(Rcpp::XPtr<TMBad::ADFun<> > adf);
RcppExport SEXP _RTMB_get_df(SEXP adfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TMBad::ADFun<> > >::type adf(adfSEXP);
    rcpp_result_gen = Rcpp::wrap(get_df(adf));
    return rcpp_result_gen;
END_RCPP
}
// get_node
void get_node(Rcpp::XPtr<TMBad::ADFun<> > adf, int node);
RcppExport SEXP _RTMB_get_node(SEXP adfSEXP, SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TMBad::ADFun<> > >::type adf(adfSEXP);
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    get_node(adf, node);
    return R_NilValue;
END_RCPP
}
// set_tape_config
Rcpp::List set_tape_config(int comparison, int atomic, int vectorize);
RcppExport SEXP _RTMB_set_tape_config(SEXP comparisonSEXP, SEXP atomicSEXP, SEXP vectorizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type comparison(comparisonSEXP);
    Rcpp::traits::input_parameter< int >::type atomic(atomicSEXP);
    Rcpp::traits::input_parameter< int >::type vectorize(vectorizeSEXP);
    rcpp_result_gen = Rcpp::wrap(set_tape_config(comparison, atomic, vectorize));
    return rcpp_result_gen;
END_RCPP
}
// compare_allow
bool compare_allow();
RcppExport SEXP _RTMB_compare_allow() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(compare_allow());
    return rcpp_result_gen;
END_RCPP
}
// valid
bool valid(Rcpp::ComplexVector x);
RcppExport SEXP _RTMB_valid(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(valid(x));
    return rcpp_result_gen;
END_RCPP
}
// ad_context
bool ad_context();
RcppExport SEXP _RTMB_ad_context() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ad_context());
    return rcpp_result_gen;
END_RCPP
}
// advec
Rcpp::ComplexVector advec(const Rcpp::NumericVector& x);
RcppExport SEXP _RTMB_advec(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(advec(x));
    return rcpp_result_gen;
END_RCPP
}
// dependent
Rcpp::ComplexVector dependent(const Rcpp::ComplexVector& x);
RcppExport SEXP _RTMB_dependent(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(dependent(x));
    return rcpp_result_gen;
END_RCPP
}
// independent
Rcpp::ComplexVector independent(const Rcpp::ComplexVector& x);
RcppExport SEXP _RTMB_independent(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(independent(x));
    return rcpp_result_gen;
END_RCPP
}
// getValues
Rcpp::NumericVector getValues(const Rcpp::ComplexVector& x);
RcppExport SEXP _RTMB_getValues(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(getValues(x));
    return rcpp_result_gen;
END_RCPP
}
// getVariables
Rcpp::LogicalVector getVariables(const Rcpp::ComplexVector& x);
RcppExport SEXP _RTMB_getVariables(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(getVariables(x));
    return rcpp_result_gen;
END_RCPP
}
// dbgprint
void dbgprint(const Rcpp::ComplexVector& x);
RcppExport SEXP _RTMB_dbgprint(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    dbgprint(x);
    return R_NilValue;
END_RCPP
}
// distr_dexp
Rcpp::ComplexVector distr_dexp(Rcpp::ComplexVector x, Rcpp::ComplexVector rate, bool give_log);
RcppExport SEXP _RTMB_distr_dexp(SEXP xSEXP, SEXP rateSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dexp(x, rate, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dweibull
Rcpp::ComplexVector distr_dweibull(Rcpp::ComplexVector x, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale, bool give_log);
RcppExport SEXP _RTMB_distr_dweibull(SEXP xSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dweibull(x, shape, scale, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dbinom
Rcpp::ComplexVector distr_dbinom(Rcpp::ComplexVector x, Rcpp::ComplexVector size, Rcpp::ComplexVector prob, bool give_log);
RcppExport SEXP _RTMB_distr_dbinom(SEXP xSEXP, SEXP sizeSEXP, SEXP probSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dbinom(x, size, prob, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dbinom_robust
Rcpp::ComplexVector distr_dbinom_robust(Rcpp::ComplexVector x, Rcpp::ComplexVector size, Rcpp::ComplexVector logit_p, bool give_log);
RcppExport SEXP _RTMB_distr_dbinom_robust(SEXP xSEXP, SEXP sizeSEXP, SEXP logit_pSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type logit_p(logit_pSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dbinom_robust(x, size, logit_p, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dbeta
Rcpp::ComplexVector distr_dbeta(Rcpp::ComplexVector x, Rcpp::ComplexVector shape1, Rcpp::ComplexVector shape2, bool give_log);
RcppExport SEXP _RTMB_distr_dbeta(SEXP xSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dbeta(x, shape1, shape2, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_df
Rcpp::ComplexVector distr_df(Rcpp::ComplexVector x, Rcpp::ComplexVector df1, Rcpp::ComplexVector df2, bool give_log);
RcppExport SEXP _RTMB_distr_df(SEXP xSEXP, SEXP df1SEXP, SEXP df2SEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type df1(df1SEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type df2(df2SEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_df(x, df1, df2, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dlogis
Rcpp::ComplexVector distr_dlogis(Rcpp::ComplexVector x, Rcpp::ComplexVector location, Rcpp::ComplexVector scale, bool give_log);
RcppExport SEXP _RTMB_distr_dlogis(SEXP xSEXP, SEXP locationSEXP, SEXP scaleSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type location(locationSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dlogis(x, location, scale, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dsn
Rcpp::ComplexVector distr_dsn(Rcpp::ComplexVector x, Rcpp::ComplexVector alpha, bool give_log);
RcppExport SEXP _RTMB_distr_dsn(SEXP xSEXP, SEXP alphaSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dsn(x, alpha, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dt
Rcpp::ComplexVector distr_dt(Rcpp::ComplexVector x, Rcpp::ComplexVector df, bool give_log);
RcppExport SEXP _RTMB_distr_dt(SEXP xSEXP, SEXP dfSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type df(dfSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dt(x, df, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dSHASHo
Rcpp::ComplexVector distr_dSHASHo(Rcpp::ComplexVector x, Rcpp::ComplexVector mu, Rcpp::ComplexVector sigma, Rcpp::ComplexVector nu, Rcpp::ComplexVector tau, bool give_log);
RcppExport SEXP _RTMB_distr_dSHASHo(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP nuSEXP, SEXP tauSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dSHASHo(x, mu, sigma, nu, tau, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dtweedie
Rcpp::ComplexVector distr_dtweedie(Rcpp::ComplexVector x, Rcpp::ComplexVector mu, Rcpp::ComplexVector phi, Rcpp::ComplexVector p, bool give_log);
RcppExport SEXP _RTMB_distr_dtweedie(SEXP xSEXP, SEXP muSEXP, SEXP phiSEXP, SEXP pSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dtweedie(x, mu, phi, p, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dnbinom
Rcpp::ComplexVector distr_dnbinom(Rcpp::ComplexVector x, Rcpp::ComplexVector size, Rcpp::ComplexVector prob, bool give_log);
RcppExport SEXP _RTMB_distr_dnbinom(SEXP xSEXP, SEXP sizeSEXP, SEXP probSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dnbinom(x, size, prob, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dnbinom2
Rcpp::ComplexVector distr_dnbinom2(Rcpp::ComplexVector x, Rcpp::ComplexVector mu, Rcpp::ComplexVector var, bool give_log);
RcppExport SEXP _RTMB_distr_dnbinom2(SEXP xSEXP, SEXP muSEXP, SEXP varSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type var(varSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dnbinom2(x, mu, var, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dnbinom_robust
Rcpp::ComplexVector distr_dnbinom_robust(Rcpp::ComplexVector x, Rcpp::ComplexVector log_mu, Rcpp::ComplexVector log_var_minus_mu, bool give_log);
RcppExport SEXP _RTMB_distr_dnbinom_robust(SEXP xSEXP, SEXP log_muSEXP, SEXP log_var_minus_muSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type log_mu(log_muSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type log_var_minus_mu(log_var_minus_muSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dnbinom_robust(x, log_mu, log_var_minus_mu, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dpois
Rcpp::ComplexVector distr_dpois(Rcpp::ComplexVector x, Rcpp::ComplexVector lambda, bool give_log);
RcppExport SEXP _RTMB_distr_dpois(SEXP xSEXP, SEXP lambdaSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dpois(x, lambda, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dgamma
Rcpp::ComplexVector distr_dgamma(Rcpp::ComplexVector x, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale, bool give_log);
RcppExport SEXP _RTMB_distr_dgamma(SEXP xSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dgamma(x, shape, scale, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_dlgamma
Rcpp::ComplexVector distr_dlgamma(Rcpp::ComplexVector x, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale, bool give_log);
RcppExport SEXP _RTMB_distr_dlgamma(SEXP xSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_dlgamma(x, shape, scale, give_log));
    return rcpp_result_gen;
END_RCPP
}
// distr_pnorm
Rcpp::ComplexVector distr_pnorm(Rcpp::ComplexVector q, Rcpp::ComplexVector mean, Rcpp::ComplexVector sd);
RcppExport SEXP _RTMB_distr_pnorm(SEXP qSEXP, SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_pnorm(q, mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// distr_pgamma
Rcpp::ComplexVector distr_pgamma(Rcpp::ComplexVector q, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale);
RcppExport SEXP _RTMB_distr_pgamma(SEXP qSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_pgamma(q, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// distr_ppois
Rcpp::ComplexVector distr_ppois(Rcpp::ComplexVector q, Rcpp::ComplexVector lambda);
RcppExport SEXP _RTMB_distr_ppois(SEXP qSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_ppois(q, lambda));
    return rcpp_result_gen;
END_RCPP
}
// distr_pexp
Rcpp::ComplexVector distr_pexp(Rcpp::ComplexVector q, Rcpp::ComplexVector rate);
RcppExport SEXP _RTMB_distr_pexp(SEXP qSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_pexp(q, rate));
    return rcpp_result_gen;
END_RCPP
}
// distr_pweibull
Rcpp::ComplexVector distr_pweibull(Rcpp::ComplexVector q, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale);
RcppExport SEXP _RTMB_distr_pweibull(SEXP qSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_pweibull(q, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// distr_pbeta
Rcpp::ComplexVector distr_pbeta(Rcpp::ComplexVector q, Rcpp::ComplexVector shape1, Rcpp::ComplexVector shape2);
RcppExport SEXP _RTMB_distr_pbeta(SEXP qSEXP, SEXP shape1SEXP, SEXP shape2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape2(shape2SEXP);
    rcpp_result_gen = Rcpp::wrap(distr_pbeta(q, shape1, shape2));
    return rcpp_result_gen;
END_RCPP
}
// distr_qnorm
Rcpp::ComplexVector distr_qnorm(Rcpp::ComplexVector p, Rcpp::ComplexVector mean, Rcpp::ComplexVector sd);
RcppExport SEXP _RTMB_distr_qnorm(SEXP pSEXP, SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_qnorm(p, mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// distr_qgamma
Rcpp::ComplexVector distr_qgamma(Rcpp::ComplexVector p, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale);
RcppExport SEXP _RTMB_distr_qgamma(SEXP pSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_qgamma(p, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// distr_qexp
Rcpp::ComplexVector distr_qexp(Rcpp::ComplexVector p, Rcpp::ComplexVector rate);
RcppExport SEXP _RTMB_distr_qexp(SEXP pSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_qexp(p, rate));
    return rcpp_result_gen;
END_RCPP
}
// distr_qweibull
Rcpp::ComplexVector distr_qweibull(Rcpp::ComplexVector p, Rcpp::ComplexVector shape, Rcpp::ComplexVector scale);
RcppExport SEXP _RTMB_distr_qweibull(SEXP pSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_qweibull(p, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// distr_qbeta
Rcpp::ComplexVector distr_qbeta(Rcpp::ComplexVector p, Rcpp::ComplexVector shape1, Rcpp::ComplexVector shape2);
RcppExport SEXP _RTMB_distr_qbeta(SEXP pSEXP, SEXP shape1SEXP, SEXP shape2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type shape2(shape2SEXP);
    rcpp_result_gen = Rcpp::wrap(distr_qbeta(p, shape1, shape2));
    return rcpp_result_gen;
END_RCPP
}
// distr_besselK
Rcpp::ComplexVector distr_besselK(Rcpp::ComplexVector x, Rcpp::ComplexVector nu);
RcppExport SEXP _RTMB_distr_besselK(SEXP xSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_besselK(x, nu));
    return rcpp_result_gen;
END_RCPP
}
// distr_besselI
Rcpp::ComplexVector distr_besselI(Rcpp::ComplexVector x, Rcpp::ComplexVector nu);
RcppExport SEXP _RTMB_distr_besselI(SEXP xSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_besselI(x, nu));
    return rcpp_result_gen;
END_RCPP
}
// distr_besselJ
Rcpp::ComplexVector distr_besselJ(Rcpp::ComplexVector x, Rcpp::ComplexVector nu);
RcppExport SEXP _RTMB_distr_besselJ(SEXP xSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_besselJ(x, nu));
    return rcpp_result_gen;
END_RCPP
}
// distr_besselY
Rcpp::ComplexVector distr_besselY(Rcpp::ComplexVector x, Rcpp::ComplexVector nu);
RcppExport SEXP _RTMB_distr_besselY(SEXP xSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_besselY(x, nu));
    return rcpp_result_gen;
END_RCPP
}
// distr_compois_calc_logZ
Rcpp::ComplexVector distr_compois_calc_logZ(Rcpp::ComplexVector loglambda, Rcpp::ComplexVector nu);
RcppExport SEXP _RTMB_distr_compois_calc_logZ(SEXP loglambdaSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type loglambda(loglambdaSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_compois_calc_logZ(loglambda, nu));
    return rcpp_result_gen;
END_RCPP
}
// distr_compois_calc_loglambda
Rcpp::ComplexVector distr_compois_calc_loglambda(Rcpp::ComplexVector logmean, Rcpp::ComplexVector nu);
RcppExport SEXP _RTMB_distr_compois_calc_loglambda(SEXP logmeanSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type logmean(logmeanSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_compois_calc_loglambda(logmean, nu));
    return rcpp_result_gen;
END_RCPP
}
// distr_rcompois
double distr_rcompois(double loglambda, double nu);
RcppExport SEXP _RTMB_distr_rcompois(SEXP loglambdaSEXP, SEXP nuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type loglambda(loglambdaSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    rcpp_result_gen = Rcpp::wrap(distr_rcompois(loglambda, nu));
    return rcpp_result_gen;
END_RCPP
}
// Arith2
Rcpp::ComplexVector Arith2(const Rcpp::ComplexVector& x, const Rcpp::ComplexVector& y, std::string op);
RcppExport SEXP _RTMB_Arith2(SEXP xSEXP, SEXP ySEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(Arith2(x, y, op));
    return rcpp_result_gen;
END_RCPP
}
// Math1
Rcpp::ComplexVector Math1(const Rcpp::ComplexVector& x, std::string op);
RcppExport SEXP _RTMB_Math1(SEXP xSEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(Math1(x, op));
    return rcpp_result_gen;
END_RCPP
}
// Reduce1
Rcpp::ComplexVector Reduce1(const Rcpp::ComplexVector& x, std::string op);
RcppExport SEXP _RTMB_Reduce1(SEXP xSEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(Reduce1(x, op));
    return rcpp_result_gen;
END_RCPP
}
// matmul
Rcpp::ComplexMatrix matmul(const Rcpp::ComplexMatrix& x, const Rcpp::ComplexMatrix& y);
RcppExport SEXP _RTMB_matmul(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ComplexMatrix& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(matmul(x, y));
    return rcpp_result_gen;
END_RCPP
}
// matinv
Rcpp::ComplexMatrix matinv(const Rcpp::ComplexMatrix& x);
RcppExport SEXP _RTMB_matinv(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(matinv(x));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm0
Rcpp::ComplexVector dmvnorm0(const Rcpp::ComplexMatrix& x, const Rcpp::ComplexMatrix& s, bool give_log, SEXP keep);
RcppExport SEXP _RTMB_dmvnorm0(SEXP xSEXP, SEXP sSEXP, SEXP give_logSEXP, SEXP keepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::ComplexMatrix& >::type s(sSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    Rcpp::traits::input_parameter< SEXP >::type keep(keepSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm0(x, s, give_log, keep));
    return rcpp_result_gen;
END_RCPP
}
// dgmrf0
Rcpp::ComplexVector dgmrf0(const Rcpp::ComplexMatrix& x, Rcpp::S4 q, bool give_log);
RcppExport SEXP _RTMB_dgmrf0(SEXP xSEXP, SEXP qSEXP, SEXP give_logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4 >::type q(qSEXP);
    Rcpp::traits::input_parameter< bool >::type give_log(give_logSEXP);
    rcpp_result_gen = Rcpp::wrap(dgmrf0(x, q, give_log));
    return rcpp_result_gen;
END_RCPP
}
// SparseArith2
SEXP SparseArith2(SEXP x, SEXP y, std::string op);
RcppExport SEXP _RTMB_SparseArith2(SEXP xSEXP, SEXP ySEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(SparseArith2(x, y, op));
    return rcpp_result_gen;
END_RCPP
}
// math_expm
Rcpp::ComplexMatrix math_expm(SEXP x);
RcppExport SEXP _RTMB_math_expm(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(math_expm(x));
    return rcpp_result_gen;
END_RCPP
}
// expATv
Rcpp::ComplexMatrix expATv(SEXP AT, Rcpp::ComplexMatrix v, Rcpp::ComplexVector N, Rcpp::List cfg);
RcppExport SEXP _RTMB_expATv(SEXP ATSEXP, SEXP vSEXP, SEXP NSEXP, SEXP cfgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type AT(ATSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexMatrix >::type v(vSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type N(NSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cfg(cfgSEXP);
    rcpp_result_gen = Rcpp::wrap(expATv(AT, v, N, cfg));
    return rcpp_result_gen;
END_RCPP
}
// fft_complex
Rcpp::ComplexVector fft_complex(const Rcpp::ComplexVector& x, std::vector<size_t> dim, bool inverse);
RcppExport SEXP _RTMB_fft_complex(SEXP xSEXP, SEXP dimSEXP, SEXP inverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<size_t> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    rcpp_result_gen = Rcpp::wrap(fft_complex(x, dim, inverse));
    return rcpp_result_gen;
END_RCPP
}
// TapedEval
Rcpp::ComplexVector TapedEval(Rcpp::Function F, Rcpp::ComplexVector i);
RcppExport SEXP _RTMB_TapedEval(SEXP FSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Function >::type F(FSEXP);
    Rcpp::traits::input_parameter< Rcpp::ComplexVector >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(TapedEval(F, i));
    return rcpp_result_gen;
END_RCPP
}
// LowRankTag
Rcpp::ComplexVector LowRankTag(const Rcpp::ComplexVector& x);
RcppExport SEXP _RTMB_LowRankTag(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::ComplexVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(LowRankTag(x));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_mod_adfun();

static const R_CallMethodDef CallEntries[] = {
    TMB_CALLDEFS,
    {"_RTMB_get_graph", (DL_FUNC) &_RTMB_get_graph, 1},
    {"_RTMB_get_df", (DL_FUNC) &_RTMB_get_df, 1},
    {"_RTMB_get_node", (DL_FUNC) &_RTMB_get_node, 2},
    {"_RTMB_set_tape_config", (DL_FUNC) &_RTMB_set_tape_config, 3},
    {"_RTMB_compare_allow", (DL_FUNC) &_RTMB_compare_allow, 0},
    {"_RTMB_valid", (DL_FUNC) &_RTMB_valid, 1},
    {"_RTMB_ad_context", (DL_FUNC) &_RTMB_ad_context, 0},
    {"_RTMB_advec", (DL_FUNC) &_RTMB_advec, 1},
    {"_RTMB_dependent", (DL_FUNC) &_RTMB_dependent, 1},
    {"_RTMB_independent", (DL_FUNC) &_RTMB_independent, 1},
    {"_RTMB_getValues", (DL_FUNC) &_RTMB_getValues, 1},
    {"_RTMB_getVariables", (DL_FUNC) &_RTMB_getVariables, 1},
    {"_RTMB_dbgprint", (DL_FUNC) &_RTMB_dbgprint, 1},
    {"_RTMB_distr_dexp", (DL_FUNC) &_RTMB_distr_dexp, 3},
    {"_RTMB_distr_dweibull", (DL_FUNC) &_RTMB_distr_dweibull, 4},
    {"_RTMB_distr_dbinom", (DL_FUNC) &_RTMB_distr_dbinom, 4},
    {"_RTMB_distr_dbinom_robust", (DL_FUNC) &_RTMB_distr_dbinom_robust, 4},
    {"_RTMB_distr_dbeta", (DL_FUNC) &_RTMB_distr_dbeta, 4},
    {"_RTMB_distr_df", (DL_FUNC) &_RTMB_distr_df, 4},
    {"_RTMB_distr_dlogis", (DL_FUNC) &_RTMB_distr_dlogis, 4},
    {"_RTMB_distr_dsn", (DL_FUNC) &_RTMB_distr_dsn, 3},
    {"_RTMB_distr_dt", (DL_FUNC) &_RTMB_distr_dt, 3},
    {"_RTMB_distr_dSHASHo", (DL_FUNC) &_RTMB_distr_dSHASHo, 6},
    {"_RTMB_distr_dtweedie", (DL_FUNC) &_RTMB_distr_dtweedie, 5},
    {"_RTMB_distr_dnbinom", (DL_FUNC) &_RTMB_distr_dnbinom, 4},
    {"_RTMB_distr_dnbinom2", (DL_FUNC) &_RTMB_distr_dnbinom2, 4},
    {"_RTMB_distr_dnbinom_robust", (DL_FUNC) &_RTMB_distr_dnbinom_robust, 4},
    {"_RTMB_distr_dpois", (DL_FUNC) &_RTMB_distr_dpois, 3},
    {"_RTMB_distr_dgamma", (DL_FUNC) &_RTMB_distr_dgamma, 4},
    {"_RTMB_distr_dlgamma", (DL_FUNC) &_RTMB_distr_dlgamma, 4},
    {"_RTMB_distr_pnorm", (DL_FUNC) &_RTMB_distr_pnorm, 3},
    {"_RTMB_distr_pgamma", (DL_FUNC) &_RTMB_distr_pgamma, 3},
    {"_RTMB_distr_ppois", (DL_FUNC) &_RTMB_distr_ppois, 2},
    {"_RTMB_distr_pexp", (DL_FUNC) &_RTMB_distr_pexp, 2},
    {"_RTMB_distr_pweibull", (DL_FUNC) &_RTMB_distr_pweibull, 3},
    {"_RTMB_distr_pbeta", (DL_FUNC) &_RTMB_distr_pbeta, 3},
    {"_RTMB_distr_qnorm", (DL_FUNC) &_RTMB_distr_qnorm, 3},
    {"_RTMB_distr_qgamma", (DL_FUNC) &_RTMB_distr_qgamma, 3},
    {"_RTMB_distr_qexp", (DL_FUNC) &_RTMB_distr_qexp, 2},
    {"_RTMB_distr_qweibull", (DL_FUNC) &_RTMB_distr_qweibull, 3},
    {"_RTMB_distr_qbeta", (DL_FUNC) &_RTMB_distr_qbeta, 3},
    {"_RTMB_distr_besselK", (DL_FUNC) &_RTMB_distr_besselK, 2},
    {"_RTMB_distr_besselI", (DL_FUNC) &_RTMB_distr_besselI, 2},
    {"_RTMB_distr_besselJ", (DL_FUNC) &_RTMB_distr_besselJ, 2},
    {"_RTMB_distr_besselY", (DL_FUNC) &_RTMB_distr_besselY, 2},
    {"_RTMB_distr_compois_calc_logZ", (DL_FUNC) &_RTMB_distr_compois_calc_logZ, 2},
    {"_RTMB_distr_compois_calc_loglambda", (DL_FUNC) &_RTMB_distr_compois_calc_loglambda, 2},
    {"_RTMB_distr_rcompois", (DL_FUNC) &_RTMB_distr_rcompois, 2},
    {"_RTMB_Arith2", (DL_FUNC) &_RTMB_Arith2, 3},
    {"_RTMB_Math1", (DL_FUNC) &_RTMB_Math1, 2},
    {"_RTMB_Reduce1", (DL_FUNC) &_RTMB_Reduce1, 2},
    {"_RTMB_matmul", (DL_FUNC) &_RTMB_matmul, 2},
    {"_RTMB_matinv", (DL_FUNC) &_RTMB_matinv, 1},
    {"_RTMB_dmvnorm0", (DL_FUNC) &_RTMB_dmvnorm0, 4},
    {"_RTMB_dgmrf0", (DL_FUNC) &_RTMB_dgmrf0, 3},
    {"_RTMB_SparseArith2", (DL_FUNC) &_RTMB_SparseArith2, 3},
    {"_RTMB_math_expm", (DL_FUNC) &_RTMB_math_expm, 1},
    {"_RTMB_expATv", (DL_FUNC) &_RTMB_expATv, 4},
    {"_RTMB_fft_complex", (DL_FUNC) &_RTMB_fft_complex, 3},
    {"_RTMB_TapedEval", (DL_FUNC) &_RTMB_TapedEval, 2},
    {"_RTMB_LowRankTag", (DL_FUNC) &_RTMB_LowRankTag, 1},
    {"_rcpp_module_boot_mod_adfun", (DL_FUNC) &_rcpp_module_boot_mod_adfun, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RTMB(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    TMB_CCALLABLES("RTMB");
}
