
#include "Zombie.hpp"

Zombie::Zombie(std::string _name) :name(_name) {}

Zombie::~Zombie() {}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
