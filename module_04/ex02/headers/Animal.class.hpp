#pragma once

#include <iostream>

class Animal
{
	public:
		
		Animal(void);
		Animal(const char * type);
		Animal(Animal const & instance);
		virtual	~Animal(void);

		Animal&	operator=(Animal const & instance);

	protected:

		std::string	_type;

	public:

		std::string const &			get_type(void) const;
		virtual void				make_sound(void) const = 0;
		virtual void				set_idea(std::string const & idea, size_t idx) = 0;
		virtual std::string const &	get_idea(size_t idx) const = 0;

};
