#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat : public Animal{
public:
	WrongCat();
	WrongCat(std::string name);
	~WrongCat();
	WrongCat(const WrongCat &obj);
	WrongCat& operator= (const WrongCat &obj);
	void makeSound() const;
};

#endif