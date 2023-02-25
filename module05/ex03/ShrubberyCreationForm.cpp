#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery", false, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, false, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shr) : AForm(shr) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& shr) {
	static_cast<void>(shr);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getIsSigned() == false) {
		throw AForm::IsNotSigned();
	}
	if (this->getToExecute() < executor.getGrade()) {
		throw Bureaucrat::GradeTooLowException();
	}
	std::string fileName = executor.getName() + "_shrubbery";
	std::ofstream writeFile;
	std::string tree = "        a         \n";
						tree +=  "       abba       \n";
						tree +=  "     .b.a.c.d.    \n";
						tree +=  "    .f.@.#@.#@.   \n";
						tree +=  "        b.b        \n";
						tree +=  "       c.dd.c       ";
	writeFile.open(fileName);
	if (!writeFile.is_open()) {
		throw ShrubberyCreationForm::FileError();
	} 
	writeFile<<tree;
}

const char * ShrubberyCreationForm::FileError::what() const throw() {
	return "File open Error";
}