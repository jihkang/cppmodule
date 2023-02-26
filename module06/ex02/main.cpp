#include "Base.hpp"
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	Base *test = generate();
	identify(test);
	identify(*test);
	delete test;
}
