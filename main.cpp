#include "Complex.h"
#include <iostream>

int main() {
  Complex x(3, 4);
  x.print();
  std::cout << "La norme est: " << x.getNorm() << std::endl;
  Complex x_bar = x.conjugate();
  x_bar.print();
  return 0;
}
