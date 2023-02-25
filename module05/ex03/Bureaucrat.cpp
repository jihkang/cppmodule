
#include "Bureaucrat.hpp"
#include "AForm.hpp"

const char* Bureaucrat::GradeTooLowException::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}

const char* Bureaucrat::GradeTooHighException::GradeTooHighException::what() const throw(){
	return "Grade is too high";
}

Bureaucrat::Bureaucrat() : name("name"), grade(150){
	std::cout << "Default Constructor" << std::endl;
}

void Bureaucrat::tryCatch(int grade) {
	try {
		if (grade < 1) {
			throw Bureaucrat::GradeTooHighException();
		} else if (grade > 150) {
			throw Bureaucrat::GradeTooLowException();
		} else {
			this->grade = grade;
		}
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor" << std::endl;
}

std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {
	this->tryCatch(grade);
	std::cout << this->name << " String Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bure) : name(bure.name) {
	std::cout << "Copy Constructor" << std::endl;
	*this = bure;
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& bure) {
	std::cout << "Copy assign" << std::endl;
	(void)bure;
	return *this;
}

void Bureaucrat::increaseGrade() {
	try {
		this->tryCatch(this->grade - 1);
	} catch(std::exception &e) {
		e.what();
	}
}

void Bureaucrat::decreaseGrade() {
	try {
		this->tryCatch(this->grade + 1);
	} catch(std::exception &e) {
		e.what();
	}
}

void Bureaucrat::signForm(AForm& form) const {
	try {
		if (form.getIsSigned() == false) {
			form.beSigned(*this);
		}
		else if (form.getIsSigned() == true) {
			throw AForm::AlreadySigned();
		}
		else {
			throw Bureaucrat::GradeTooLowException();
		}
			std::cout << this->getName() << " signed " << form.getName() << std::endl;
 } catch (std::exception& e) {
			std::cout << this->getName() << " couldn't sign" << form.getName() << " becuase " << e.what() << std::endl;
 }
}

const char * AForm::IsNotSigned::what() const throw() {
	return "is not signed";
}

void	Bureaucrat::executeForm(AForm const& form) {
	if (form.getIsSigned() == false) {
		throw AForm::IsNotSigned();	
	} else if (this->getGrade() > form.getToExecute()) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		try {
			form.execute(*this);
			std::cout << this->getName() << " executed " << form.getName() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}

void Bureaucrat::show(std::ostream& os) const {
	os << this->name << ", bureaucrat grade " << this->grade;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bure) {
	bure.show(os);
	return (os);
}