#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wea) : name(name), weapon(wea)
{
}

HumanA::~HumanA() { }

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}