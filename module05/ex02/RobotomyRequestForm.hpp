#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& );
	RobotomyRequestForm& operator= (const RobotomyRequestForm&);
	void execute(Bureaucrat const& executor) const;
	class RobotError : public std::exception{
	public:
		const char *what() const throw();
	};
}; 

#endif