#include <iostream>
#include <cmath>
#include <filesystem>
#include <fstream>
#include <format> // requires c++20

int main(){
  // get numbers from user input
  std::vector<double> numbers;

  std::cout << "Enter numbers (enter non-number, but not only return, to stop):" << std::endl;
  double num; // temporary storage for number

  while (std::cin >> num) {
        numbers.push_back(num);
  }

  // in case of non-number:
  std::cin.clear(); // clear error flags
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear buffer

  std::cout << "finished reading input" << std::endl;
  
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


  // write text to file
  std::ofstream outFile("results.dat");
  if (!outFile) {
    // handle errors
    std::cerr << "could not write to file" << std::endl;
    return 2;
  }

  for(double num : numbers){
    outFile << num << "\t" << std::sin(num) << std::endl;
  }

  outFile.close();


  // string formating
  num = 1234.56789;
  /* Does not work on my machine (yet) TODO
  // {...} replace with argument
  // :.2f = (:)input (f)loat with any leading values before the comma and 2 after
  std::string s = std::format("{:.2f}", num); // "1234.57"
  */
  std::cout << num << " --> ";
  std::cout << std::fixed << std::setprecision(2) << num << " --> ";
  std::cout << std::scientific << std::setprecision(2) << num << std::endl;

  return 0;
};
