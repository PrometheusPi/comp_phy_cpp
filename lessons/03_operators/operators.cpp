#include <iostream>

int main(){

  std::cout << "floating point operations:" << std::endl;
  double a, b, c;
  a = 12.0;
  b = -5.0;

  // addition
  c = a + b;
  std::cout << a << " + " << b << " = " << c << std::endl;

  // subtraction
  c = a - b;
  std::cout << a << " - " << b << " = " << c << std::endl;

  // multiplication
  c = a * b;
  std::cout << a << " * " << b << " = " << c << std::endl;

  // devision
  c = a / b;
  std::cout << a << " / " << b << " = " << c << std::endl;

  std::cout << "integer operations:" << std::endl;
  int x, y, z;
  x = 12;
  y = -5;

  // devision
  z = x / y;
  std::cout << x << " / " << y << " = " << z << std::endl;

  // modulo
  z = x % y;
  std::cout << x << " % " << y << " = " << z << std::endl;

  std::cout << "boolan operations:" << std::endl;
  bool h, i, j;

  h = true;
  i = a < b;

  j = h && i;
  std::cout << h << " and " << i << " = " << j << std::endl;

  j = h || i;
  std::cout << h << " or " << i << " = " << j << std::endl;


  return 0;
};
