#include <cmath>
#include <sstream>

#include "Complex.h"

int Complex::s_count = 0;

Complex::Complex(double r, double i) 
  : _real(r), _imag(i)
{
  ++s_count;
}

Complex::~Complex()
{
  --s_count;
}

Complex::operator std::string() const {
  //auto output = static_cast<std::string>(_real )<< " + " << static_cast<std::string>(_imag) << "i";
  std::stringstream output;
  output << _real << " + " << _imag << "i";
  return output.str();
}

double Complex::norm() const {
  return std::sqrt(std::pow(_real, 2) + std::pow(_imag, 2));
}

Complex Complex::conjugate() const {
  return Complex(_real, -_imag);
}

int Complex::getInstanceCount() {
  return s_count;
}
