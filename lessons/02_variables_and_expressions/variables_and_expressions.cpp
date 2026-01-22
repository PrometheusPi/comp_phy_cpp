#include <iostream>
#include <string>
#include <vector>
#include <array>

int main(){
  // this is a comment

  // datatype: integer
  int a = 42;
  int b;
  b = -5;
  int c = a + b;
  std::cout << "a + b = c" << std::endl;
  std::cout << a << " + " << b << " = " << c << std::endl;

  std::cout << std::endl;

  // datatype: float / double
  float x = 3.1415;
  double y;
  y = 1.23e4;
  double z = x * y;
  std::cout << "x * y = z" << std::endl;
  std::cout << x << " * " << y << " = " << z << std::endl;

  std::cout << std::endl;

  // datatype: char / string
  char letter = 'q';
  std::string text = "uestion";
  std::cout << letter << text << std::endl;

  std::cout << std::endl;

  // datatype: vector / array
  std::vector<double> list1 = {1.2, 3.4, 5.6};
  std::array<double, 3> list2 = {1.2, 3.4, 5.6};
  double list3[3] = {1.2, 3.4, 5.6};
  std::cout << list1[0] << "\t" << list2[2] << "\t" << list3 << std::endl;
  list1[1] = 4.2;
  std::cout << list1[0] << "\t" << list1[1] << "\t" << list1[2] << std::endl;
  
  return 0;
};
