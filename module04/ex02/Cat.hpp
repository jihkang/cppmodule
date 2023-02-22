#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
public:
	Cat();
	Cat(std::string name);
	Cat(const Cat &obj);
	~Cat();
	Cat& operator= (const Cat &obj);
	void makeSound() const;
	Brain& getBrain() const;
	void setIdeas(std::string idea, int idx) const;
	void printIdeas() const;
private:
	Brain *brain;
};

#endif