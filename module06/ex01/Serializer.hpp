#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>

typedef struct data_s{
	int data;
}Data;

class Serializer{
	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer&);
		Serializer& operator= (const Serializer&);
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};

#endif
