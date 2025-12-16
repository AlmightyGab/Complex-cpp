#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>

class Complex {
public:
  // Constructor
  Complex(double real_value, double imag_value);
  virtual ~Complex();
  
  // Display the number
  operator std::string() const;

  // Getter functions
  inline double real() const { return _real; }
  inline double& real() { return _real; }
  inline double imag() const { return _imag; }
  inline double& imag() { return _imag; };

  double norm() const;

  // conjugate function
  Complex conjugate() const;

  // Public static member
  static int getInstanceCount();

private:
  // Private attributes (per-instance)
  double _real;
  double _imag;

  // Private static data member
  static int s_count;
};

#endif
