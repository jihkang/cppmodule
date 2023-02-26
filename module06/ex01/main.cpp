#include "Serializer.hpp"
#include <iostream>

int main()
{
	static Serializer serial;
	Data d;

	d.data = 200;
	uintptr_t data = serial.serialize(&d);
	std::cout << data << std::endl;
	std::cout << serial.deserialize(data) << std::endl;

	return 0;
}
