#pragma once

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Cat : public Animal
{
	public:
		
		Cat(void);
		Cat(Cat const & instance);
		virtual ~Cat(void);

		Cat&	operator=(Cat const & instance);

	private:

		Brain*	_brain_cat;

	public:

		void				set_idea(std::string const & idea, size_t idx);
		std::string const &	get_idea(size_t idx) const;
		void				make_sound(void) const;

};
