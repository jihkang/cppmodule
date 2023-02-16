#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>

class Contact {
public:
	Contact();
	~Contact();
	void add();
	void set(std::string &target, std::string value);
	std::string get(std::string str);
	void print();
private:
	std::string data[5];
};
#endif