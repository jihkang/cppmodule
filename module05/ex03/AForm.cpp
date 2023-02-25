#include "AForm.hpp"

AForm::AForm() : name("no name"), isSigned(false), toSign(5), toExecute(5) {}

AForm::~AForm() {}

AForm::AForm(std::string name, bool isSigned, int toSign, int toExecute) : name(name), isSigned(isSigned), toSign(toSign), toExecute(toExecute) {} 

AForm::AForm(const AForm& form) : name(form.getName()), isSigned(form.getIsSigned()), toSign(form.getToSign()), toExecute(form.getToExecute()){}

AForm& AForm::operator= (const AForm& form) {
	static_cast<void>(form);
	return (*this);
}

const char* AForm::AlreadySigned::what() const throw() {
	return ("Already signed");
}

void AForm::beSigned(const Bureaucrat& bure) {
	try {
		if (bure.getGrade() > this->toSign){
			throw Bureaucrat::GradeTooLowException();
		}
		if (this->getIsSigned()) {
			throw AForm::AlreadySigned();
		}
		std::cout << "[" << " " << this->getName() << " sign... ]" << std::endl;
		this->isSigned = true;
	} catch (std::exception& e) {
		std::cout << bure.getName() << " couldn't sign" << this->getName() << " becuase " << e.what() << std::endl;
	}
}

bool AForm::getIsSigned() const {
	return (this->isSigned);
}

std::string AForm::getName() const {
	return (this->name);
}

int AForm::getToSign() const {
	return (this->toSign);
}

int AForm::getToExecute() const {
	return (this->toExecute);
}

std::ostream& operator<< (std::ostream& os, const AForm& form) {
	os << form.getName();
	if (form.getIsSigned()) {
		os << "signed";
	} else {
		os << "not signed";
	}
	return (os);
}
