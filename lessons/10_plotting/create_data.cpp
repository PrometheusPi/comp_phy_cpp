#include <iostream>
#include <cmath>
#include <fstream>

int main()
{
  // data in std vectors
  std::vector<double> x;
  std::vector<double> y;

  // number of x values and what step size
  const int N = 1000;
  double delta_x = 0.01;

  // create data
  for(int i = 0; i<N; i++){
    x.push_back(delta_x * i);
    y.push_back(std::sin(x[i]));
  }

  
  // write text to file
  std::ofstream outFile("data.dat");
  if (!outFile) {
    // handle errors
    std::cerr << "could not write to file" << std::endl;
    return 2;
  }

  for(int i = 0; i<N; i++){
    outFile << x[i] << "\t" << y[i] << std::endl;
  }

  outFile.close();
 
  return 0;
}
