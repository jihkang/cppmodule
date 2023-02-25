#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& );
	ShrubberyCreationForm& operator= (const ShrubberyCreationForm& );
	void execute(Bureaucrat const & executor) const;
	class FileError : public std::exception{
		public :
			const char *what() const throw();
	};
};

#endif