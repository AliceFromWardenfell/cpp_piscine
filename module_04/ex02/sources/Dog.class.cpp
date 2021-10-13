#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include <iostream>

// CONSTRUCTORS:

Dog::Dog(void)
	:	Animal("Dog"), _brain_dog(new Brain())
{
	std::cout << "\tDefault \033[36mdog\033[0m has been constructed" << std::endl;
	return;
}

Dog::Dog(Dog const & instance)
{
	this->_type = instance._type;
	this->_brain_dog = new Brain(*instance._brain_dog);
	std::cout << "\tCopy \033[36mdog\033[0m has been constructed" << std::endl;
	return;
}

Dog::~Dog(void)
{
	delete _brain_dog;
	std::cout << "\t\033[36mDog\033[0m has been destructed" << std::endl;
	return;
}

// OVERLOADS:

Dog&	Dog::operator=(Dog const & instance)
{
	if (this != &instance)
	{
		Brain	*tmp = this->_brain_dog;
		this->_type = instance._type;
		this->_brain_dog = new Brain(*instance._brain_dog);
		delete tmp;
	}
	return *this;
}

// PUBLIC FUNCTIONS:

void	Dog::make_sound(void) const
{
	std::cout << "\033[36m" << this->_type << ": \033[36;1mWOOF!\033[0m" << std::endl;
	return;
}

void	Dog::set_idea(std::string const & idea, size_t idx)
{
	this->_brain_dog->set_idea(idea, idx);
	return;
}

std::string const &	Dog::get_idea(size_t idx) const
{
	return (this->_brain_dog->get_idea(idx));
}
