#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string.h>
#include <iostream>

class Animal{
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &obj);
	virtual ~Animal();
	virtual Animal& operator= (const Animal &obj);
	std::string getType() const;
	virtual void makeSound() const = 0;
protected:
	std::string type;
};


#endif