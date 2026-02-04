#include <iostream>


double sum(double x, double y){
  return x + y;
};

float sum(float x, float y){
  return x - y; // error
};


int main(){
  double a_d = 2.0;
  float a_f = 2.0;

  double b_d = 3.0;
  float b_f = 3.0;

  std::cout << "sum of " << a_d << " and " << b_d << " = " << sum(a_d, b_d) << std::endl;
  std::cout << "sum of " << a_f << " and " << b_f << " = " << sum(a_f, b_f) << std::endl;

  return 0;
};
