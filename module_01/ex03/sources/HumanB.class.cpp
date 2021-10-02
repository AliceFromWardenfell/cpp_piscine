#include "Main.hpp"
#include "HumanB.class.hpp"

HumanB::HumanB(const std::string& name)
	: _name(name), _weapon(NULL)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
	return;
}

void	HumanB::attack(void) const
{
	if (!_weapon)
		std::cout << _name << " attacks with his arms" << std::endl;
	else
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	return;
}
