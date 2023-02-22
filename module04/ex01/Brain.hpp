#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string.h>

class Brain{
public:
	Brain();
	~Brain();
	Brain(const Brain& obj);
	Brain& operator=(const Brain& obj);
	void setIdeas(std::string idea, int i);
	std::string getIdea(int i) const;
	void printIdeas();
private:
	std::string ideas[100];
};

#endif