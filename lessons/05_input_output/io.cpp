#include <iostream>
#include <cmath>

int main(){
  // get numbers from user input
  std::vector<double> numbers;

  std::cout << "Enter numbers (enter non-number to stop):" << std::endl;
  double num; // temporary storage for number

  while (std::cin >> num) {
        numbers.push_back(num);
  }

  // in case of non-number:
  std::cin.clear(); // clear error flags
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear buffer

  num = 0.123;

  for(double num : numbers){
    std::cout << "sin(" << num << ") = " << std::sin(num) << std::endl;
  }

  std::cout << num << std::endl;
  return 0;
};
