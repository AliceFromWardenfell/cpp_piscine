#include "ClapTrap.class.hpp"
#include <iostream>

// CONSTRUCTORS:

ClapTrap::ClapTrap(const char *name)
	:	_name(name),
		_hitpoints(10),
		_energy_points(10),
		_attack_damage(0)
{
	std::cout	<< "\tClap trap \""
				<< this->_name
				<< "\" has been planted" << std::endl;
	return;
}

ClapTrap::ClapTrap(const char *name, short hitpoints, short energy_points, short attack_damage)
	:	_name(name),
		_hitpoints(hitpoints),
		_energy_points(energy_points),
		_attack_damage(attack_damage)
{
	std::cout	<< "\tClap trap \""
				<< this->_name
				<< "\" has been planted" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & instance)
	:	_name(instance._name),
		_hitpoints(instance._hitpoints),
		_energy_points(instance._energy_points),
		_attack_damage(instance._attack_damage)
{
	std::cout	<< "\t(cc) Clap trap \""
				<< this->_name
				<< "\" has been planted" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout	<< "\tClap trap \""
				<< this->_name
				<< "\" has been defused" << std::endl;
	return;
}

// OVERLOADS:

ClapTrap&	ClapTrap::operator=(ClapTrap const & instance)
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

void	ClapTrap::attack(std::string const & target) const
{
	std::cout	<< "- clap trap \033[37m\""
				<< this->_name
				<< "\"\033[0m has only scared the \033[37m"
				<< target
				<< "\033[0m, causing \033[37m"
				<< this->_attack_damage
				<< " \033[31mdamage point(s)\033[0m"
				<< std::endl;
}

void	ClapTrap::take_damage(unsigned int amount)
{
	this->_hitpoints -= amount;

	std::cout	<< "- clap trap \033[37m\""
				<< this->_name
				<< "\"\033[0m has taken \033[37m"
				<< amount
				<< " \033[31mdamage point(s)\033[0m and ";
	
	if (this->_hitpoints < 1)
	{
		this->_hitpoints = 0;
		std::cout << "\033[30mdied\033[0m" << std::endl;
	}
	else
		std::cout	<< "now has \033[37m"
					<< this->_hitpoints
					<< " \033[35mhitpoint(s)\033[0m"
					<< std::endl;
}

void	ClapTrap::be_repaired(unsigned int amount)
{
	int	 required_ep = (amount + 1) / 2;
	
	std::cout	<< "- clap trap \033[37m\""
				<< this->_name;
	
	if (this->_energy_points > required_ep)
	{
		std::cout	<< "\"\033[0m has spent \033[37m"
					<< required_ep;

		this->_energy_points -= required_ep;
		this->_hitpoints += amount;		
	}
	else
	{
		std::cout	<< "\"\033[0m has spent all his \033[37m" 
					<< this->_energy_points;
		
		amount = this->_energy_points; 
		this->_hitpoints += amount;
		this->_energy_points = 0;
	}
	if (this->_hitpoints > 10)
		this->_hitpoints = 10;

	std::cout	<< " \033[36menergy point(s)\033[0m for restoring \033[37m"
				<< amount
				<< " \033[35mhitpoint(s)\033[0m and now has \033[37m"
				<< this->_hitpoints
				<< "\033[0m"
				<< std::endl;
}
