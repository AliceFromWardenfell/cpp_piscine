#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include <iostream>

// CONSTRUCTORS:

Cat::Cat(void)
	:	Animal("Cat"), _brain_cat(new Brain())
{
	std::cout << "\tDefault \033[35mcat\033[0m has been constructed" << std::endl;
	return;
}

Cat::Cat(Cat const & instance)
{
	this->_type = instance._type;
	this->_brain_cat = new Brain(*instance._brain_cat);
	std::cout << "\tCopy \033[35mcat\033[0m has been constructed" << std::endl;
	return;
}

Cat::~Cat(void)
{
	delete _brain_cat;
	std::cout << "\t\033[35mCat\033[0m has been destructed" << std::endl;
	return;
}

// OVERLOADS:

Cat&	Cat::operator=(Cat const & instance)
{
	if (this != &instance)
	{
		Brain	*tmp = this->_brain_cat;
		this->_type = instance._type;
		this->_brain_cat = new Brain(*instance._brain_cat);
		delete tmp;
	}
	return *this;
}

// PUBLIC FUNCTIONS:

void	Cat::make_sound(void) const
{
	std::cout << "\033[35m" << this->_type << ": \033[35;1m*hiss*\033[0m" << std::endl;
	return;
}

void	Cat::set_idea(std::string const & idea, size_t idx)
{
	this->_brain_cat->set_idea(idea, idx);
	return;
}

std::string const &	Cat::get_idea(size_t idx) const
{
	return (this->_brain_cat->get_idea(idx));
}
