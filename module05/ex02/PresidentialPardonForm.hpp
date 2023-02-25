#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& );
	PresidentialPardonForm& operator= (const PresidentialPardonForm&);
	void execute(Bureaucrat const& executor) const;
	class PresidentialFail : public std::exception{
	public:
		const char *what() const throw();
	};
}; 

#endif