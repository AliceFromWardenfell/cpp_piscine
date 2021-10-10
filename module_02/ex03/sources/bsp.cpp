#include "Point.class.hpp"
#include "Main.hpp"

static Fixed sign(Point const & a, Point const & b, Point const & c)
{
	return	(   (a.getX() - c.getX()) * (b.getY() - c.getY()) -
				(b.getX() - c.getX()) * (a.getY() - c.getY())	);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	fixed_null(0);
	Fixed	val1, val2, val3;
	bool	all_negative, all_positive;

	val1 = sign(point, a, b);
	val2 = sign(point, b, c);
	val3 = sign(point, c, a);

	all_negative = (val1 < fixed_null) && (val2 < fixed_null) && (val3 < fixed_null);
	all_positive = (val1 > fixed_null) && (val2 > fixed_null) && (val3 > fixed_null);

	return (all_negative || all_positive);
}
