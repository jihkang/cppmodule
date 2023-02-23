#include "Character.hpp"
#include "AMateria.hpp"


AMateria* Character::getItem(int idx) const{
	return (this->am[idx]);
}

Character::Character() : name("") {
	std::cout << "Character Constructor" << std::endl;
	for (int i = 0; i < 4; ++i) {
		this->am[i] = NULL;
	}
}

Character::Character(const std::string& name) : name(name) {
	for (int i = 0; i < 4; ++i) {
		this->am[i] = NULL;
	}
	std::cout << "Character string Constructor" << std::endl;
}

Character::Character(const Character& obj) : name(obj.getName())
{
	std::cout << "Character copy constructor" << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (this->am[i])
		{
			delete this->am[i];
			this->am[i] = NULL;
		}
		if (obj.getItem(i))
			this->am[i] = obj.getItem(i)->clone();
	}
}

Character::~Character() {
	std::cout << "Character deleted" << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (this->am[i] != NULL) {
			delete this->am[i];
			this->am[i] = NULL;
		}
	}
}

Character& Character::operator= (const Character& obj) {
	if (this == &obj)
		return (*this);
	std::cout << "Character assign" << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (!this->am[i])
		{
			delete this->am[i];
			this->am[i] = NULL;
		}
		this->am[i] = obj.getItem(i)->clone();
	}
	return (*this);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4;++i) {
		if (this->am[i] == NULL) {
			this->am[i] = m;
			std::cout << "Equip " << i << " " << this->name << std::endl;
			return ;
		}
	}
	std::cout << "Cannot Equip nn " << std::endl;
}

void Character::unequip(int i) {
	if (i > 3 || i < 0)
	{
		std::cout << "Wrong unequip." << std::endl;
		return ;
	}
	if (this->am[i]) {
		this->am[i] = NULL;
		std::cout << this->am[i] << "unequip" << this->name << std::endl;
	}	
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || !this->am[idx]) {
		std::cout << "Failed use"<< std::endl;
		return ;
	}
	this->am[idx]->use(target);
}

std::string const& Character::getName() const {
	return (this->name);
}
