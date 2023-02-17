#include "Zombie.hpp"
#include <iostream>

void	test() {
	std::string name;
	std::cin >> name;
	randomChump(name);
}

int main()
{
	test();
	system("leaks zombie");
	return 0;
}