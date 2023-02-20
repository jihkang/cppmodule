#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() {
	this->value = 0;
}

Fixed::Fixed(Fixed const &fix)
{
	*this = fix;
}

Fixed::Fixed(float f)  : value(f * (1 << this->bits))
{

}

Fixed::Fixed(int v) : value (v * (1 << this->bits)) 
{
}

Fixed::~Fixed() {
}

int Fixed::toInt(void) const{
	return (this->getRawBits()) / (1 << this->bits);
}

float Fixed::toFloat(void) const {
	return (static_cast<float>(this->value) / static_cast<float>((1 << this->bits)));
}

int Fixed::getRawBits(void) const {
	return (this->value);
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}

Fixed& Fixed::operator= (Fixed const &obj)
{
	this->setRawBits(obj.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	std::cout << fixed.toFloat();
	return (os);
}

Fixed Fixed::operator* (Fixed const &obj) 
{
	float value = this->toFloat() * obj.toFloat();
	Fixed fix(value);
	return (fix);
}

Fixed Fixed::operator- (Fixed const &obj) 
{
	Fixed fix(this->toFloat() - obj.toFloat());
	return (fix);	
}

Fixed Fixed::operator/ (Fixed const &obj) 
{
	if (obj.getRawBits() == 0)
	{
		std::cout << "0 cannot divided" << std::endl;
		return (*this);
	}
	float value = static_cast<float>(this->value) / static_cast<float>(obj.getRawBits());
	Fixed fix(value);
	return fix;
}

Fixed Fixed::operator+ (Fixed const &obj) 
{
	Fixed fix(this->toFloat() + obj.toFloat());
	return fix;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(Fixed const& a, Fixed const& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::min(Fixed const& a, Fixed const& b)
{
	if (a.getRawBits() < b.getRawBits())
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
	this->setRawBits(this->getRawBits() + 256);
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 256);
	return (*this);
}

Fixed Fixed::operator++(int value)
{
	Fixed	tmp(*this);

	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() + value * (1 << this->bits));
	return (tmp);
}

Fixed Fixed::operator--(int value)
{
	Fixed	tmp(*this);

	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() - value * (1 << this->bits)) ;
	return (tmp);
}
