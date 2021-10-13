#include "WrongAnimal.class.hpp"
#include <iostream>

// CONSTRUCTORS:

WrongAnimal::WrongAnimal(void)
	:	_type("NULL")
{
	std::cout << "\tDefault \033[97mwrong animal\033[0m has been constructed" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const char * type)
	:	_type(type)
{
	std::cout << "\tSpecific \033[97mwrong animal\033[0m has been constructed" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & instance)
{
	this->_type = instance._type;
	std::cout << "\tCopy \033[97mwrong animal\033[0m has been constructed" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\t\033[97mWrong animal\033[0m has been destructed" << std::endl;
	return;
}

// OVERLOADS:

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & instance)
{
	if (this != &instance)
		this->_type = instance._type;
	return *this;
}

// PUBLIC FUNCTIONS:

std::string const &	WrongAnimal::get_type(void) const
{
	return (this->_type);
}

void	WrongAnimal::make_sound(void) const
{
	std::cout << "\033[97;1m*silence*\033[0m" << std::endl;
	return;
}
