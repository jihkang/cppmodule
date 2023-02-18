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

int Fixed::getValue(void) const 
{
	return (this->value);
}

Fixed& Fixed::operator= (Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = (obj.value);
	return (*this);	
}

Fixed& Fixed::operator* (Fixed const &obj)
{
	this->value *= obj.getValue() / (1 << this->bits);
	return (*this);
}

Fixed& Fixed::operator- (Fixed const &obj)
{
	this->value -= obj.getValue() / (1 << this->bits);
	return (*this);
}

Fixed& Fixed::operator/ (Fixed const &obj)
{
	this->value /= obj.getValue() / (1 << this->bits);
	return (*this);
}

Fixed& Fixed::operator+ (Fixed const &obj)
{
	this->value += obj.getValue() / (1 << this->bits);
	return (*this);
}

// Fixed& Fixed::max(Fixed &a, Fixed &b)
// {
// 	if (a.getValue() > b.getValue())
// 		return (a);
// 	return (b);
// }

// Fixed& Fixed::min(Fixed& a, Fixed& b)
// {
// 	if (a.getValue() < b.getValue())
// 		return (a);
// 	return (b);
// }

const Fixed& Fixed::max(Fixed const& a, Fixed const& b)
{
	if (a.getValue() > b.getValue())
		return (a);
	return (b);
}

const Fixed& Fixed::min(Fixed const& a, Fixed const& b)
{
	if (a.getValue() < b.getValue())
		return (a);
	return (b);
}

bool Fixed::operator== (Fixed const &obj) const
{
	return (this->getRawBits() == obj.getRawBits());	
}

bool Fixed::operator<= (Fixed const &obj) const
{
	return (this->getRawBits() <= obj.getRawBits());
}

bool Fixed::operator>= (Fixed const &obj) const
{
	return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator< (Fixed const &obj) const
{
	return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator> (Fixed const &obj) const
{
	return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator!= (Fixed const &obj) const
{
	return (this->getRawBits() != obj.getRawBits());
}

Fixed& Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator++(int value)
{
	Fixed	tmp;

	tmp = *this;
	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() + value);
	return (tmp);
}

Fixed Fixed::operator--(int value)
{
	Fixed	tmp;

	tmp = *this;
	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() - value);
	return (tmp);
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