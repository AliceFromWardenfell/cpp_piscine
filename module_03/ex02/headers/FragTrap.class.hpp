# pragma once

#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap(const char *name);
		FragTrap(FragTrap const & instance);
		virtual ~FragTrap(void);

		FragTrap&	operator=(FragTrap const & instance);

		void	attack(std::string const & target) const;
		void	take_damage(unsigned int amount);
		void	be_repaired(unsigned int amount);
		void	highFivesGuys(void);
};
