#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#define interface class

#include <iostream>
#include <string>

class AMateria;

interface ICharacter{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif