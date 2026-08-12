#include <iostream>
#include <cmath>
#include <iomanip>


float sum(float x, float y){
  return x + y;
}

template <typename T>
T sum2(T x, T y){
  return x + y;
}


template <typename T>
T power(T a, T b){
  std::cout << "default" << std::endl;
  return std::pow(a, b);
}

template <typename T>
T power(T a, int b){
  std::cout << "optimzed" << std::endl;
  T ret = 1;
  for (int i = 0; i< b; i++)
    ret *= a;
  return ret;
}


int main(){
  double a = 1.00000000001;
  double b = 1.00000000000;
  std::cout << std::setprecision(15);
  std::cout << "no template:" << std::endl;
  std::cout << a << " + " << b << " = " << a + b
	    << " and sum() = " << sum(a,b) << std::endl;
  std::cout << "with template:" << std::endl;
  std::cout << a << " + " << b << " = " << a + b
	    << " and sum2() = " << sum2(a,b) << std::endl;
 
  
  double x = power(5.0, 2.0);
  std::cout << x << std::endl;

  float y = power(5.0f, 2.0f);
  std::cout << y << std::endl;

  double z = power(5.0, 2);
  std::cout << z << std::endl;

  //  will be ambiguous:
  //  int u = power(5, 2);
  //  std::cout << u << std::endl;

  return 0;
};
