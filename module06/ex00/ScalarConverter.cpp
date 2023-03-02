#include "ScalarConverter.hpp"
#include <math.h>
#include <stdlib.h>

ScalarConverter::ScalarConverter() {
	std::cout << "Scalar converter Default" << std::endl;
}

ScalarConverter::~ScalarConverter() {
	std::cout << "Destructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& scalar) {
	std::cout << "converter assign will be not print" <<std::endl;
	static_cast<void>(scalar);
}

ScalarConverter& ScalarConverter::operator= (const ScalarConverter& scalar) {
	std::cout << "assign scalar" << std::endl;
	static_cast<void>(scalar);
	return (*this);
}

void printInf(int sign) {
	std::cout << "char : impossible" << std::endl;
	if (sign == 1) {
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : +inff"<< std::endl;
		std::cout << "double : +inf" << std::endl;
	} else if (sign == 0) {
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : inff"<< std::endl;
		std::cout << "double : inf" << std::endl;
	} else {
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : -inff"<< std::endl;
		std::cout << "double : -inf" << std::endl;
	}
}

void printNan(int sign) {
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	if (sign == 1) {
		std::cout << "float : +nanf"<< std::endl;
		std::cout << "double : +nan" << std::endl;
	} else if (sign == 0) {
		std::cout << "float : nanf"<< std::endl;
		std::cout << "double : nan" << std::endl;
	} else {
		std::cout << "float : -nanf" << std::endl;
		std::cout << "double : -nan" << std::endl;
	}
}

void printChar(double value) {
	std::cout << "char : ";
	if (value >= 256 || value < 0) {
		std::cout << "impossible" << std::endl;
	} else if (!isprint(value)) {
		std::cout << "Non displayable" << std::endl;
	} else {
		std::cout << static_cast<char>(value) << std::endl;
	}
}

std::string retNanOrInf(double value) {
	std::string res;

	res = "";
	if (isnan(value)) {
		res = "impossible";
	} else if (isinf(value)) {
		res = "inf";
	}
	return (res);
}

void printInt(double value) {
	std::cout << "int : ";
	std::string res;
	if ((res = retNanOrInf(value))!= "") {
		std::cout << res << std::endl;
	} else {
		std::cout << static_cast<int>(value) << std::endl; 
	}
}

void printFloat(double value) {
	std::cout << "float : ";
	std::string res;
	if ((res = retNanOrInf(value))!= "") {
		std::cout << res << std::endl;
	} else {
		std::cout << static_cast<float>(value) <<"f" << std::endl;
	}
}

void printDouble(double value) {
	std::cout << "double : ";
	std::string res;
	if ((res = retNanOrInf(value)) != "") {
		std::cout << res << std::endl;
	} else {
		std::cout << value << std::endl;
	}
}

void printSpecific(std::string str) {
	if (str == "inf") {
		printInf(0);
	} else if (str == "+inf") {
		printInf(1);
	} else if (str == "-inf") {
		printInf(-1);
	} else if (str == "nan") {
		printNan(0);
	} else if (str == "+nan") {
		printNan(1);
	} else if (str == "-nan") {
		printNan(-1);
	}
}

void ScalarConverter::convert(std::string str) {
	std::string checker[6] = {"inf", "-inf", "+inf", "nan", "-nan", "+nan"};
	bool isSpecific = false;
	int i;

	for (i = 0; i < 6; ++i) {
		if (checker[i] == str) {
			isSpecific = true;
			break ;
		}
	}
	if (isSpecific) {
		printSpecific(checker[i]);
		return ;
	}
	else {
		i = 0;
		bool		charact = false;
		double	ret;
		bool		dot = false;
		if (str[i] == '-' || str[i] == '+')
			++i;
		for (; i < str[i]; ++i) {
			if (dot == false && str[i] == '.'){
				dot = true;
				continue ;
			}
			if (charact || (i >= 1 && !(str[i] >= '0' && str[i] <= '9'))) {
				std::cout << "char : impossible" << std::endl;
				std::cout << "int : impossible" << std::endl;
				std::cout << "float : impossible" << std::endl;
				std::cout << "double : impossible" << std::endl;
				return ;
			}
			if (!(str[i] >= '0' && str[i] <= '9')) {
				charact = true;
			}
		}
		if (i == 1 && !(str[i - 1] >= '0' && str[i - 1] <= '9')) {
			ret = static_cast<double>(str[i - 1]);
		}
		else {
			ret = atof(str.c_str());
		}
		printChar(ret);
		printInt(ret);
		printFloat(ret);
		printDouble(ret);	
	}
}