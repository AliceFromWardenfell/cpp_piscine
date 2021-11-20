#pragma once

#include <stack>
#include <iostream>

template< typename T, typename Base = std::deque<T> >
class MutantStack : public std::stack<T, Base>
{
	public:

		MutantStack(void) : std::stack<T, Base>() {}
		MutantStack(MutantStack const & instance) : std::stack<T, Base>(instance) { this->c = instance.c; }
		~MutantStack(void) {}

		MutantStack&	operator=(MutantStack const & instance)
		{
			if (this == &instance)
				return *this;
			this->c = instance.c;
			return *this;
		}

	public:

		typedef typename std::stack<T, Base>::container_type::iterator	it;

		it	begin(void) { return std::stack<T, Base>::c.begin(); }
		it	end(void) { return std::stack<T, Base>::c.end(); } //mb add refs

};
