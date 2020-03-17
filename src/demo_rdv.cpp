#include <Rcpp.h>
#include "rdv.h"

//[[Rcpp::export]]
void demo_rdv() {
  rdv A("sur whatsappp", heure(11,23,56));
  A.print();
  
  A += heure(2,0,0);
  A.print();
}