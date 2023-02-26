#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base::~Base() {
	std::cout << "Base destruct" << std::endl;
}

Base* generate(void) {
	Base* ret = nullptr;
	int r;

	r = static_cast<int>(rand() % 3);
	switch (r) {
		case 0 :
			ret = new A();
			break;
		case 1 :
			ret = new B();
			break;
		case 2:
			ret = new C();
			break;
		default:
			ret = nullptr;
			break;
	}
	return ret;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
		return ;
	}
	if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
		return ;
	}
	std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try {
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout << "A" << std::endl;
	} catch(std::exception& e) {
		static_cast<void>(e);
	}
	try {
		static_cast<void>(dynamic_cast<B&>(p));
		std::cout << "B" << std::endl;
	} catch(std::exception& e) {
		static_cast<void>(e);
	}
	try {
		static_cast<void>(dynamic_cast<C&>(p));
		std::cout << "C" << std::endl;

	} catch(std::exception& e) {
		static_cast<void>(e);
	}
}
