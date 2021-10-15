#pragma once

#include "ICharacter.class.hpp"
#include "AMateria.class.hpp"
#include <iostream>

#define	INVENTORY_CAPACITY 4

class Character : public ICharacter
{
	public:

		Character(void);
		Character(std::string const & name);
		Character(Character const & instance);
		~Character(void);

		Character&	operator=(Character const & instance);

	private:

		std::string	_name;
		AMateria*	_inventory[INVENTORY_CAPACITY];

		void		_init_inventory(void);

	public:

		std::string const &	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

};
