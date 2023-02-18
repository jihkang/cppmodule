#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
public:
	Fixed();
	Fixed(Fixed const & other);
	Fixed(int value);
	Fixed(float value);
	~Fixed();
	int getValue(void) const;
	void correctPrint(std::ostream& os) const;
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed& operator= (Fixed const &obj);
	Fixed& operator* (Fixed const &obj);
	Fixed& operator+ (Fixed const &obj);
	Fixed& operator- (Fixed const &obj);
	Fixed& operator/ (Fixed const &obj);
	bool operator== (Fixed const &obj) const;
	bool operator<= (Fixed const &obj) const;
	bool operator>= (Fixed const &obj) const;
	bool operator< (Fixed const &obj) const;
	bool operator> (Fixed const &obj) const;
	bool operator!= (Fixed const &obj) const;
	Fixed& operator-- ();
	Fixed& operator++ ();
	Fixed operator++(int);
	Fixed operator--(int);
	static Fixed& max(Fixed& a, Fixed& b);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& max(Fixed const & a, Fixed const & b);
	static const Fixed& min(Fixed const & a, Fixed const & b);
private:
	const static int bits = 8;
	int value;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed); 

#endif