#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *new_life;

	new_life = new Zombie(name);
	return (new_life);
}
