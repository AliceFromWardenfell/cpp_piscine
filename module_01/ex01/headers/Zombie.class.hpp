#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>

class Zombie
{
	public:

		Zombie(void);
		~Zombie(void);

	private:

		std::string	_name;

	public:

		void	set_name(std::string name);
		void	announce(void) const;

};

#endif