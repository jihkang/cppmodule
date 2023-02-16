#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
	void	run();
private:
	Contact book[8];
	int	cur;
	int total;
};

#endif