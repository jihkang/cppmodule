#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure"){
	std::cout << "Cure Default Constructor" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type) {
	std::cout << "Cure string Constructor" << std::endl;
}

void Cure::use(ICharacter& target) {
	std::cout << "* shoots an Cure bolt at" << target.getName() << "*" << std::endl;
}

Cure& Cure::operator=(const Cure& cure){
	std::cout << "Cure assign call" << std::endl;
	this->type = cure.getType();
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure destroy" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(this->type));
}
