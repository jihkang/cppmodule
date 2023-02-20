#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Default Clap constructor" << std::endl;
	this->name = "no name";
	this->hp = 10;
	this->ep = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << this->name << "Clap is construct" << std::endl;
	this->name = name;
	this->hp = 10;
	this->ep = 10;	
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
	std::cout << "Clap Copy Constructor " << std::endl;
	this->name = obj.name;
	this->hp = obj.hp;
	this->ep = obj.ep;
	this->attackDamage = obj.attackDamage;
}

ClapTrap::~ClapTrap(void) {
	std::cout << this->name << "clap is destroy" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap & clap)  {
	std::cout << "Clap Copy" << std::endl;
	this->name = clap.name;
	this->hp = clap.hp;
	this->ep = clap.ep;
	this->attackDamage = clap.attackDamage;;
	return (*this);
}

void ClapTrap::setHp(unsigned int amount) {
	this->hp = amount; 
}

unsigned int ClapTrap::getHp(void) {
	return (this->hp);
}

void ClapTrap::setEp(unsigned int amount) {
	this->ep = amount; 
}

unsigned int ClapTrap::getEp(void) {
	return (this->ep);
}

void ClapTrap::setAttackDamage(unsigned int amount) {
	this->attackDamage = amount;
}

unsigned int ClapTrap::getAttackDamage(void) {
	return (this->attackDamage);
}

void ClapTrap::attack(const std::string& target) {
	if (this->ep > 0) {
		std::cout << this->name << "attacks " << target << "causing " << this->attackDamage << "points of damage" << std::endl; 
		this->ep--;
		return ;
	}
	std::cout << "you cannot attacked" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->name << "has been damaged must to repair..." << std::endl;
	this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->ep > 0) {
		std::cout << this->name << "repairing..." << std::endl;
		this->hp += amount;
		this->ep--;
		return ;
	}
	std::cout << "you cannot repair..." << std::endl;
}
