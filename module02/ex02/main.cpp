#include <iostream>
#include "Fixed.hpp"

int main()
{
	Fixed a(10.1f);
	Fixed as(100);
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d(b);
	Fixed fixed(Fixed(1.11f) * Fixed(2.2f));
	std::cout << fixed << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;
	std::cout << (a == as) << std::endl;
	std::cout << (a >= as) << std::endl;
	std::cout << (a <= as) << std::endl;
	std::cout << (a < as) << std::endl;
	std::cout << (a > as) << std::endl;	
	std::cout << (a != as) << std::endl;
	std::cout << Fixed::max(a, as) << std::endl;
	std::cout << Fixed::min(a, as) << std::endl;
	std::cout << Fixed::max(b, d) << std::endl;
	return 0;
}