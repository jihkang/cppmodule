#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string name) {
	std::cout << "Cat string Constructor" << std::endl;
	this->type = name;
}

Cat::Cat(const Cat &cat) {
	std::cout << "Cat copy Constructor" << std::endl;
	*this = cat;
}

Cat::~Cat() {
	std::cout << "Cat destroy" << std::endl;
}

Cat& Cat::operator= (const Cat& cat) {
	std::cout << "Cat assign" << std::endl;
	this->type = cat.type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meow meow" << std::endl;
}