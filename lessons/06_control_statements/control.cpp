#include <iostream>

int main(){

  for(int i = 0; i < 10; i++){
    if (i % 2 == 0)
      std::cout << i << " is even" << std::endl;
    else if (i % 3 == 0)
      std::cout << i << " is a multiple of 3 (but not even)" << std::endl;
    else
      std::cout << i << " is neither even nor divisible by three" << std::endl;
  }



  double input = 10.;
  std::cout << input << " --> ";
  double result = input > 5 ? 2.0 : 3.0;
  std::cout << result << std::endl;


  std::cout << std::endl;
  // while loops

  int i = 10;
  while( i > 0){
    std::cout << "while: "<< i-- << std::endl;
  }


  std::cout << std::endl;
  // do while loops

  i = 10;
  do{
    std::cout << "do while 1: " << i-- << std::endl;
  }
  while (i > 0);


  i = -5;
  do{
    std::cout << "do while 2: " << i-- << std::endl;
  }
  while (i > 0);


  std::cout << std::endl;
  // break and continue

  for(int i = 0; i < 10; i++){
    if (i > 5){
      break;
    }
    std::cout << "break till 5: " <<i << std::endl;
  }

  for(int i = 0; i < 10; i++){
    if (i % 2 == 1){
      continue;
    }
    std::cout << "continue if odd: " << i << std::endl;
  }


  return 0;
}
