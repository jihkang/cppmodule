#include <iostream>
#include "ScavTrap.hpp"

int main()
{
	ScavTrap test2("scav");
	ClapTrap test(ScavTrap("asdf"));
	test.attack("a");
	test.takeDamage(20);
	test.beRepaired(150);
	test2.guardGate();
	return 0;
}