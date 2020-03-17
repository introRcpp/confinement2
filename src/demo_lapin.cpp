#include <Rcpp.h>
#include "lapin.h"
using namespace Rcpp;

//[[Rcpp::export]]
void demo_lapin_1() {
  lapin bugs;
  Rcout << "bugs.a = " << bugs.a << "\n";
  Rcout << "bugs.b = " << bugs.b << "\n";
}

//[[Rcpp::export]]
void demo_lapin_2() {
  lapin bugs(17,45);
  Rcout << "bugs.a = " << bugs.a << "\n";
  Rcout << "bugs.b = " << bugs.b << "\n";
  Rcout << "bugs.get_omega() = " << bugs.get_omega() << "\n";
}
