#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(std::string name) {
	std::cout << "Cat string Constructor" << std::endl;
	this->type = name;
}

Cat::Cat(const Cat &cat) {
	std::cout << "Cat copy Constructor" << std::endl;
	this->brain = new Brain;
	*this = cat;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destroy" << std::endl;
}

Cat& Cat::operator= (const Cat& cat) {
	std::cout << "Cat assign" << std::endl;
	this->type = cat.type;
	*(this->brain) = cat.getBrain();
	return (*this);
}

Brain& Cat::getBrain() const {
	return *(this->brain);
}

void Cat::makeSound() const {
	std::cout << "meow meow" << std::endl;
}

void Cat::setIdeas(std::string idea, int idx) const {
	this->brain->setIdeas(idea, idx);
}

void Cat::printIdeas() const {
	this->brain->printIdeas();
}