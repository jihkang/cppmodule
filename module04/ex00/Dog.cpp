#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog Destroy" << std::endl;
}

Dog::Dog(const Dog &dog) {
	std::cout << "Dog copy constructor" << std::endl;
	*this = dog;
}

Dog& Dog::operator= (const Dog& dog) {
	std::cout << "Dog assign" << std::endl;
	this->type = dog.type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "bark bark" << std::endl;
}