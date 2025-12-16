#ifndef COMPLEX_H
#define COMPLEX_H

namespace cpx {

class Complex {
private:
  // Constructor
  Complex(int real, int imag);
  
  // Display the number
  void print();

  // Getter functions
  double getReal() const;
  double getImag() const;
  double getNorm() const;

private:
  // Private attributes (per-instance)
  int real;
  int imag;
};

}

#endif // COMPLEX_H
