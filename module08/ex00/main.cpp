#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v(10);
	std::deque<int> dq;
	for(int i = 0; i < 10; ++i) {
		v[i] = i;
		dq.push_back(i + 1);
	}
	try {
		std::cout << easyfind(v, 100) << std::endl;
	} catch (const char *e) {
		std::cerr << e << std::endl;
	} try {
		std::cout << easyfind(dq, 10) << std::endl;
	} catch (const char *e) {
		std::cerr << e << std::endl;
	}
	system("leaks a.out");
	return 0;
}