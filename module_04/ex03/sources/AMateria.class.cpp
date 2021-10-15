#include "AMateria.class.hpp"
#include <iostream>

// CONSTRUCTORS:

AMateria::AMateria(void)
{
    return;
}

AMateria::AMateria(std::string const & type)
    :   _type(type)
{
    return;
}

AMateria::AMateria(AMateria const & instance)
	:	_type(instance._type)
{
	return;
}

// PUBLIC FUNCTIONS:

AMateria::~AMateria(void)
{
	return;
}

std::string const &	AMateria::get_type(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* makes the " << target.getName() << " laugh *" << std::endl;
	return;
}
