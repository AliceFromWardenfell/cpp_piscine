#include "Main.hpp"
#include "Fixed.class.hpp"

// fixed max = 8388607
// fixed min = -8388608

int		main(void)
{
	Fixed	a;
	Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl << std::endl;

	Fixed x(11);
	Fixed y(22);

	std::cout << x << " >  " << y << ": " << (x > y) << std::endl;
	std::cout << x << " <  " << y << ": " << (x < y) << std::endl;
	std::cout << x << " >= " << y << ": " << (x >= y) << std::endl;
	std::cout << x << " <= " << y << ": " << (x <= y) << std::endl;
	std::cout << x << " == " << y << ": " << (x == y) << std::endl;
	std::cout << x << " != " << y << ": " << (x != y) << std::endl;
	std::cout << std::endl;
	std::cout << x << " + " << y << " = " << (x + y) << std::endl;
	std::cout << x << " - " << y << " = " << (x - y) << std::endl;
	std::cout << x << " * " << y << " = " << (x * y) << std::endl;
	std::cout << x << " / " << y << " = " << (x / y) << std::endl;

	return 0;
}