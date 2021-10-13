#pragma once

#include <iostream>

#define NUM_OF_IDEAS 100

class Brain
{
	public:
		
		Brain(void);
		Brain(Brain const & instance);
		~Brain(void);

		Brain&	operator=(Brain const & instance);

	private:

		std::string	_ideas[NUM_OF_IDEAS];

	public:

		void				set_idea(std::string const & idea, size_t idx);
		std::string const &	get_idea(size_t idx) const;
};
