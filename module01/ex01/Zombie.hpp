#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce();
private:
	std::string name;
};

Zombie *zombieHorde(int n, std::string name);

#endif