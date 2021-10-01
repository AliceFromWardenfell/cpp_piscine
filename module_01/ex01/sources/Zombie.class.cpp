#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << std::setw(INDENT + 2) << "" << _name << " has just decomposed" << std::endl;
	return;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
	return;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
