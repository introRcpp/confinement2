
class heure {
private:  
  unsigned int t;
  std::tuple<int, int, int> hms();
  
public:
  heure();
  heure(int h, int m, int s);
  void print();
  
  // operateur +=
  heure & operator+=(const int & sec);
  heure & operator+=(const heure & A);
  
};

// operator +
heure operator+(heure a, const int & sec);
heure operator+(heure a, const heure & b);