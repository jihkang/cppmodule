#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
	std::cout << "constructor" << std::endl;
}
HumanB::~HumanB() {
	std::cout << "destroy" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}