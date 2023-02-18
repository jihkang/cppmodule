#include "Harl.hpp"

Harl::Harl() {
	std::cout << "Constructor" << std::endl;
}

Harl::~Harl() {
	std::cout<<"Destroy"<<std::endl;
}

void Harl::complain(std::string level) {
	void	(Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string checker[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; ++i) {
		if (checker[i] == level)
			(this->*ptr[i])();
	}
}

void Harl::debug() {
	std::cout << "[debug] \n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do" << std::endl;
}

void Harl::info() {
	std::cout << "[info] \n";
	std::cout << "I cannot believe adding extra bacon costs more money."<<std::endl;
	std::cout << "You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "[warning] \n";
	std::cout << "I think I deserve to have some extra bacon for free" << std::endl;
	std::cout << "I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "[error]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}