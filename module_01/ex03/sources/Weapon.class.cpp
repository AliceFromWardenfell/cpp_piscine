#include "Main.hpp"
#include "Weapon.class.hpp"

Weapon::Weapon(const std::string& type)
	: _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

void	Weapon::setType(const std::string& type)
{
	_type = type;
	return;
}

const std::string&	Weapon::getType(void) const
{
	const std::string&	type = _type;
	return (type);
}
