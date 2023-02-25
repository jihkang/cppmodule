#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class AForm : public Bureaucrat{
public:
	AForm();
	virtual ~AForm();
	AForm(const AForm&);
	AForm(std::string, bool, int, int);
	AForm& operator=(const AForm&);
	void beSigned(const Bureaucrat&);
	std::string getName() const;
	virtual void execute(Bureaucrat const& executor) const = 0;
	bool	getIsSigned() const;
	int getToSign() const;
	int getToExecute() const;
	class AlreadySigned : public std::exception{
	public:
		const char *what() const throw();
	};
	class IsNotSigned : public std::exception {
	public:
		const char *what() const throw();
	};
private:
	const std::string name;
	bool isSigned;
	const int toSign;
	const int toExecute;	
};

std::ostream& operator<< (std::ostream& os, const AForm& form);

#endif