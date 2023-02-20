#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : protected ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& scav);
	~ScavTrap();
	void guardGate();
	void attack(const std::string& target);
	ScavTrap& operator=(const ScavTrap& obj);

};

#endif