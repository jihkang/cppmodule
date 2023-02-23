#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include <iostream>
#include <string>

interface IMateriaSource{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* obj) = 0;
	virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif