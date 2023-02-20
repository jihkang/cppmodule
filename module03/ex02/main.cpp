#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	{
		ClapTrap clap("asdf");
		clap.attack("asdf");
	}
	{
		ScavTrap scav("test");
		scav.attack("x");
		scav.guardGate();
	}
	{
		FragTrap frag("fragship");
		frag.highFivesGuys();
	}

	return 0;
}