// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// BIC
double BIC(List& obj, arma::vec& y, arma::mat& z, arma::mat& x, double tol);
RcppExport SEXP _Spgr_BIC(SEXP objSEXP, SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BIC(obj, y, z, x, tol));
    return rcpp_result_gen;
END_RCPP
}
// BICx
double BICx(List& obj, arma::vec& y, arma::mat& x, double tol);
RcppExport SEXP _Spgr_BICx(SEXP objSEXP, SEXP ySEXP, SEXP xSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BICx(obj, y, x, tol));
    return rcpp_result_gen;
END_RCPP
}
// BICr
double BICr(List& obj, arma::vec indexy, arma::vec& y, arma::mat& z, arma::mat& x, double tol);
RcppExport SEXP _Spgr_BICr(SEXP objSEXP, SEXP indexySEXP, SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BICr(obj, indexy, y, z, x, tol));
    return rcpp_result_gen;
END_RCPP
}
// BICrx
double BICrx(List& obj, arma::vec indexy, arma::vec& y, arma::mat& x, double tol);
RcppExport SEXP _Spgr_BICrx(SEXP objSEXP, SEXP indexySEXP, SEXP ySEXP, SEXP xSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BICrx(obj, indexy, y, x, tol));
    return rcpp_result_gen;
END_RCPP
}
// BICc
double BICc(List& obj, arma::vec& y, arma::mat& z, arma::mat& x, double c0, double tol);
RcppExport SEXP _Spgr_BICc(SEXP objSEXP, SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP c0SEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type c0(c0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BICc(obj, y, z, x, c0, tol));
    return rcpp_result_gen;
END_RCPP
}
// BICcx
double BICcx(List& obj, arma::vec& y, arma::mat& x, double c0, double tol);
RcppExport SEXP _Spgr_BICcx(SEXP objSEXP, SEXP ySEXP, SEXP xSEXP, SEXP c0SEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type c0(c0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BICcx(obj, y, x, c0, tol));
    return rcpp_result_gen;
END_RCPP
}
// BICcr
double BICcr(List& obj, arma::vec indexy, arma::vec& y, arma::mat& z, arma::mat& x, double c0, double tol);
RcppExport SEXP _Spgr_BICcr(SEXP objSEXP, SEXP indexySEXP, SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP c0SEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type c0(c0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BICcr(obj, indexy, y, z, x, c0, tol));
    return rcpp_result_gen;
END_RCPP
}
// BICcrx
double BICcrx(List& obj, arma::vec indexy, arma::vec& y, arma::mat& x, double c0, double tol);
RcppExport SEXP _Spgr_BICcrx(SEXP objSEXP, SEXP indexySEXP, SEXP ySEXP, SEXP xSEXP, SEXP c0SEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type c0(c0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BICcrx(obj, indexy, y, x, c0, tol));
    return rcpp_result_gen;
END_RCPP
}
// BIClog
double BIClog(List& obj, arma::vec& y, arma::mat& z, arma::mat& x, double tol);
RcppExport SEXP _Spgr_BIClog(SEXP objSEXP, SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BIClog(obj, y, z, x, tol));
    return rcpp_result_gen;
END_RCPP
}
// BIClogx
double BIClogx(List& obj, arma::vec& y, arma::mat& x, double tol);
RcppExport SEXP _Spgr_BIClogx(SEXP objSEXP, SEXP ySEXP, SEXP xSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BIClogx(obj, y, x, tol));
    return rcpp_result_gen;
END_RCPP
}
// BIClogr
double BIClogr(List& obj, arma::vec indexy, arma::vec& y, arma::mat& z, arma::mat& x, double tol);
RcppExport SEXP _Spgr_BIClogr(SEXP objSEXP, SEXP indexySEXP, SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BIClogr(obj, indexy, y, z, x, tol));
    return rcpp_result_gen;
END_RCPP
}
// BIClogrx
double BIClogrx(List& obj, arma::vec indexy, arma::vec& y, arma::mat& x, double tol);
RcppExport SEXP _Spgr_BIClogrx(SEXP objSEXP, SEXP indexySEXP, SEXP ySEXP, SEXP xSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(BIClogrx(obj, indexy, y, x, tol));
    return rcpp_result_gen;
END_RCPP
}
// Spgr
Rcpp::List Spgr(arma::vec& y, arma::mat& z, arma::mat& x, arma::vec& weights, arma::mat& betam0, double nu, double gam, double lam, int maxiter, double tolabs, double tolrel);
RcppExport SEXP _Spgr_Spgr(SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP weightsSEXP, SEXP betam0SEXP, SEXP nuSEXP, SEXP gamSEXP, SEXP lamSEXP, SEXP maxiterSEXP, SEXP tolabsSEXP, SEXP tolrelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type betam0(betam0SEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type gam(gamSEXP);
    Rcpp::traits::input_parameter< double >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tolabs(tolabsSEXP);
    Rcpp::traits::input_parameter< double >::type tolrel(tolrelSEXP);
    rcpp_result_gen = Rcpp::wrap(Spgr(y, z, x, weights, betam0, nu, gam, lam, maxiter, tolabs, tolrel));
    return rcpp_result_gen;
END_RCPP
}
// selectlam
Rcpp::List selectlam(arma::vec& y, arma::mat& z, arma::mat& x, arma::vec& weights, arma::vec& lamv, arma::mat& betam0, double nu, double gam, int maxiter, double tolabs, double tolrel);
RcppExport SEXP _Spgr_selectlam(SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP weightsSEXP, SEXP lamvSEXP, SEXP betam0SEXP, SEXP nuSEXP, SEXP gamSEXP, SEXP maxiterSEXP, SEXP tolabsSEXP, SEXP tolrelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type lamv(lamvSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type betam0(betam0SEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type gam(gamSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tolabs(tolabsSEXP);
    Rcpp::traits::input_parameter< double >::type tolrel(tolrelSEXP);
    rcpp_result_gen = Rcpp::wrap(selectlam(y, z, x, weights, lamv, betam0, nu, gam, maxiter, tolabs, tolrel));
    return rcpp_result_gen;
END_RCPP
}
// Spgr_penalty
Rcpp::List Spgr_penalty(arma::vec& y, arma::mat& z, arma::mat& x, double rho, arma::mat& matpen, arma::vec& weights, arma::mat& betam0, double nu, double gam, double lam, int maxiter, double tolabs, double tolrel);
RcppExport SEXP _Spgr_Spgr_penalty(SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP rhoSEXP, SEXP matpenSEXP, SEXP weightsSEXP, SEXP betam0SEXP, SEXP nuSEXP, SEXP gamSEXP, SEXP lamSEXP, SEXP maxiterSEXP, SEXP tolabsSEXP, SEXP tolrelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type matpen(matpenSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type betam0(betam0SEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type gam(gamSEXP);
    Rcpp::traits::input_parameter< double >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tolabs(tolabsSEXP);
    Rcpp::traits::input_parameter< double >::type tolrel(tolrelSEXP);
    rcpp_result_gen = Rcpp::wrap(Spgr_penalty(y, z, x, rho, matpen, weights, betam0, nu, gam, lam, maxiter, tolabs, tolrel));
    return rcpp_result_gen;
END_RCPP
}
// Spgrr
Rcpp::List Spgrr(arma::vec indexy, arma::vec& y, arma::mat& z, arma::mat& x, arma::vec& weights, arma::mat& betam0, double nu, double gam, double lam, int maxiter, double tolabs, double tolrel);
RcppExport SEXP _Spgr_Spgrr(SEXP indexySEXP, SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP weightsSEXP, SEXP betam0SEXP, SEXP nuSEXP, SEXP gamSEXP, SEXP lamSEXP, SEXP maxiterSEXP, SEXP tolabsSEXP, SEXP tolrelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type betam0(betam0SEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type gam(gamSEXP);
    Rcpp::traits::input_parameter< double >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tolabs(tolabsSEXP);
    Rcpp::traits::input_parameter< double >::type tolrel(tolrelSEXP);
    rcpp_result_gen = Rcpp::wrap(Spgrr(indexy, y, z, x, weights, betam0, nu, gam, lam, maxiter, tolabs, tolrel));
    return rcpp_result_gen;
END_RCPP
}
// Spgrrx
Rcpp::List Spgrrx(arma::vec indexy, arma::vec& y, arma::mat& x, arma::vec& weights, arma::mat& betam0, double nu, double gam, double lam, int maxiter, double tolabs, double tolrel);
RcppExport SEXP _Spgr_Spgrrx(SEXP indexySEXP, SEXP ySEXP, SEXP xSEXP, SEXP weightsSEXP, SEXP betam0SEXP, SEXP nuSEXP, SEXP gamSEXP, SEXP lamSEXP, SEXP maxiterSEXP, SEXP tolabsSEXP, SEXP tolrelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type betam0(betam0SEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type gam(gamSEXP);
    Rcpp::traits::input_parameter< double >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tolabs(tolabsSEXP);
    Rcpp::traits::input_parameter< double >::type tolrel(tolrelSEXP);
    rcpp_result_gen = Rcpp::wrap(Spgrrx(indexy, y, x, weights, betam0, nu, gam, lam, maxiter, tolabs, tolrel));
    return rcpp_result_gen;
END_RCPP
}
// Spgrx
Rcpp::List Spgrx(arma::vec& y, arma::mat& x, arma::vec& weights, arma::mat& betam0, double nu, double gam, double lam, int maxiter, double tolabs, double tolrel);
RcppExport SEXP _Spgr_Spgrx(SEXP ySEXP, SEXP xSEXP, SEXP weightsSEXP, SEXP betam0SEXP, SEXP nuSEXP, SEXP gamSEXP, SEXP lamSEXP, SEXP maxiterSEXP, SEXP tolabsSEXP, SEXP tolrelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type betam0(betam0SEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type gam(gamSEXP);
    Rcpp::traits::input_parameter< double >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tolabs(tolabsSEXP);
    Rcpp::traits::input_parameter< double >::type tolrel(tolrelSEXP);
    rcpp_result_gen = Rcpp::wrap(Spgrx(y, x, weights, betam0, nu, gam, lam, maxiter, tolabs, tolrel));
    return rcpp_result_gen;
END_RCPP
}
// selectlamx
Rcpp::List selectlamx(arma::vec& y, arma::mat& x, arma::vec& weights, arma::vec& lamv, arma::mat& betam0, double nu, double gam, int maxiter, double tolabs, double tolrel);
RcppExport SEXP _Spgr_selectlamx(SEXP ySEXP, SEXP xSEXP, SEXP weightsSEXP, SEXP lamvSEXP, SEXP betam0SEXP, SEXP nuSEXP, SEXP gamSEXP, SEXP maxiterSEXP, SEXP tolabsSEXP, SEXP tolrelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type lamv(lamvSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type betam0(betam0SEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type gam(gamSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tolabs(tolabsSEXP);
    Rcpp::traits::input_parameter< double >::type tolrel(tolrelSEXP);
    rcpp_result_gen = Rcpp::wrap(selectlamx(y, x, weights, lamv, betam0, nu, gam, maxiter, tolabs, tolrel));
    return rcpp_result_gen;
END_RCPP
}
// cal_initial
arma::mat cal_initial(arma::vec& y, arma::mat& z, arma::mat& x, double lam0);
RcppExport SEXP _Spgr_cal_initial(SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP lam0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lam0(lam0SEXP);
    rcpp_result_gen = Rcpp::wrap(cal_initial(y, z, x, lam0));
    return rcpp_result_gen;
END_RCPP
}
// cal_initialx
arma::mat cal_initialx(arma::vec& y, arma::mat& x, double lam0);
RcppExport SEXP _Spgr_cal_initialx(SEXP ySEXP, SEXP xSEXP, SEXP lam0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lam0(lam0SEXP);
    rcpp_result_gen = Rcpp::wrap(cal_initialx(y, x, lam0));
    return rcpp_result_gen;
END_RCPP
}
// cal_initialr
arma::mat cal_initialr(arma::vec indexy, arma::vec& y, arma::mat& z, arma::mat& x, double lam0);
RcppExport SEXP _Spgr_cal_initialr(SEXP indexySEXP, SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP lam0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lam0(lam0SEXP);
    rcpp_result_gen = Rcpp::wrap(cal_initialr(indexy, y, z, x, lam0));
    return rcpp_result_gen;
END_RCPP
}
// cal_initialrx
arma::mat cal_initialrx(arma::vec indexy, arma::vec& y, arma::mat& x, double lam0);
RcppExport SEXP _Spgr_cal_initialrx(SEXP indexySEXP, SEXP ySEXP, SEXP xSEXP, SEXP lam0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lam0(lam0SEXP);
    rcpp_result_gen = Rcpp::wrap(cal_initialrx(indexy, y, x, lam0));
    return rcpp_result_gen;
END_RCPP
}
// cal_initialr2
arma::mat cal_initialr2(arma::vec indexy, arma::vec& y, arma::mat& z, arma::mat& x, int K0, double lam0);
RcppExport SEXP _Spgr_cal_initialr2(SEXP indexySEXP, SEXP ySEXP, SEXP zSEXP, SEXP xSEXP, SEXP K0SEXP, SEXP lam0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< double >::type lam0(lam0SEXP);
    rcpp_result_gen = Rcpp::wrap(cal_initialr2(indexy, y, z, x, K0, lam0));
    return rcpp_result_gen;
END_RCPP
}
// cal_initialrx2
arma::mat cal_initialrx2(arma::vec indexy, arma::vec& y, arma::mat& x, int K0, double lam0);
RcppExport SEXP _Spgr_cal_initialrx2(SEXP indexySEXP, SEXP ySEXP, SEXP xSEXP, SEXP K0SEXP, SEXP lam0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type indexy(indexySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< double >::type lam0(lam0SEXP);
    rcpp_result_gen = Rcpp::wrap(cal_initialrx2(indexy, y, x, K0, lam0));
    return rcpp_result_gen;
END_RCPP
}
// getgroup
arma::uvec getgroup(const arma::mat& deltam, const int n, const double tol);
RcppExport SEXP _Spgr_getgroup(SEXP deltamSEXP, SEXP nSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type deltam(deltamSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(getgroup(deltam, n, tol));
    return rcpp_result_gen;
END_RCPP
}
// getorder
arma::uvec getorder(arma::sp_mat& Cmat);
RcppExport SEXP _Spgr_getorder(SEXP CmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat& >::type Cmat(CmatSEXP);
    rcpp_result_gen = Rcpp::wrap(getorder(Cmat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Spgr_BIC", (DL_FUNC) &_Spgr_BIC, 5},
    {"_Spgr_BICx", (DL_FUNC) &_Spgr_BICx, 4},
    {"_Spgr_BICr", (DL_FUNC) &_Spgr_BICr, 6},
    {"_Spgr_BICrx", (DL_FUNC) &_Spgr_BICrx, 5},
    {"_Spgr_BICc", (DL_FUNC) &_Spgr_BICc, 6},
    {"_Spgr_BICcx", (DL_FUNC) &_Spgr_BICcx, 5},
    {"_Spgr_BICcr", (DL_FUNC) &_Spgr_BICcr, 7},
    {"_Spgr_BICcrx", (DL_FUNC) &_Spgr_BICcrx, 6},
    {"_Spgr_BIClog", (DL_FUNC) &_Spgr_BIClog, 5},
    {"_Spgr_BIClogx", (DL_FUNC) &_Spgr_BIClogx, 4},
    {"_Spgr_BIClogr", (DL_FUNC) &_Spgr_BIClogr, 6},
    {"_Spgr_BIClogrx", (DL_FUNC) &_Spgr_BIClogrx, 5},
    {"_Spgr_Spgr", (DL_FUNC) &_Spgr_Spgr, 11},
    {"_Spgr_selectlam", (DL_FUNC) &_Spgr_selectlam, 11},
    {"_Spgr_Spgr_penalty", (DL_FUNC) &_Spgr_Spgr_penalty, 13},
    {"_Spgr_Spgrr", (DL_FUNC) &_Spgr_Spgrr, 12},
    {"_Spgr_Spgrrx", (DL_FUNC) &_Spgr_Spgrrx, 11},
    {"_Spgr_Spgrx", (DL_FUNC) &_Spgr_Spgrx, 10},
    {"_Spgr_selectlamx", (DL_FUNC) &_Spgr_selectlamx, 10},
    {"_Spgr_cal_initial", (DL_FUNC) &_Spgr_cal_initial, 4},
    {"_Spgr_cal_initialx", (DL_FUNC) &_Spgr_cal_initialx, 3},
    {"_Spgr_cal_initialr", (DL_FUNC) &_Spgr_cal_initialr, 5},
    {"_Spgr_cal_initialrx", (DL_FUNC) &_Spgr_cal_initialrx, 4},
    {"_Spgr_cal_initialr2", (DL_FUNC) &_Spgr_cal_initialr2, 6},
    {"_Spgr_cal_initialrx2", (DL_FUNC) &_Spgr_cal_initialrx2, 5},
    {"_Spgr_getgroup", (DL_FUNC) &_Spgr_getgroup, 3},
    {"_Spgr_getorder", (DL_FUNC) &_Spgr_getorder, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_Spgr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
