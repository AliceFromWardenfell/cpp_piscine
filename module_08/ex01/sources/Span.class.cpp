#include "Span.class.hpp"
#include <algorithm>

// CONSTRUCTORS:

Span::Span(void) {}

Span::Span(unsigned int n)
	:	_capacity(n)
{
	_storage.reserve(n);
}

Span::Span(Span const & instance)
	:	_storage(instance._storage), _capacity(instance._capacity) {}

Span::~Span(void) {}

// OVERLOADS:

Span&	Span::operator=(Span const & instance)
{
	if (this == &instance)
		return *this;
	_capacity = instance._capacity;
	_storage = instance._storage;
	return *this;
}

// PUBLIC FUNCTIONS:

void	Span::add_number(int number)
{
	if (_storage.size() + 1 > _capacity)
		throw std::overflow_error("storage is full");
	_storage.push_back(number);
}

int		Span::shortest_span(void)
{
	if (_storage.size() < 2)
		throw std::range_error("number of elements < 2");
	
	std::sort(_storage.begin(), _storage.end());
	int		s_span = _storage[1] - _storage[0];
	
	for (size_t i = 0; i < _storage.size() - 1; i++)
		s_span = std::min(_storage[i + 1] - _storage[i], s_span);
	return s_span;
}

int		Span::longest_span(void)
{
	if (_storage.size() < 2)
		throw std::range_error("number of elements < 2");
	std::sort(_storage.begin(), _storage.end());
	
	return _storage.back() - _storage[0];
}



void	Span::add_int_range(v_iterator begin, v_iterator end)
{
	for (v_iterator it = begin; it < end; it++)
		add_number(*it);
}
