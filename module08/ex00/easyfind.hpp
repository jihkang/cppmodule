#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template <typename T>
int easyfind(T& a, int value)
{
	if (std::find(a.begin(), a.end(), value) == a.end())
		throw ("error!!");
	return *(std::find(a.begin(),
		a.end(),
		value));
}
#endif