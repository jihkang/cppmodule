#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed{
public:
	Fixed();
	Fixed(Fixed& other);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed &operator= (Fixed &obj);

private:
	const static int bits = 8;
	int value;
};

#endif