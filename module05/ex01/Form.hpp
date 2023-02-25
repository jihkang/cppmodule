#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form : public Bureaucrat{
public:
	Form();
	~Form();
	Form(const Form&);
	Form& operator=(const Form&);
	void beSigned(const Bureaucrat&);
	std::string getName() const;
	bool	getIsSigned() const;
	int getToSign() const;
	int getToExecute() const;
	class AlreadySigned : public std::exception{
	public:
		const char *what() const throw();
	};
private:
	const std::string name;
	bool isSigned;
	const int toSign;
	const int toExecute;	
};

std::ostream& operator<< (std::ostream& os, const Form& form);

#endif