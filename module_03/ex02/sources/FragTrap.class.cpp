#include "FragTrap.class.hpp"

// CONSTRUCTORS:

FragTrap::FragTrap(const char *name)
	:	ClapTrap(name, 100, 100, 30)
{
	std::cout	<< "\tFrag trap \""
				<< this->_name
				<< "\" has been planted" << std::endl;
}

FragTrap::FragTrap(FragTrap const & instance)
	:	ClapTrap(instance)
{
	std::cout	<< "\t(cc) Frag trap \""
				<< this->_name
				<< "\" has been planted" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout	<< "\tFrag trap \""
				<< this->_name
				<< "\" has been defused" << std::endl;
}

// OVERLOADS:

FragTrap&	FragTrap::operator=(FragTrap const & instance)
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

void	FragTrap::attack(std::string const & target) const
{
	std::cout	<< "- frag trap \033[37m\""
				<< this->_name
				<< "\"\033[0m has attacked the \033[37m"
				<< target
				<< "\033[0m, causing \033[37m"
				<< this->_attack_damage
				<< " \033[31mdamage point(s)\033[0m"
				<< std::endl;
}

void	FragTrap::take_damage(unsigned int amount)
{
	this->_hitpoints -= amount;

	std::cout	<< "- frag trap \033[37m\""
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

void	FragTrap::be_repaired(unsigned int amount)
{
	int	 required_ep = (amount + 1) / 2;
	
	std::cout	<< "- frag trap \033[37m\""
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
		
		amount = this->_energy_points * 2; 
		this->_hitpoints += amount;
		this->_energy_points = 0;
	}
	if (this->_hitpoints > 100)
		this->_hitpoints = 100;

	std::cout	<< " \033[36menergy point(s)\033[0m for restoring \033[37m"
				<< amount
				<< " \033[35mhitpoint(s)\033[0m and now has \033[37m"
				<< this->_hitpoints
				<< "\033[0m"
				<< std::endl;
}

void	FragTrap::high_fives_guys(void)
{
	std::cout	<< "- frag trap \033[37m\""
				<< this->_name;
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		std::cout	<< "\"\033[0m has spent \033[37m"
					<< "1 \033[36menergy point(s)\033[0m"
					<< " and says \033[33;1m\"HIGH FIVE, GUYS!\"\033[0m"
					<< std::endl;
	}
	else
		std::cout	<< "\"\033[0m didn't have enough \033[37m"
					<< "\033[36menergy point(s)\033[0m"
					<< " for \033[33;1m\"HIGH FIVE, GUYS!\"\033[0m :("
					<< std::endl;
}
