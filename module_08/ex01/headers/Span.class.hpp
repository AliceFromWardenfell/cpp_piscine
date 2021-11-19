#pragma once

#include <vector>
#include <stdexcept> 

class Span
{
	public:

		Span(unsigned int n);
		Span(Span const & instance);
		~Span(void);

		Span&	operator=(Span const & instance);

	private:

		std::vector<int>	_storage;
		size_t				_capacity;

		Span(void);

	public:

		typedef	std::vector<int>::iterator	v_iterator;

		void	add_number(int number);
		int		shortest_span(void);
		int		longest_span(void);
		void	add_int_range(v_iterator begin, v_iterator end);
};
