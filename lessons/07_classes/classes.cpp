#include <iostream>

class BaseParticle{

public:
  double x;
  double y;
  double radius;

  BaseParticle(std::string priv_name)
  {
    this->name = priv_name;
  }

  std::string getName()
  {
    return this->name;
  }

  void set_radius(double r)
  {
    this->radius = r;
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

  simpleParticle.set_radius(12.5);
  std::cout << "radius = " << simpleParticle.radius << std::endl;
  
  return 0;
};
