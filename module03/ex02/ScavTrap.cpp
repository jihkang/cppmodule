#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "Scav default constructor"<< std::endl;
	this->setHp(100);
	this->setEp(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Scav is Constructor!" << std::endl;
	this->setHp(100);
	this->setEp(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& obj) {
	std::cout << "Scav copy constructor" << std::endl;
	this->setHp(obj.hp);
	this->setEp(obj.ep);
	this->setAttackDamage(obj.attackDamage);	
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Scav is destroy!!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj) {
	this->setHp(obj.hp);
	this->setEp(obj.ep);
	this->setAttackDamage(obj.attackDamage);
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	std::cout << "Scav power attack " << target << std::endl;
	if (this->getEp() > 0)
		this->setEp(this->getEp() - 1);
}

void	ScavTrap::guardGate(void) {

	std::cout <<" [Scav is running] " << std::endl;
	std::cout <<" Gate keeper mode..." << std::endl;
}