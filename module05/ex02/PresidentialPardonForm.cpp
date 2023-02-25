#include "PresidentialPardonForm.hpp"
#include <stdlib.h>

PresidentialPardonForm::PresidentialPardonForm() : AForm("president", false, 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& robot) : AForm(robot) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &robot) {
	static_cast<void>(robot);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (this->getIsSigned() == false) {
		throw AForm::IsNotSigned();
	}
	if (this->getToExecute() < executor.getGrade()) {
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << "Informs that "  << executor.getName() <<" has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const char * PresidentialPardonForm::PresidentialFail::what() const throw(){
	return ("robot failed..");
}