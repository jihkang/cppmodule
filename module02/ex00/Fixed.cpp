#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed& fix)
{
	std::cout << "Copy constructor called" << std::endl ;
	*this = fix;
}

Fixed::~Fixed() {
	std::cout << "Destroy constructor called" << std::endl;
}

Fixed &Fixed::operator= (Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj)
		return (*this);
	this->value = obj.value;
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (this->value);
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}
