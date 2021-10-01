#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie	*zombie_horde;
	
	zombie_horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		zombie_horde[i].set_name(name);
	return (zombie_horde);
}
