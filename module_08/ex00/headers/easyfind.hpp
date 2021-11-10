#pragma once

#include <algorithm>
#include <stdexcept>

template<typename T>
typename T::iterator	easyfind(T& container, int to_find)
{
	typename T::iterator	iterator;

	iterator = std::find(container.begin(), container.end(), to_find);
	if (iterator == container.end())
		throw(std::runtime_error("Element hasn't been found"));
	return iterator;
}
