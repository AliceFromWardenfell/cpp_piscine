#pragma once

#include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{
	public:
		
		WrongCat(void);
		WrongCat(WrongCat const & instance);
		~WrongCat(void);

		WrongCat&	operator=(WrongCat const & instance);

		void	make_sound(void) const;

};
