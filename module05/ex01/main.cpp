#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try {
		Form form = Form();
		Bureaucrat bure("addd", 253);
		Bureaucrat bure2("abcde", 1);
		form.beSigned(bure2);
		form.beSigned(bure);
		bure.signForm(form);
		bure.signForm(form);
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}