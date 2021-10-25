#pragma once

template<typename T>
void	swap(T& a, T& b)
{
	T	t = a;

	a = b;
	b = t;
	return;
}

template<typename T>
T const &	min(T const & a, T const & b)
{
	return (a < b ? a : b);
}

template<typename T>
T const &	max(T const & a, T const & b)
{
	return (a > b ? a : b);
}
