#include "Span.hpp"

Span::Span() {
}

Span::Span(unsigned int value) : _size(0), _capacity(value){
}

Span::~Span() {
}

Span::Span(const Span& span) {
	if (this == &span) {
		return ;
	}
	if (span._size == 0) {
		return ;
	}
	*this = span; 
}

Span& Span::operator= (const Span& span) {
	this->number.resize(span.number.size());
	for (unsigned long i = 0; i < span._size; ++i) {
		this->number.push_back(span.number[i]);
	}
	this->_size = span._size;
	this->_capacity = span._capacity;
	return (*this);
}

void Span::addNumber(int number) {
	if (this->_size >= this->_capacity){
		throw ("cant order to fill it");
	}
	this->number.push_back(number);
	this->_size++;
	this->isSorted = false;
}

int Span::shortestSpan() {
	int _min;
	if (this->_size < 2) {
		throw ("cannot find");
	}
	if (!isSorted) {
		std::sort(number.begin(), number.end()); 
		isSorted = true;
	}
	_min = number[_size - 1] - number[0];
	for (unsigned long i = 1; i < _size; ++i) {
		_min = std::min(_min, number[i] - number[i - 1]);
	}	
	return (_min);
}

int Span::longestSpan() {
	if (_size < 2) {
		throw ("cannot find");
	}
	if (!isSorted) {
		std::sort(number.begin(), number.end());
		isSorted = true;
	}
	return (number[_size - 1] - number[0]);
}

void Span::printVector() {
	for (size_t i = 0; i < number.size(); ++i) {
		std::cout << number[i] << " ";
	}
	std::cout << std::endl;

}