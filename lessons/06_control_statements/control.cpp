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

  return 0;
}
