#include "Form.hpp"

Form::Form() : name("no name"), isSigned(false), toSign(5), toExecute(5){}

Form::~Form() {}

Form::Form(const Form& form) : name(form.getName()), isSigned(form.getIsSigned()), toSign(form.getToSign()), toExecute(form.getToExecute()){
}

Form& Form::operator= (const Form& form) {
	static_cast<void>(form);
	return (*this);
}

const char* Form::AlreadySigned::what() const throw() {
	return ("Already signed");
}

void Form::beSigned(const Bureaucrat& bure) {
	try {
		if (bure.getGrade() > this->toSign){
			throw Bureaucrat::GradeTooLowException();
		}
		if (this->getIsSigned()) {
			throw Form::AlreadySigned();
		}
		std::cout << "[" << " " << this->getName() << " sign... ]" << std::endl;
		this->isSigned = true;
	} catch (std::exception& e) {
		std::cout << bure.getName() << " couldn't sign" << this->getName() << " becuase " << e.what() << std::endl;
	}
}

bool Form::getIsSigned() const {
	return (this->isSigned);
}

std::string Form::getName() const {
	return (this->name);
}

int Form::getToSign() const {
	return (this->toSign);
}

int Form::getToExecute() const {
	return (this->toExecute);
}

std::ostream& operator<< (std::ostream& os, const Form& form) {
	os << form.getName();
	if (form.getIsSigned()) {
		os << "signed";
	} else {
		os << "not signed";
	}
	return (os);
}
