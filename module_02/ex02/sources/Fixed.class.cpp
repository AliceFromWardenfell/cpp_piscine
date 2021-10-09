#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

int const Fixed::_f_bits = 8;
int const Fixed::_scale = 1 << _f_bits;

// CONSTRUCTORS:

Fixed::Fixed(void)
	: _value(0)
{
	return;
}

Fixed::Fixed(Fixed const & instance)
{
	*this = instance;
	return;
}

Fixed::Fixed(const int int_val)
{
	this->_value = int_val << _f_bits;
	return;
}

Fixed::Fixed(const float float_val)
{
	this->_value = roundf(float_val * (float)_scale);
	return;
}

Fixed::~Fixed(void)
{
	return;
}

// OVERLOAD functions:

bool	Fixed::operator>(Fixed const & r_instance) const
{
	return (this->_value > r_instance.getRawBits());
}

bool	Fixed::operator<(Fixed const & r_instance) const
{
	return (this->_value < r_instance.getRawBits());
}

bool	Fixed::operator>=(Fixed const & r_instance) const
{
	return (this->_value >= r_instance.getRawBits());
}

bool	Fixed::operator<=(Fixed const & r_instance) const
{
	return (this->_value <= r_instance.getRawBits());
}

bool	Fixed::operator==(Fixed const & r_instance) const
{
	return (this->_value == r_instance.getRawBits());
}

bool	Fixed::operator!=(Fixed const & r_instance) const
{
	return (this->_value != r_instance.getRawBits());
}

Fixed&	Fixed::operator=(Fixed const & instance)
{
	if (this != &instance)
		this->_value = instance.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const & r_instance) const
{
	Fixed	new_instance;

	new_instance.setRawBits(this->_value + r_instance.getRawBits());
	return(new_instance);
}

Fixed	Fixed::operator-(Fixed const & r_instance) const
{
	Fixed	new_instance;

	new_instance.setRawBits(this->_value - r_instance.getRawBits());
	return(new_instance);
}

Fixed	Fixed::operator*(Fixed const & r_instance) const
{
	Fixed		new_instance;

	new_instance.setRawBits((long long)this->_value * (long long)r_instance.getRawBits() >> _f_bits);
	return(new_instance);
}

Fixed	Fixed::operator/(Fixed const & r_instance) const
{
	Fixed	new_instance;

	new_instance.setRawBits((int)roundf(((long long)this->_value << _f_bits) / (float)r_instance.getRawBits()));
	return(new_instance);
}

Fixed	Fixed::operator++(void)
{
	Fixed	new_instance;

	new_instance.setRawBits(++this->_value);
	return(new_instance);
}

Fixed	Fixed::operator--(void)
{
	Fixed	new_instance;

	new_instance.setRawBits(--this->_value);
	return(new_instance);
}

Fixed	Fixed::operator++(int)
{
	Fixed	new_instance;

	new_instance.setRawBits(this->_value++);
	return(new_instance);
}

Fixed	Fixed::operator--(int)
{
	Fixed	new_instance;

	new_instance.setRawBits(this->_value++);
	return(new_instance);
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

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return b;
	else
		return a;
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() < b.getRawBits())
		return b;
	else
		return a;
}
