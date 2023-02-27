#include "iter.hpp"

void pow(int& idx) {
	idx = (1 << idx);
}

void upper(char& c) {
	if (c >= 'a' && c <= 'z') {
		c = c -'a' + 'A';
	}
}

int main()
{
	int arr[10];
	char crr[26];
	for (int i = 0; i < 26; ++i) {
		crr[i] = 'a' + i;
	}
	for (int i = 0; i < 10; ++i) {
		arr[i] = i;
	}
	iter(arr, static_cast<size_t>(10), pow);
	iter(crr, static_cast<size_t>(26), upper);
	for (int i = 0; i < 10; ++i) {
		std::cout << arr[i] << std::endl;
	}
	for(int i = 0; i < 26; ++i) {
		std::cout << crr[i] << "";
	}
	std::cout << std::endl;
	return 0;
}