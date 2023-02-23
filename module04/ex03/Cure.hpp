#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria {
public:
	Cure();
	explicit Cure(std::string const &type);
	explicit Cure(const Cure& obj);
	~Cure();
	AMateria* clone() const;
	void use(ICharacter& target);
	Cure& operator=(const Cure& cure);
};

#endif