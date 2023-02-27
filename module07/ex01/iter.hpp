#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename FP>
void iter(T* arr, size_t size, FP fp) {
	size_t i;
	for (i = 0; i < size; ++i) {
		(fp)(arr[i]);
	}
}

#endif