#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

class ScalarConverter{
public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter&);
	ScalarConverter& operator= (const ScalarConverter&);
	void convert(std::string &str);
};

#endif