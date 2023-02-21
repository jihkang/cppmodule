#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "Scav default constructor"<< std::endl;
	this->name = "no name";
	this->setHp(100);
	this->setEp(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "Scav is Constructor!" << std::endl;
	this->name = name;
	this->setHp(100);
	this->setEp(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& obj) {
	std::cout << "Scav copy constructor" << std::endl;
	this->name = obj.name;
	this->setHp(obj.hp);
	this->setEp(obj.ep);
	this->setAttackDamage(obj.attackDamage);	
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Scav is destroy!!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj) {
	this->name = obj.name;
	this->setHp(obj.hp);
	this->setEp(obj.ep);
	this->setAttackDamage(obj.attackDamage);
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	std::cout << "Scav power attack "<< target << std::endl;
}

void	ScavTrap::guardGate(void) {

	std::cout <<" [Scav is running] " << std::endl;
	std::cout <<" Gate keeper mode..." << std::endl;
}