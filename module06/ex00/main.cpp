#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {
		return (1);
	}
	static ScalarConverter scalar;
	scalar.convert(av[1]);
	return 0;
}
