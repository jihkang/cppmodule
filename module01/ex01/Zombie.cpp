
#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "initalize" << std::endl;
}

Zombie::Zombie(std::string _name) :name(_name) {
	std::cout << "initalize"<< std::endl;
}

Zombie::~Zombie() {
	std::cout << "Destroy" << std::endl;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
