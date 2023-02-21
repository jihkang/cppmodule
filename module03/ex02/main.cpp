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
		ClapTrap clap(FragTrap("legend"));
		frag.highFivesGuys();
		clap.attack("test");
	}

	return 0;
}