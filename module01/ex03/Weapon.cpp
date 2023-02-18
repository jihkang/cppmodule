#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "constructor" << std::endl;
}

Weapon::Weapon(std::string type) : type(type) {
	std::cout << "constructor" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "destroy" << std::endl;
}

const std::string& Weapon::getType() const {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}