#include "Complex.h"
#include <iostream>
#include <cmath>

Complex::Complex(double r, double i) 
  : real(r), imag(i)
{
  ++s_count;
};

int Complex::s_count = 0;

void Complex::print() const {
  std::cout << real << " + " << imag << "i" << std::endl;
};

double Complex::getReal() const {
  return real;
};

double Complex::getImag() const {
  return imag;
};

double Complex::getNorm() const {
  return std::sqrt(std::pow(real, 2) + std::pow(imag, 2));
};

Complex Complex::conjugate() const {
  return Complex(real, -imag);
};

int Complex::getInstanceCount() {
  return s_count;
}
