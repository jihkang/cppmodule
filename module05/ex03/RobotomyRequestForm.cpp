#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy", false, 75, 45){}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, false, 75, 45){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robot) : AForm(robot) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &robot) {
	static_cast<void>(robot);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	if (this->getIsSigned() == false) {
		throw AForm::IsNotSigned();
	}
	if (this->getToExecute() < executor.getGrade()) {
		throw Bureaucrat::GradeTooLowException();
	}
	int result = random() % 10;
	if (result >= 5) {
		throw RobotomyRequestForm::RobotError();
	}
	std::cout << "dasdf asdf drilliasmdfklmaslkdmflaksmdflkamsdf" << std::endl;
}

const char * RobotomyRequestForm::RobotError::what() const throw(){
	return ("robot failed..");
}