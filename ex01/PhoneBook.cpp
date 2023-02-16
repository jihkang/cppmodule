#include "PhoneBook.hpp"
#include <string.h>
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {
	this->cur = 0;
	this->total = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::add() {
	this->book[this->cur++].add();
	this->cur = this->cur >= 8 ? 0 : this->cur;
	if (this->total < 8) {
		++this->total;
	}
}

void PhoneBook::search() {
	for (int i = 0; i < this->total; ++i) {
		std::cout<<std::right << std::setfill(' ') << std::setw(10) << i;
		std::cout<<"|";
		std::string str = this->book[i].get("first");
		if (str.size() > 10) {
			str = str.substr(0, 9);
			str += '.';
		}
		std::cout<<std::right << std::setfill(' ') << std::setw(10) << str;
		std::cout<< "|";
		str = this->book[i].get("last");
		if (str.size() > 10) {
			str = str.substr(0, 9);
			str += '.';
		}
		std::cout<<std::right << std::setfill(' ') << std::setw(10)	<< str;
		std::cout << "|";
		str = this->book[i].get("nick");
		if (str.size() > 10) {
			str = str.substr(0, 9);
			str += '.';
		}
		std::cout<<std::right << std::setfill(' ') << std::setw(10) << str;
		std::cout <<"\n";
	}
	std::string str;
	std::getline(std::cin, str);
	if (str.size() > 1 || !(str.size() == 1 && str[0] - '0' <= this->total))
		return ;
	this->book[str[0] - '0'].print();
}


void PhoneBook::run() {
	std::string data;
	while (true)
	{ 
		std::cout << "what are you doing?\n";
		std::getline(std::cin, data);
		if (data == "add") {
			this->add();
		} else if (data == "search") {
			this->search();
		} else if (data == "exit") {
			break ;
		} else {
			std::cout << "wrong commands\n";
			std::cout << "you can use add, search, exit only\n";
		}
	}
}
