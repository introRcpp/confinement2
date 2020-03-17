#include <Rcpp.h>
#include "heure.h"
using namespace Rcpp;

//[[Rcpp::export]]
void demo_heure() {
  heure x(10,35,12);
  x.print();
  
  x += 50; 
  x.print();
  x += heure(1,2,4);
  x.print();

  Rcout << "\n";
  heure y;
  y.print();
  y = x + 34;
  y.print();
}

