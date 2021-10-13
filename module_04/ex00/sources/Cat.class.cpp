#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include <iostream>

// CONSTRUCTORS:

Cat::Cat(void)
	:	Animal("Cat")
{
	std::cout << "\tDefault \033[35mcat\033[0m has been constructed" << std::endl;
	return;
}

Cat::Cat(Cat const & instance)
{
	this->_type = instance._type;
	std::cout << "\tCopy \033[35mcat\033[0m has been constructed" << std::endl;
	return;
}

Cat::~Cat(void)
{
	std::cout << "\t\033[35mCat\033[0m has been destructed" << std::endl;
	return;
}

// OVERLOADS:

Cat&	Cat::operator=(Cat const & instance)
{
	if (this != &instance)
		this->_type = instance._type;
	return *this;
}

// PUBLIC FUNCTIONS:

void	Cat::make_sound(void) const
{
	std::cout << "\033[35m" << this->_type << ": \033[35;1m*hiss*\033[0m" << std::endl;
	return;
}
