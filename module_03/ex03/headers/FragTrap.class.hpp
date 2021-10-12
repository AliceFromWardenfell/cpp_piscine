#pragma once

#include "ClapTrap.class.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap(void);
		FragTrap(const char *name);
		FragTrap(FragTrap const & instance);
		virtual ~FragTrap(void);

		FragTrap&	operator=(FragTrap const & instance);

		void	attack(std::string const & target) const;
		void	take_damage(unsigned int amount);
		void	be_repaired(unsigned int amount);
		void	high_fives_guys(void);

};
