#include <iostream>

int main(){

  // doc start: float
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
  // doc end: float

  // doc start: int
  std::cout << std::endl << "integer operations:" << std::endl;
  int x, y, z;
  x = 12;
  y = -5;

  // division
  z = x / y;
  std::cout << x << " / " << y << " = " << z << std::endl;

  // modulo
  z = x % y;
  std::cout << x << " % " << y << " = " << z << std::endl;
  // doc end: int

  // doc start: bool
  std::cout << std::endl << "boolan operations:" << std::endl;
  std::cout << std::boolalpha;
  bool h, i, j;

  h = true;
  i = a < b;

  j = h && i;
  std::cout << h << " and " << i << " = " << j << std::endl;

  j = h || i;
  std::cout << h << " or " << i << " = " << j << std::endl;
  // doc end: bool

  // doc start: unary
  std::cout << std::endl << "further operations" << std::endl;

  std::cout << "a = " << a << std::endl;
  a++;
  std::cout << "after a++: a = " << a << std::endl;

  std::cout << "b = "<< b << std::endl;
  b = ++a;
  std::cout << "after ++a: a = " << a << " b = " << b << std::endl;
  b = a++;
  std::cout << "after a++: a = " << a << " b = " << b << std::endl;

  a += 10;
  std::cout << "after a += 10: a = " << a << std::endl;

  a -= 10;
  std::cout << "after a -= 5: a = " << a << std::endl;

  a *= 4;
  std::cout << "after a *= 4: a = " << a << std::endl;

  a /= 2;
  std::cout << "after a /= 2: a = " << a << std::endl;
  // doc end: unary

  // doc start: conditional
  std::cout << std::endl << "conditional operator:" << std::endl;

  c = (a >= 30) ? -2 : +4;
  std::cout << "c = (a >= b) ? -2 : +4" << std::endl;
  std::cout << "a = " << a << " b = " << b << std::endl;
  std::cout << "(a >= b) = " << (a >= b) << std::endl;
  std::cout << "c = " << c << std::endl;
  // doc end: conditional

  return 0;
};
