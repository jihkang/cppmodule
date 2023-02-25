#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {

}

ScalarConverter::ScalarConverter(const ScalarConverter& obj) {	
	static_cast<void>(obj);
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj) {
	static_cast<void>(obj);
	return *this;
}

void ScalarConverter::convert(std::string& str) {

}