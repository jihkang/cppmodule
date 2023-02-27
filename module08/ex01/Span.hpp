#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Span{
public:
	Span();
	Span(unsigned int);
	~Span();
	Span(const Span& span);
	Span& operator= (const Span& span);
	void addNumber(int);
	int shortestSpan();
	int longestSpan();
	void printVector();
	
	template <typename iter>
	void addRange(iter begin, iter end)
	{
		if (this->_capacity - this->_size < static_cast<unsigned long> (std::distance(begin, end))) {
			throw ("cant order to fill it");
		}
		for (iter i = begin; i != end; ++i) {
			this->number.push_back(*i);
		}
		this->_size += std::distance(begin, end);
	}

private:
	std::vector<int> number;
	unsigned long	_size;
	unsigned long _capacity;
	bool isSorted;
};

#endif