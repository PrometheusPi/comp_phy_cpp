#include <iostream>
#include <cmath>
// requires C++20
#include <numbers>


double my_function(double a){
  return a * a * a;
};


void myFunction(std::string word, uint times){
  for(uint i=0; i< times; i++){
    std::cout << word << " ";
  }
  std::cout << std::endl;
};


double sum(double x, double y){
  return x + y;
};

float sum(float x, float y){
  return x - y; // error
};


int fibanocci(int x){
  if (x <= 0)
    return 0;
  else if (x < 2)
    return 1;

  return fibanocci(x - 2) + fibanocci(x - 1);
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
  // simple own math function
  std::cout << x << "^3 = " << my_function(x) << " = " << std::pow(x, 3) << std::endl;

  // simple void function
  myFunction("abc", 5);


  // function overloading
  double a_d = 2.0;
  float a_f = 2.0;

  double b_d = 3.0;
  float b_f = 3.0;

  std::cout << "sum of " << a_d << " and " << b_d << " = " << sum(a_d, b_d) << std::endl;
  std::cout << "sum of " << a_f << " and " << b_f << " = " << sum(a_f, b_f) << std::endl;


  // recursive function calls
  std::cout << "Fibanocci sequence:" << std::endl;
  for (int i = 1; i <= 10; i++)
    std::cout << i << " \t " << fibanocci(i) << std::endl;


  // lambda function
  auto print_lambda = [](){
    std::cout << "print from lambda function" << std::endl;
  };
  print_lambda();

  auto sum_lambda = [](double a, double b){
    return a + b;
  };
  std::cout << sum_lambda(12, 8) << std::endl;

  int global_counter = 12;
  auto capture_lambda = [global_counter](int x){
    return global_counter + x;
  };
  int res = capture_lambda(8);
  std::cout << global_counter << " -- " << res << std::endl;
  
  return 0;
};
