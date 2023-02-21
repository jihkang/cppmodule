#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal{
public:
	Animal();
	~Animal();
	Animal(Animal &obj);
	Aniaml& operator= (Animal &obj);

protected:
	std::string type;

};


#endif