
#include "Bureaucrat.hpp"

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

void Bureaucrat::show(std::ostream& os) const {
	os << this->name << ", bureaucrat grade " << this->grade;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bure) {
	bure.show(os);
	return (os);
}