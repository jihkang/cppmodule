#ifndef WRONGDOG_HPP 
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
public:
	WrongDog();
	WrongDog(std::string name);
	WrongDog(const WrongDog& dog);
	~WrongDog();
	WrongDog& operator= (const WrongDog& dog);
	void makeSound() const;
};

#endif