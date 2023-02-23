#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria{
public:
	AMateria();
	explicit	AMateria(const std::string& type);
	explicit	AMateria(const AMateria& obj);
	virtual ~AMateria();
	std::string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	virtual AMateria& operator=(const AMateria& obj);
protected:
	std::string type;	
};

#endif