#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	// Bureaucrat test("abc", 1000);
	// std::cout << test << std::endl;
	try
	{
		Bureaucrat test("test", 200);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a("a", 150);
		Bureaucrat b("b", 1);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		try
		{
			b.increaseGrade();
			a.increaseGrade();
			std::cout << a << std::endl;
			std::cout << b << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		std::cerr << std::endl;
	}
	try
	{
		Bureaucrat a("man", 30);
		std::cout << a << std::endl;
		a.increaseGrade();
		std::cout << a << std::endl;
		a.decreaseGrade();
		std::cout << a << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}