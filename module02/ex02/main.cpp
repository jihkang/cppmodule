#include <iostream>
#include "Fixed.hpp"

int main()
{
	Fixed a(7.0f);
	Fixed as(4.0f);
	Fixed b( 2.8122f);
	Fixed const c( 42.4211f );
	Fixed const d(b);
	Fixed fixed(Fixed(5.05f) * Fixed(2));
	Fixed test(Fixed(10.10f) / Fixed(20));
	std::cout << fixed << std::endl;
	std::cout << test << std::endl;
	// std::cout << a << " " << as << " " << b << " "<< c << " " << d << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toFloat() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;
	std::cout << "a / as " << (a / as) << std::endl;
	std::cout << "a * b " << a * b << std::endl;
	std::cout << "b + c " << (b + c) << std::endl;
	std::cout << "a - b " << a - b << std::endl;
	std::cout << --a << std::endl;
	std::cout << (a == as) << std::endl;
	std::cout << (a >= as) << std::endl;
	std::cout << (a <= as) << std::endl;
	std::cout << (a < as) << std::endl;
	std::cout << (a > as) << std::endl;	
	std::cout << (a != as) << std::endl;
	std::cout << Fixed::max(a, as) << std::endl;
	std::cout << Fixed::min(a, as) << std::endl;
	std::cout << Fixed::max(b, c) << std::endl;
	std::cout << ++a  << std::endl;
	std::cout << a ++ << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << --a << std::endl;
	return 0;
}