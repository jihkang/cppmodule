#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string.h>

class WrongAnimal{
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &obj);
	std::string getType() const;
	~WrongAnimal();
	void makeSound() const;
	WrongAnimal& operator= (const WrongAnimal &obj);
protected:
	std::string type;
};

#endif