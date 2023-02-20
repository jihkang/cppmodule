#include <iostream>
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("asdf");
	clap.attack("asdf");
	ScavTrap scav("test");
	scav.attack("asdf");
	scav.guardGate();

	return 0;
}