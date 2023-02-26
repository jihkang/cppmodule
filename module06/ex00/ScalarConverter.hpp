#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter{
public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& scalar);
	ScalarConverter& operator= (const ScalarConverter& scalar);
	void convert(std::string str);
};

#endif
