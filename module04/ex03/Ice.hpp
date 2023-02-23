#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria {
public:
	Ice();
	explicit Ice(std::string const &type);
	explicit Ice(const Ice& obj);
	~Ice();
	Ice& operator= (const Ice& obj);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif