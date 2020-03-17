#include <Rcpp.h>
#include "heure.h"

class rdv : public heure {
private:
  std::string lieu;
public:
  rdv(std::string li, heure h) : heure(h), lieu(li) {} 
  
  std::string get_lieu() {
    return lieu;
  }
  void print() {
    Rcpp::Rcout << "rdv " << lieu << " à ";
    // ((heure) (*this)).print();  

    // ((heure *) this)->print();
    heure h = (heure) *this;
    h.print();

    // SURTOUT NE PAS ESSAYER CE QUI SUIT
    // this->print();
  }
};
