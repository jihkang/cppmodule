#include "AMateria.hpp"

AMateria::AMateria(void)
  : type("") {
  std::cout<< "Default Constructor on AMatreria" << std::endl;
}

AMateria::AMateria(const std::string& type)
  : type(type) {
  std::cout<< "string constructor" << std::endl;
}

AMateria::AMateria(const AMateria& obj)
  : type(obj.getType()) {
  std::cout<< "Copy Constructor AMatreria" << std::endl;
}

AMateria::~AMateria(void) {
  std::cout << "Destructor on AMatreria"<< std::endl;
}

std::string const& AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "Use Item >> " << target.getName() << std::endl;
}

AMateria& AMateria::operator=(const AMateria& obj){
	std::cout << "Assign Call AMateria"<<std::endl;
	if (this->type != obj.getType()) {
		this->type = obj.getType();
	}
	return (*this);
}

