#pragma once

#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & instance);
		virtual ~DiamondTrap(void);

		DiamondTrap&	operator=(DiamondTrap const & instance);

	private:

		std::string	_name;

	public:

		void	attack(std::string const & target) const;
		void	take_damage(unsigned int amount);
		void	be_repaired(unsigned int amount);
		void	who_am_i() const;

};