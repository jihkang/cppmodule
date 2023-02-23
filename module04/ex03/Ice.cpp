#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice"){
	std::cout << "Ice Default Constructor" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type) {
	std::cout << "Ice string Constructor" << std::endl;
}

Ice::Ice(const Ice& obj) : AMateria(obj.getType()) {
	std::cout << "Ice Copy constructor" << std::endl;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at" << target.getName() << "*" << std::endl;
}

Ice& Ice::operator=(const Ice& ice) {
	std::cout << "Ice assign call" << std::endl;
	this->type = ice.getType();
	return (*this);
}

Ice::~Ice() {
	std::cout << "ice destroy" << std::endl;
}

AMateria* Ice::clone() const {
	
	return (new Ice(this->type));
}
