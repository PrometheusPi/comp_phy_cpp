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

protected:
    std::string name;
};

class ChargedParticle : public BaseParticle{
public:

  ChargedParticle(std::string name, double charge)
    : BaseParticle(name), charge(charge)
  {
    std::cout << "created a particle " << this->name
	      << " with charge: " << this->charge << std::endl;
  }

  double getCharge(){
    return this->charge;
  }

private:
  double charge;
};

int main(){
  BaseParticle simpleParticle("Peter");
  simpleParticle.x = 12.0;
  simpleParticle.y = -7.0;

  std::cout << simpleParticle.getName() << "'s x: " << simpleParticle.x << std::endl
	    << simpleParticle.getName() << "'s y: " << simpleParticle.y << std::endl;

  simpleParticle.set_radius(12.5);
  std::cout << "radius = " << simpleParticle.radius << std::endl;

  ChargedParticle electron("e", -1.0);
  std::cout << electron.getCharge() << std::endl;

  return 0;
};
