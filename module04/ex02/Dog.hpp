#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(std::string name);
	Dog(const Dog& dog);
	~Dog();
	Dog& operator= (const Dog& dog) ;
	void setIdeas(std::string idea, int idx) const;
	void printIdeas() const;
	Brain& getBrain() const;
	void makeSound() const;
private:
	Brain *brain;
};

#endif