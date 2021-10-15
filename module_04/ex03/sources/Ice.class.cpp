#include "Ice.class.hpp"

// CONSTRUCTORS:

Ice::Ice(void)
	:	AMateria("ice")
{
    return;
}

Ice::Ice(Ice const & instance)
	:	AMateria(instance._type)
{
	return;
}

Ice::~Ice(void)
{
    return;
}

// PUBLIC FUNCTIONS:

AMateria* Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout	<< "\033[36m* shoots an ice bolt at "
				<< target.getName()
				<< " *\033[0m"
				<< std::endl;
	return;
}
