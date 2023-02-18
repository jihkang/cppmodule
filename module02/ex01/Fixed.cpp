#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::Fixed(float f) 
{
	std::cout << "float constructor called" << std::endl;
	this->value = f * (1 << 8);
}

Fixed::Fixed(int v)
{
	std::cout << "int constructor called" << std::endl;
	this->setRawBits(static_cast<const int>(v));
}

Fixed::~Fixed() {
	std::cout << "Destroy constructor called" << std::endl;
}

Fixed& Fixed::operator= (Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = obj.value;
	return (*this);	
}

int Fixed::toInt(void) const{
	std::cout << "static cast to int" << "\n";
	return (this->value) / (1 << this->bits);
}

float Fixed::toFloat(void) const {
	std::cout << "static cast to Float" << "\n";
	return (static_cast<float>(this->value)) / (1 << this->bits);
}

int Fixed::getRawBits(void) const {
	return ((this->value / (1 << this->bits)));
}

void Fixed::setRawBits(int const raw) {
	this->value = raw * (1 << this->bits);
}

void Fixed::correctPrint(std::ostream& os) const {
	int value;

	value = this->value;
	if ((value / (1 << this->bits) * 256) == value) {
		os << this->getRawBits();
	} else {
		os << static_cast<float>(value) / (1 << 8)<<"f";
	}
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	fixed.correctPrint(os);
	return (os);
}