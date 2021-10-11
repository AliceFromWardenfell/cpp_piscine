#pragma once

#include <iostream>

class ClapTrap
{
	public:
		
		ClapTrap(const char *name);
		ClapTrap(const char *name, short hitpoints, short energy_points, short attack_damage);
		ClapTrap(ClapTrap const & instance);
		~ClapTrap(void);

		ClapTrap&	operator=(ClapTrap const & instance);

	protected:

		const char*	_name;
		short		_hitpoints;
		short		_energy_points;
		short		_attack_damage;

	public:

		virtual void	attack(std::string const & target) const;
		virtual void	take_damage(unsigned int amount);
		virtual void	be_repaired(unsigned int amount);

};