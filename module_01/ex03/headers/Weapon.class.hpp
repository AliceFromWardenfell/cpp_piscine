#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# include <iostream>

class Weapon
{
	public:

		Weapon(const std::string& type);
		~Weapon(void);

	private:

		std::string	_type;

	public:

		const std::string&	getType(void) const;
		void				setType(const std::string& type);

};

#endif