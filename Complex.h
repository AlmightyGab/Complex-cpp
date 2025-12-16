#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
  // Constructor
  Complex(double real_value, double imag_value);
  
  // Display the number
  void print() const;

  // Getter functions
  double getReal() const;
  double getImag() const;
  double getNorm() const;
  
  // conjugate function
  Complex conjugate() const;

  // Public static member
  static int getInstanceCount();

private:
  // Private attributes (per-instance)
  int real;
  int imag;

  // Private static data member
  static int s_count;
};

#endif
