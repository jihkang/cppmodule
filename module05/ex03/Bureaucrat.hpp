#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>

class AForm;

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(const std::string&, int idx);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator= (const Bureaucrat&);
	void tryCatch(int grade);
	void show(std::ostream& os) const;
	virtual std::string getName() const;
	int	getGrade() const;
	void increaseGrade();
	void decreaseGrade();
	void signForm(AForm& form) const;
	void executeForm(AForm const& form);
	class GradeTooHighException :public std::exception{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException :public std::exception {
	public:
		const char* what() const throw();
	};
private:
	const std::string name;
	int grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bure);

#endif