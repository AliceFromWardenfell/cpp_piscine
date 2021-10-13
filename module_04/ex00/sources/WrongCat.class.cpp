#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include <iostream>

// CONSTRUCTORS:

WrongCat::WrongCat(void)
	:	WrongAnimal("WrongCat")
{
	std::cout << "\tDefault \033[90mwrong cat\033[0m has been constructed" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const & instance)
{
	this->_type = instance._type;
	std::cout << "\tCopy \033[90mwrong cat\033[0m has been constructed" << std::endl;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "\t\033[90mWrong cat\033[0m has been destructed" << std::endl;
	return;
}

// OVERLOADS:

WrongCat&	WrongCat::operator=(WrongCat const & instance)
{
	if (this != &instance)
		this->_type = instance._type;
	return *this;
}

// PUBLIC FUNCTIONS:

void	WrongCat::make_sound(void) const
{
	std::cout << "\033[90m" << this->_type << ": \033[90;1m*!@#$%*\033[0m" << std::endl;
	return;
}
