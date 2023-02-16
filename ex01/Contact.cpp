#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::add() {
	std::string str;
	for (int i = 0; i < 5; ++i) {
		std::getline(std::cin, str);
		set(this->data[i], str);
	}
}

void Contact::set(std::string& target, std::string value) {
	for(int i = 0; i < value.size(); ++i) {
		target += value[i];
	}
}

std::string Contact::get(std::string str)
{
	if (str == "first") {
		return (this->data[0]);
	} else if (str == "last") {
		return (this->data[1]);
	} else if (str == "nick") {
		return (this->data[2]);
	} else if (str == "phone") {
		return (this->data[3]);
	} else if (str == "secret") {
		return (this->data[4]);
	}
	return ("ERROR");
}

void Contact::print() {
	for (int i = 0; i < 5; ++i) {
		std::cout << data[i] << "\n";
	}	
}