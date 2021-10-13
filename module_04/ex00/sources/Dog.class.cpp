#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include <iostream>

// CONSTRUCTORS:

Dog::Dog(void)
	:	Animal("Dog")
{
	std::cout << "\tDefault \033[36mdog\033[0m has been constructed" << std::endl;
	return;
}

Dog::Dog(Dog const & instance)
{
	this->_type = instance._type;
	std::cout << "\tCopy \033[36mdog\033[0m has been constructed" << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << "\t\033[36mDog\033[0m has been destructed" << std::endl;
	return;
}

// OVERLOADS:

Dog&	Dog::operator=(Dog const & instance)
{
	if (this != &instance)
		this->_type = instance._type;
	return *this;
}

// PUBLIC FUNCTIONS:

void	Dog::make_sound(void) const
{
	std::cout << "\033[36m" << this->_type << ": \033[36;1mWOOF!\033[0m" << std::endl;
	return;
}
