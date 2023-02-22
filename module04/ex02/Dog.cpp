#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor" << std::endl;
	this->brain = new Brain;
	this->type = "Dog";
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog Destroy" << std::endl;
}

Dog::Dog(const Dog &dog) {
	std::cout << "Dog copy constructor" << std::endl;
	this->brain = new Brain;
	*this = dog;
}

Dog& Dog::operator= (const Dog& dog) {
	std::cout << "Dog assign" << std::endl;
	this->type = dog.type;
	*(this->brain) = dog.getBrain();
	return (*this);
}

Brain& Dog::getBrain() const {
	return *(this->brain);
}

void Dog::makeSound() const {
	std::cout << "bark bark" << std::endl;
}

void Dog::setIdeas(std::string idea, int idx) const {
	this->brain->setIdeas(idea, idx);
}

void Dog::printIdeas() const {
	std::cout << this->brain << std::endl;
	this->brain->printIdeas();
}