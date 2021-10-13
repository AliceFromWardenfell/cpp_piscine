#include "Animal.class.hpp"
#include <iostream>

// CONSTRUCTORS:

Animal::Animal(void)
	:	_type("NULL")
{
	std::cout << "\tDefault \033[37manimal\033[0m has been constructed" << std::endl;
	return;
}

Animal::Animal(const char * type)
	:	_type(type)
{
	std::cout << "\tSpecific \033[37manimal\033[0m has been constructed" << std::endl;
	return;
}

Animal::Animal(Animal const & instance)
{
	this->_type = instance._type;
	std::cout << "\tCopy \033[37manimal\033[0m has been constructed" << std::endl;
	return;
}

Animal::~Animal(void)
{
	std::cout << "\t\033[37mAnimal\033[0m has been destructed" << std::endl;
	return;
}

// OVERLOADS:

Animal&	Animal::operator=(Animal const & instance)
{
	if (this != &instance)
		this->_type = instance._type;
	return *this;
}

// PUBLIC FUNCTIONS:

std::string const &	Animal::get_type(void) const
{
	return (this->_type);
}

void	Animal::make_sound(void) const
{
	std::cout << "\033[37;1m*silence*\033[0m" << std::endl;
	return;
}
