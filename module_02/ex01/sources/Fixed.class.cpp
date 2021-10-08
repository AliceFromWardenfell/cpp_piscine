#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

int const Fixed::_f_bits = 8;
int const Fixed::_scale = 1 << _f_bits;

// CONSTRUCTORS:

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

Fixed::Fixed(const int int_val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = int_val << _f_bits;
	return;
}

Fixed::Fixed(const float float_val)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(float_val * (float)_scale);
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

// OVERLOAD functions:

Fixed&	Fixed::operator=(Fixed const & instance)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &instance)
		this->_value = instance.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Fixed const & instance)
{
	std::cout << instance.toFloat();
	return out;
}

// PUBLIC functions:

int		Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_value) / (float)_scale);
}

int		Fixed::toInt(void) const
{
	return (this->_value / _scale);
}
