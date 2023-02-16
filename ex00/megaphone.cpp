#include <iostream>

void switch_options(int ac, char **av)
{
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return ;
	}
	for(int i = 1; i < ac; ++i) {
		for (int j = 0; av[i][j]; ++j) {
			std::cout << (char)toupper(av[i][j]);
		}
	}
}

int main(int ac, char **av)
{
	switch_options(ac, av);
	return 0;
}