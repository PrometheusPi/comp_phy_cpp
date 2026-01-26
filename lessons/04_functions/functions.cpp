#include <iostream>
#include <cmath>
// requires C++20
#include <numbers>


double my_function(double a){
  return a * a * a;
};


int main(){
  double x, y;

  x = 1.5 * std::numbers::pi;
  y = std::sin(x);

  std::cout << "sin(" << x << ") = " << y << std::endl;

  // pre C++20 usage:
  x = 0.5 * M_PI;
  y = std::cos(x);
  std::cout << "cos(" << x << ") = " << y << std::endl;

  y = std::sqrt(std::numbers::e);
  std::cout << "sqrt(e) = " << y << std::endl;

  x = 12.0;
  std::cout << x << "^3 = " << my_function(x) << " = " << std::pow(x, 3) << std::endl;

  return 0;
};
