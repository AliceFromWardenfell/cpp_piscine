#include "header.hpp"

Base*	generate(void)
{
	std::srand((unsigned)time(0));

	switch (rand() % 3 + 1)
	{
		case 1:
			return new A;
		case 2:
			return new B;
		case 3:
			return new C;
	}
	
	return 0;
}

void	identify(Base* ptr)
{
	if (dynamic_cast<A *>(ptr))
		std::cout << 'A' << std::endl;
	if (dynamic_cast<B *>(ptr))
		std::cout << 'B' << std::endl;
	if (dynamic_cast<C *>(ptr))
		std::cout << 'C' << std::endl;
}

void	identify(Base& ref)
{
	try
	{
		ref = dynamic_cast<A &>(ref);
		std::cout << 'A' << std::endl;
	}
	catch (std::exception & ex) {}
	try
	{
		ref = dynamic_cast<B &>(ref);
		std::cout << 'B' << std::endl;
	}
	catch (std::exception & ex) {}
	try
	{
		ref = dynamic_cast<C &>(ref);
		std::cout << 'C' << std::endl;
	}
	catch (std::exception & ex) {}
}
