#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>

class Zombie
{
	public:

		Zombie(std::string name);
		~Zombie(void);

	private:

		std::string	_name;

	public:

		void	announce(void) const;

};

#endif