#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		Animal* j = new Dog();
		Animal* j2 = new Dog;
		Animal* cat = new Cat();
		Animal* cat2 = new Cat;
		std::cout <<static_cast<Dog*>(j)->getType() << " " << std::endl;
		(static_cast<Dog*>(j))->setIdeas("asasdfasdfasdfasdfsdf", 1);
		*static_cast<Dog*>(j2) = *(static_cast<Dog*>(j));
		(static_cast<Dog*>(j))->setIdeas("asasdfa22f", 1);
		(static_cast<Dog*>(j))->printIdeas();
		(static_cast<Dog*>(j2))->printIdeas();
		*(static_cast<Cat*>(cat)) = *(static_cast<Cat*>(cat2));
		j->makeSound();
		delete cat2;
		delete cat;
		delete j2;
		delete j;
	}
	// system("leaks brainanimal");
	return 0;
}