#pragma once

#include <iostream>

class WrongAnimal
{
	public:
		
		WrongAnimal(void);
		WrongAnimal(const char * type);
		WrongAnimal(WrongAnimal const & instance);
		~WrongAnimal(void);

		WrongAnimal&	operator=(WrongAnimal const & instance);

	protected:

		std::string	_type;

	public:

		std::string const &	get_type(void) const;
		void				make_sound(void) const;

};
