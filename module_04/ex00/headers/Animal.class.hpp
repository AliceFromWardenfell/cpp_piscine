#pragma once

#include <iostream>

class Animal
{
	public:
		
		Animal(void);
		Animal(const char * type);
		Animal(Animal const & instance);
		virtual ~Animal(void);

		Animal&	operator=(Animal const & instance);

	protected:

		std::string	_type;

	public:

		std::string const &	get_type(void) const;
		virtual void		make_sound(void) const;

};
