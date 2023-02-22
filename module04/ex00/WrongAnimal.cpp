#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Default Constructor"<< std::endl;
	this->type = "no type..";
}

WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "WrongAnimal string Constructor" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal) {
	std::cout << "wrong copy Constructor" << std::endl;
	this->type = animal.type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destroy Constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& animal) {
	std::cout << "WrongAnimal assign" << std::endl;
	this->type = animal.type;
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (this->type);
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal will be noise" << std::endl;
}