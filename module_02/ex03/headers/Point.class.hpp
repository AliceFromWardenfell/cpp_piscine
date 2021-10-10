#pragma once

#include "Fixed.class.hpp"
#include <iostream>

class Point
{
	public:

		Point(void);
		Point(float const & x, float const & y);
		Point(Point const & instance);
		~Point(void);

	private:

		Fixed const	_x;
		Fixed const _y;

		Point&	operator=(Point const &);

	public:

		Fixed const	getX(void) const;
		Fixed const	getY(void) const;

};

std::ostream&	operator<<(std::ostream& out, Point const & instance);