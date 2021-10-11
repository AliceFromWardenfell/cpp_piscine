#pragma once

#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap(const char *name);
		ScavTrap(ScavTrap const & instance);
		virtual ~ScavTrap(void);

		ScavTrap&	operator=(ScavTrap const & instance);

		void	attack(std::string const & target) const;
		void	take_damage(unsigned int amount);
		void	be_repaired(unsigned int amount);
		void	guardGate(void);

};
