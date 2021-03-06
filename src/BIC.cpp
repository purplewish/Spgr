#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
using namespace Rcpp;
using namespace arma; //traditional BIC


// [[Rcpp::export]]
double BIC(List &obj, arma::vec &y,  arma::mat &z,  arma::mat &x,  double tol = 1e-4 )
{
  int n = x.n_rows;
  int p = x.n_cols;
  int q = z.n_cols;
  
  
  arma::uvec group = obj("group");
  arma::mat beta = obj("beta");
  arma::vec eta = obj("eta");
  arma::vec estexp(n);
  arma::uvec indexj;
  arma::rowvec betaj(p);
  
  arma::uvec ugroup = unique(group);
  int ng = ugroup.size();
  int nj;
  
  
  for(int j = 0; j < ng; j++)
  {
    indexj = find(group == ugroup(j));
    nj = indexj.size();
    betaj = sum(beta.rows(indexj),0)/nj;
    estexp(indexj) = x.rows(indexj) * betaj.t();
  }
  
  estexp = estexp + z* eta;
  
  double bicvalue =  log(sum(square(y - estexp))/n) + log(n) *(ng * p + q)/n;
  
  return(bicvalue);
}


// [[Rcpp::export]]
double BICx(List &obj, arma::vec &y,arma::mat &x, double tol = 1e-4)
{
  int n = x.n_rows;
  int p = x.n_cols;
  
  
  arma::uvec group = obj("group");
  arma::mat beta = obj("beta");
  arma::vec estexp(n);
  arma::uvec indexj;
  arma::rowvec betaj(p);
  
  arma::uvec ugroup = unique(group);
  int ng = ugroup.size();
  int nj;
  
  for(int j = 0; j < ng; j++)
  {
    indexj = find(group == ugroup(j));
    nj = indexj.size();
    betaj = sum(beta.rows(indexj),0)/nj;
    estexp(indexj) = x.rows(indexj) * betaj.t();
  }
  

  
  double bicvalue =  log(sum(square(y - estexp))/n) + log(n) *(ng * p)/n;
  
  return(bicvalue);
}

//[[Rcpp::export]]

double BICr(List &obj, arma::vec indexy, arma::vec &y, arma::mat &z, arma::mat &x,  double tol = 1e-4)
{
  int nt = x.n_rows;
  int p = x.n_cols;
  int q = z.n_cols;
  
  
  arma::uvec group = obj("group");
  arma::mat betaest = obj("betaest");
  arma::vec eta = obj("eta");
  arma::uvec uindexy = obj("index");
  int n = uindexy.size();
  
  arma::uvec ugroup = unique(group);
  int ng = ugroup.size();
  
  arma::vec estexp(nt);
  arma::uvec groupall(nt);
  arma::vec wt(nt);
  
  arma::uvec indexj;
  arma::uvec indexi;
  int ni;
  
  for(int i=0; i < n; i++)
  {
    indexi = find(indexy == uindexy(i));
    ni = indexi.size();
    groupall(indexi) = group(i)*ones<uvec>(ni);
    wt(indexi) = ones(ni)/ni;
  }
  
  for(int j = 0; j < ng; j++)
  {
    indexj = find(groupall == ugroup(j));
    estexp(indexj) = x.rows(indexj) * trans(betaest.row(j));
  }
  
  estexp = estexp + z * eta;

  
  double bicvalue =  log(sum(square(y - estexp) % wt)/n)+ log(n) *(ng * p + q)/n;
  
  return(bicvalue);
}

//[[Rcpp::export]]
double BICrx(List &obj, arma::vec indexy, arma::vec &y, arma::mat &x,double tol = 1e-4)
{
  int nt = x.n_rows;
  int p = x.n_cols;
  
  
  arma::uvec group = obj("group");
  arma::mat betaest = obj("betaest");
  arma::uvec uindexy = obj("index");
  int n = uindexy.size();
  
  arma::uvec ugroup = unique(group);
  int ng = ugroup.size();
  
  arma::vec estexp(nt);
  arma::uvec groupall(nt);
  arma::vec wt(nt);
  
  arma::uvec indexj;
  arma::uvec indexi;
  int ni;
  
  for(int i=0; i < n; i++)
  {
    indexi = find(indexy == uindexy(i));
    ni = indexi.size();
    groupall(indexi) = group(i)*ones<uvec>(ni);
    wt(indexi) = ones(ni)/ni;
  }
  
  for(int j = 0; j < ng; j++)
  {
    indexj = find(groupall == ugroup(j));
    estexp(indexj) = x.rows(indexj) * trans(betaest.row(j));
  }
  

  
  double bicvalue =  log(sum(square(y - estexp) % wt)/n)+ log(n) *(ng * p )/n;
  
  return(bicvalue);
}