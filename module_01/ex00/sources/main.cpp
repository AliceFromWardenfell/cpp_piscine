#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_1;

	zombie_1 = newZombie("Arthas Menethil");
	zombie_1->announce();

	randomChump("Kel'Thuzad");

	delete zombie_1;
	return 0;
}