#pragma once

#include "Animal.class.hpp"

class Dog : public Animal
{
	public:
		
		Dog(void);
		Dog(Dog const & instance);
		~Dog(void);

		Dog&	operator=(Dog const & instance);

		void	make_sound(void) const;

};
