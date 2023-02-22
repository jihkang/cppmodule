#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(std::string name) {
	std::cout << "WrongCat string Constructor" << std::endl;
	this->type = name;
}

WrongCat::WrongCat(const WrongCat &cat) {
	std::cout << "WrongCat copy Constructor" << std::endl;
	*this = cat;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destroy" << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& cat) {
	std::cout << "WrongCat assign" << std::endl;
	this->type = cat.type;
	return (*this);
}


void WrongCat::makeSound() const {
	std::cout << "WrongCat meow meow" << std::endl;
}