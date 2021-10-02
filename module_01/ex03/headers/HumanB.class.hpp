#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Weapon.class.hpp"

class HumanB
{
	public:

		HumanB(const std::string& name);
		~HumanB(void);

	private:

		const std::string	_name;
		Weapon*				_weapon;

	public:

		void	setWeapon(Weapon& weapon);
		void	attack(void) const;
};

#endif
