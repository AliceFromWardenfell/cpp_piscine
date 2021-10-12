#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "DiamondTrap.class.hpp"

// CONSTRUCTORS:

DiamondTrap::DiamondTrap(std::string const & name)
	:	ClapTrap(name + "_clap_name", 100, 50, 30), _name(name)
{
	std::cout	<< "\tDiamond trap \""
				<< this->_name
				<< "\" has been planted" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & instance)
	:	ClapTrap(instance)
{
	std::cout	<< "\t(cc) Diamond trap \""
				<< this->_name
				<< "\" has been planted" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout	<< "\tDiamond trap \""
				<< this->_name
				<< "\" has been defused" << std::endl;
}

// OVERLOADS:

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & instance)
{
	if (this != &instance)
	{
		this->_hitpoints = instance._hitpoints;
		this->_energy_points = instance._energy_points;
		this->_attack_damage = instance._attack_damage;
	}
	return *this;
}

// PUBLIC FUNCTIONS:

void	DiamondTrap::attack(std::string const & target) const
{
	ScavTrap::attack(target);
}

void	DiamondTrap::take_damage(unsigned int amount)
{
	FragTrap::take_damage(amount);
}

void	DiamondTrap::be_repaired(unsigned int amount)
{
	FragTrap::be_repaired(amount);
}

void	DiamondTrap::who_am_i(void) const
{
	std::cout	<< "- diamond trap \033[37m\""
				<< this->_name
				<< "\"\033[0m says: "
				<< "My name is \033[33;1m"
				<< _name
				<< " \033[0mand my Grandpa name is \033[33;1m"
				<< ClapTrap::_name
				<< "\033[0m"
				<< std::endl;
}
