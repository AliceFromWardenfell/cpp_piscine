#pragma once

#include <iostream>

class ClapTrap
{
	public:
		
		ClapTrap(void);
		ClapTrap(std::string const & name);
		ClapTrap(std::string const & name, short hitpoints, short energy_points, short attack_damage);
		ClapTrap(ClapTrap const & instance);
		virtual ~ClapTrap(void);

		ClapTrap&	operator=(ClapTrap const & instance);

	protected:

		std::string const	_name;
		short				_hitpoints;
		short				_energy_points;
		short				_attack_damage;

	public:

		virtual void	attack(std::string const & target) const;
		virtual void	take_damage(unsigned int amount);
		virtual void	be_repaired(unsigned int amount);

};