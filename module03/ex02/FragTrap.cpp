#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "no name";
	this->setHp(100);
	this->setEp(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->setHp(100);
	this->setEp(100);
	this->setAttackDamage(30);
	std::cout << "Frag trap name constructor created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) {
	std::cout << "Frag Trap copy kkkkk!" << std::endl;
	this->name = obj.name;
	this->setHp(obj.hp);
	this->setEp(obj.ep);
	this->setAttackDamage(obj.attackDamage);
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "Copy Frag data..." << std::endl;
	this->name = obj.name;
	this->setHp(obj.hp);
	this->setEp(obj.ep);
	this->setAttackDamage(obj.attackDamage);
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "exit program.... destroy data" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "Hi Five!!" << std::endl;
}