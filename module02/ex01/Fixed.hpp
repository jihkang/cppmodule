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
	void correctPrint(std::ostream& os) const;
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed& operator= (Fixed const &obj);

private:
	const static int bits = 8;
	int value;
};


std::ostream& operator<<(std::ostream& os, const Fixed& fixed); 

#endif