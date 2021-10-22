#include "header.hpp"
#include <iostream>

uintptr_t	serialize(Data* person)
{
	return reinterpret_cast<uintptr_t>(person);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
