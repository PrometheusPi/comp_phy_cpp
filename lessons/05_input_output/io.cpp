#include <iostream>
#include <cmath>
#include <filesystem>
#include <fstream>

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


  // empty numbers
  numbers.clear();

  // load file
  std::string filename = "numbers.dat";
  if (!std::filesystem::exists(filename)) {
    std::cerr << "File: " << filename << " does not exist!" << std::endl;
    return 1;
  }

  std::ifstream file(filename);
  while (file >> num){ // this assumes the file has one number per line/row
    numbers.push_back(num);
  }

  int i = 1;
  for(double num: numbers){
    std::cout << i++ << ". number in file " << filename << " is: " << num << std::endl;
  }
  
  
  return 0;
};
