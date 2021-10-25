#pragma once

#include <iostream>

template<typename T>
void	iter(T* array, size_t size, void(*func)(T const & el))
{
	for (size_t i = 0; i < size; i++)
		func(array[i]);
	return;
}
