#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {
	std::cout << "Intern Constructor" << std::endl;
}

Intern::~Intern() {
	std::cout << "Destructor" << std::endl;
}

Intern::Intern(const Intern &intern) {
	std::cout << "copy constructor" << std::endl;
	static_cast<void>(intern);
}

Intern& Intern::operator=(const Intern &intern) {
	std::cout << "Copy assign" << std::endl;
	static_cast<void>(intern);	
	return (*this);
}

AForm *Intern::makeForm(std::string targetForm, std::string target) {
	AForm *form;
	std::string name[3] = {"robotomy request", "presidential pardon", "Shrubbery creation"};
	int idx = 0;
	for (int i = 0; i < 3; ++i) {
		if (name[i] == targetForm) {
			idx = i;
			break ;
		}
	}
	switch (idx){
		case 0:
			form = new RobotomyRequestForm(target);
			break;
		case 1:
			form = new PresidentialPardonForm(target);
			break ;
		case 2:
			form = new ShrubberyCreationForm(target);
			break ;
		default :
			form = nullptr;
			break ;
	}
	return (form);
}