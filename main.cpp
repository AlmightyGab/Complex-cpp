#include <assert.h>

#include <iostream>

#include "Complex.h"

void testReference()
{
  Complex fubar(42, 69);
  Complex& ref = fubar;
  Complex* ptr = &fubar;

  assert(fubar.imag() == ref.imag());
  assert(fubar.imag() == ptr->imag());

  fubar.imag() = 666;
}



int main() {
  Complex x(3, 4);
  std::cout << static_cast<std::string>(x) << std::endl;
  std::cout << "La norme est: " << x.norm() << std::endl;
  Complex x_bar = x.conjugate();
  std::cout << static_cast<std::string>(x_bar) << std::endl;
  return 0;
}
