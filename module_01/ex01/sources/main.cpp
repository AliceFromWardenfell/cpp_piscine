#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_horde;

	zombie_horde = zombieHorde(AMOUNT_OF_ZOMBIES, "acolyte");
	for (size_t i = 0; i < AMOUNT_OF_ZOMBIES; i++)
	{
		std::cout << std::setw(INDENT) << i + 1 << ". ";
		zombie_horde[i].announce();
	}
	delete [] zombie_horde;
	return 0;
}