#include "Main.hpp"
#include "HumanA.class.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon)
	: _name(name), _weapon(weapon)
{
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
	return;
}
