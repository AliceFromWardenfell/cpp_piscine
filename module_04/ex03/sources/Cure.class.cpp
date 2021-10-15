#include "Cure.class.hpp"

// CONSTRUCTORS:

Cure::Cure(void)
	:	AMateria("cure")
{
    return;
}

Cure::Cure(Cure const & instance)
	:	AMateria(instance._type)
{
	return;
}

Cure::~Cure(void)
{
	return;
}

// PUBLIC FUNCTIONS:

AMateria* Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout	<< "\033[90m"
				<< "* heals "
				<< target.getName()
				<< "'s wounds *\033[0m"
				<< std::endl;
	return;
}
