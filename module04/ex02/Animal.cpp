#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default Constructor"<< std::endl;
	this->type = "no type..";
}

Animal::Animal(std::string type) {
	std::cout << "string Constructor" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &animal) {
	std::cout << "copy Constructor" << std::endl;
	this->type = animal.type;
}

Animal::~Animal() {
	std::cout << "Destroy Constructor" << std::endl;
}

Animal& Animal::operator= (const Animal& animal) {
	std::cout << "animal assign" << std::endl;
	this->type = animal.type;
	return (*this);
}

std::string Animal::getType() const {
	return (this->type);
}