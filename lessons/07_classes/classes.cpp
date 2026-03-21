#include <iostream>

class BaseParticle{

public:
  double x;
  double y;

  BaseParticle(std::string priv_name)
  {
    this->name = priv_name;
  }

  std::string getName()
  {
    return this->name;
  }

private:
    std::string name;
};

int main(){
  BaseParticle simpleParticle("Peter");
  simpleParticle.x = 12.0;
  simpleParticle.y = -7.0;

  std::cout << simpleParticle.getName() << "'s x: " << simpleParticle.x << std::endl
	    << simpleParticle.getName() << "'s y: " << simpleParticle.y << std::endl;

  return 0;
};
