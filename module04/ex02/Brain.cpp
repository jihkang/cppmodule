#include "Brain.hpp"
#include <string.h>

Brain::Brain() {
	std::cout << "brain constructor" << std::endl;
	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = "";
	}
}

Brain::~Brain() {
	std::cout << "brain is dead" << std::endl;
}

Brain::Brain(const Brain& obj) {
	std::cout <<"Brain copy constructor" << std::endl;
	*this = obj;
}

Brain& Brain::operator= (const Brain& obj) {
	std::cout <<"Brain assign" << std::endl;
	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = obj.getIdea(i);
	}
	return (*this);
}

void Brain::setIdeas(std::string idea, int i) {
	this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) const {
	return (this->ideas[i]);
}

void Brain::printIdeas() {
	for (int i = 0; i < 100; ++i) {
		if (this->ideas[i] != "") {
			std::cout << this->ideas[i] << std::endl;
		}
	}
}