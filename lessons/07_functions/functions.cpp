#include <iostream>


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
  else if (x <= 2)
    return 1;

  return fibanocci(x - 2) + fibanocci(x -1);
};


int main(){
  myFunction("abc", 5);


  double a_d = 2.0;
  float a_f = 2.0;

  double b_d = 3.0;
  float b_f = 3.0;

  std::cout << "sum of " << a_d << " and " << b_d << " = " << sum(a_d, b_d) << std::endl;
  std::cout << "sum of " << a_f << " and " << b_f << " = " << sum(a_f, b_f) << std::endl;


  std::cout << "Fibanocci sequence:" << std::endl;
  for (int i = 1; i <= 10; i++)
    std::cout << i << " \t " << fibanocci(i) << std::endl;

  return 0;
};
