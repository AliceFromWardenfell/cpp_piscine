#pragma once

#include "Animal.class.hpp"

class Cat : public Animal
{
	public:
		
		Cat(void);
		Cat(Cat const & instance);
		~Cat(void);

		Cat&	operator=(Cat const & instance);

		void	make_sound(void) const;

};
