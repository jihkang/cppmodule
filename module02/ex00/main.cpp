#include "Fixed.hpp"
#include <iostream>

int main()
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	
	std::cout << a.getRawBits() << std::endl;
	a.setRawBits(1500000000);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}