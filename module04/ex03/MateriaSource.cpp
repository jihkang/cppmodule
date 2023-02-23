#include "MateriaSource.hpp"


int	MateriaSource::getCount() const {
	return (this->count);
}

AMateria* MateriaSource::getMateria(int idx) const {
	return (this->am[idx]);
}

MateriaSource::MateriaSource() : count(0){
	std::cout << "Default constructor MateriaSource" << std::endl;
	for (int i = 0; i < 4; ++i) {
		this->am[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& obj) {
	std::cout << "copy constructor MateriaSource" << std::endl;
	for (int i = 0; i < this->count; ++i) {
		if (this->am[i])
		{
			delete this->am[i];	
			this->am[i] = NULL;
		}
	}
	this->count = obj.getCount();
	for (int i = 0; i < this->count; ++i) {
		this->am[i] = obj.getMateria(i)->clone();
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < this->count; ++i) {
		delete this->am[i];
		this->am[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &obj) {
	std::cout << "Materia assign call" << std::endl;
	for (int i = 0; i < this->count; ++i) {
		if (!this->am[i])
			continue ;
		delete this->am[i];	
		this->am[i] = NULL;
	}
	this->count = obj.getCount();
	for (int i = 0; i < this->count; ++i) {
		this->am[i] = obj.getMateria(i)->clone();
	}
	return (*this);
}


void MateriaSource::learnMateria(AMateria* am) {
	if (am == NULL)
		return;
	for (int i = this->count; i < 4; ++i) {
		if (this->am[i] == NULL) {
			std::cout << "learn Materia" << am->getType() << std::endl;
			this->am[i] = am;
			this->count++;
			return ;
		}
	}	
	std::cout << "Inventory Full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < this->count; ++i) {
		if (this->am[i]) {
			if (this->am[i]->getType() == type) {
				std::cout << "cloning...." << std::endl;
				return (this->am[i]->clone());
			}
		}
	}
	std::cout << "cannot found " << std::endl;
	return (NULL);
}