#include <iostream>

class BaseParticle{
public:
  std::string name;
  double x;
  double y;
};

int main(){
  BaseParticle simpleParticle;
  simpleParticle.name = "test particle";
  simpleParticle.x = 12.0;
  simpleParticle.y = -7.0;

  std::cout << simpleParticle.name << "'s x: " << simpleParticle.x << std::endl
	    << simpleParticle.name << "'s y: " << simpleParticle.y << std::endl;


  return 0;
};
