#include "Fixed.class.hpp"
#include "Point.class.hpp"
#include <iostream>

// CONSTRUCTORS:

Point::Point(void)
	: _x(0), _y(0)
{
	return;
}

Point::Point(Point const & instance)
	:_x(instance.getX()), _y(instance.getY())
{
	*this = instance;
	return;
}

Point::Point(float const & x, float const & y)
	: _x(x), _y(y)
{
	return;
}

Point::~Point(void)
{
	return;
}

// OVERLOAD functions:

Point&	Point::operator=(Point const &)
{
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Point const & instance)
{
	std::cout << "[" << instance.getX() << ";" << instance.getY() << "]";
	return out;
}

// PUBLIC functions:

Fixed const	Point::getX(void) const
{
	return (this->_x);
}

Fixed const	Point::getY(void) const
{
	return (this->_y);
}
