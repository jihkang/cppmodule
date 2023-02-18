#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wea) : name(name), weapon(wea)
{
	std::cout << "constructor" << std::endl;
}

HumanA::~HumanA() { 
	std::cout << "destroy" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}