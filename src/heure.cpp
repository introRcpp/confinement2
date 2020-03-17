#include <Rcpp.h>
#include "heure.h"

heure::heure() : t(0) {}
heure::heure(int h, int m, int s) : t( s + 60*(m + 60*h)) {}

std::tuple<int, int, int> heure::hms() {
  int h = t/3600;
  int m = (t - 3600*h)/60;
  int s = t - 60*m - 3600*h;
  return std::make_tuple(h,m,s);
}

void heure::print() {
  auto x = hms();
  Rcpp::Rcout << std::get<0>(x) << ":" << std::get<1>(x) << ":" << std::get<2>(x) << "\n";
}

heure & heure::operator+=(const int & sec)  {
  t += sec;
  // se renvoyer soi-même
  return *this;
}

heure & heure::operator+=(const heure & A) {
  t += A.t;
  return *this;
}

heure operator+(heure a, const int & sec) {
  a += sec;
  return a;
}

heure operator+(heure a, const heure & b) {
  a += b;
  return a;
}

