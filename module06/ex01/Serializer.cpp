#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Default const" << std::endl;
}

Serializer::Serializer(const Serializer& serial) {
	std::cout << "copy const" << std::endl;
	static_cast<void>(serial);
}

Serializer::~Serializer() {
	std::cout << "Destruct" << std::endl;
}

Serializer& Serializer::operator= (const Serializer& serial) {
	std::cout << "assign" << std::endl;
	static_cast<void>(serial);
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	uintptr_t result = reinterpret_cast<uintptr_t>(ptr);
	return (result);
}

Data *Serializer::deserialize(uintptr_t raw) {
	Data *ret = reinterpret_cast<Data*>(raw);
	return (ret);
}
