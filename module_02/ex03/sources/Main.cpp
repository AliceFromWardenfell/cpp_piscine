#include "Main.hpp"
#include "Fixed.class.hpp"
#include "Point.class.hpp"

int		main(void)
{
	Point	a(0, 0);
	Point	b(0, 10);
	Point	c(10, 0);
	Point	x(4, 4);
	bool	result;

	std::cout << std::endl;
	std::cout << "    A: " << a << std::endl;
	std::cout << "    B: " << b << std::endl;
	std::cout << "    C: " << c << std::endl;
	std::cout << "Point: " << x << std::endl;
	std::cout << std::endl;

	result = bsp(a, b, c, x);
	
	std::cout << "Result = " << result;
	if (result)
		std::cout << ": point is inside the triangle" << std::endl;
	else
		std::cout << ": point is outside the triangle" << std::endl;
	std::cout << std::endl;

	return 0;
}
