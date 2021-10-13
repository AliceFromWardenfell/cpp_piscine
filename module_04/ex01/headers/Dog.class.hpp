#pragma once

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Dog : public Animal
{
	public:
		
		Dog(void);
		Dog(Dog const & instance);
		virtual ~Dog(void);

		Dog&	operator=(Dog const & instance);

		void	make_sound(void) const;

	private:

		Brain*	_brain_dog;

	public:

		void				set_idea(std::string const & idea, size_t idx);
		std::string const &	get_idea(size_t idx) const;

};
