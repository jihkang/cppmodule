#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string.h>
#include <iostream>

class Animal{
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &obj);
	std::string getType() const;
	virtual ~Animal();
	virtual void makeSound() const;
	virtual Animal& operator= (const Animal &obj);

protected:
	std::string type;
};


#endif