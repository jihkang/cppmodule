#include "WrongDog.hpp"

WrongDog::WrongDog() {
	std::cout << "WrongDog constructor" << std::endl;
	this->type = "WrongDog";
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog Destroy" << std::endl;
}

WrongDog::WrongDog(const WrongDog &dog) {
	std::cout << "WrongDog copy constructor" << std::endl;
	*this = dog;	
}

WrongDog& WrongDog::operator= (const WrongDog& dog) {
	std::cout << "WrongDog assign" << std::endl;
	this->type = dog.type;
	return (*this);
}

void WrongDog::makeSound() const {
	std::cout << "bark bark" << std::endl;
}