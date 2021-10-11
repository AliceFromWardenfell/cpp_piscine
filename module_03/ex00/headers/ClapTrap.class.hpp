#pragma once

#include <iostream>

class ClapTrap
{
	public:
		
		ClapTrap(const char *name);
		ClapTrap(ClapTrap const & instance);
		~ClapTrap(void);

		ClapTrap&	operator=(ClapTrap const & instance);

	private:

		const char*	_name;
		short		_hitpoints; //change on char
		short		_energy_points;
		short		_attack_damage;

	public:

		void	attack(std::string const & target);
		void	take_damage(unsigned int amount);
		void	be_repaired(unsigned int amount);

};