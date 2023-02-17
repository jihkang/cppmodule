#include "Zombie.hpp"
#include <iostream>

void test()
{
	std::string name;
	std::cin >> name;
	Zombie *zombies = zombieHorde(5, name);
	for (int i = 0; i < 5; ++i) {
		zombies[i].announce();
	}
	delete [] zombies;
}

int main()
{
	test();
	system("leaks zombiehorde");
	return 0;
}