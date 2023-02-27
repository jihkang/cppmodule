#include <iostream>
#include <vector>
#include <deque>
#include "Span.hpp"

int main()
{
	try {
		Span span = Span(10000);
		for (int i = 0; i < 10000; ++i) {
			span.addNumber(i * 3);
		}
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	} catch (const char *e) {
		std::cerr << e << std::endl;
	}
	try {
		Span span = Span();
		span.addNumber(1);
	} catch (const char *e) {
		std::cerr << e << std::endl;
	}
	try {
		Span span = Span(5);
		span.addNumber(1);
		span.addNumber(5);
		span.addNumber(30);
		span.addNumber(29);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	} catch (const char *e) {
		std::cerr << e << std::endl;
	}
	try {
		Span span = Span(20);
		span.addNumber(50);
		std::vector<int> v(10);
		for (int i = 0; i < 10; ++i) {
			v[i] = i + 1;
		}
		span.addRange(v.begin(), v.end());
		span.printVector();
	} catch (const char *e) {
		std::cout << e << std::endl;
	}
	try {
		Span span = Span(20);
		span.addNumber(50);
		std::deque<int> v;
		for (int i = 0; i < 10; ++i) {
			v.push_back(i);
		}
		span.addRange(v.begin(), v.end());
		span.printVector();
	} catch (const char *e) {
		std::cerr << e << std::endl;
	}
	// system("leaks a.out");
	return 0;
}