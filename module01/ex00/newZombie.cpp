#include "Zombie.hpp"

Zombie *newZombie(std::string str) {
	Zombie *zombie = new Zombie(str);
	return (zombie);
}