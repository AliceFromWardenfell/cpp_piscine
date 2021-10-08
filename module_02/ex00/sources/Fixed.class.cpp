#include "Fixed.class.hpp"
#include <iostream>

int const Fixed::_f_bits = 8;

Fixed::Fixed(void)
	: _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed&	Fixed::operator=(Fixed const & instance)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &instance)
		this->_value = instance.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return;
}
