#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include "Weapon.class.hpp"

class HumanA
{
	public:

		HumanA(const std::string& name, Weapon& weapon);
		~HumanA(void);

	private:

		const std::string	_name;
		Weapon&				_weapon;

	public:

		void	attack(void) const;
};

#endif