#include <Rcpp.h>
using namespace Rcpp;

class lapin {
private:
  int omega;
public:
  int a;
  int b;
  
  // définir un constructeur
  lapin() : omega(3), a(1), b(2) {
    Rcout << "coucou\n";
  }
  lapin(int x, int y) : omega(x+y), a(x), b(y) {}
  
  // obtient omega
  int get_omega() {
    return omega;
  }
};
