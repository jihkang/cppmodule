#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <stdlib.h>
#include <time.h>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	srand(time(NULL));
	try {
		AForm *form = new ShrubberyCreationForm();
		AForm *form2 = new RobotomyRequestForm();
		AForm *form3 = new PresidentialPardonForm(); 
		Bureaucrat bure3("bureman", 3);
		bure3.signForm(*form);
		bure3.signForm(*form2);
		bure3.signForm(*form3);
		form->execute(bure3);
		form2->execute(bure3);
		form3->execute(bure3);
		bure3.executeForm(*form);
		bure3.executeForm(*form2);
		bure3.executeForm(*form3);
		delete form3;
		delete form2;
		delete form;
	} catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		AForm *form = new ShrubberyCreationForm();
		AForm *form2 = new RobotomyRequestForm();
		AForm *form3 = new PresidentialPardonForm(); 
		Bureaucrat bure3("bureman", 20);
		bure3.signForm(*form);
		bure3.signForm(*form2);
		bure3.signForm(*form3);
		form->execute(bure3);
		form2->execute(bure3);
		form3->execute(bure3);
		bure3.executeForm(*form);
		bure3.executeForm(*form2);
		bure3.executeForm(*form3);
		delete form3;
		delete form2;
		delete form;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
