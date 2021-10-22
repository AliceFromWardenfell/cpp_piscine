#include "header.hpp"

int		main(void)
{
	Base*	base = generate();
	
	identify(base);

	identify(*base);

	return 0;
}
