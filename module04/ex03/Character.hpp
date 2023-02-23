#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter{
public:
	Character();
	explicit Character(const std::string& name);
	explicit Character(const Character& obj);	
	~Character();
	void equip(AMateria* m);
	void unequip(int idx);
	std::string const& getName() const;
	void use(int idx, ICharacter& target);
	AMateria* getItem(int idx) const;
	Character& operator=(const Character& a);
private:
	AMateria* am[4];
	std::string name;
};

#endif