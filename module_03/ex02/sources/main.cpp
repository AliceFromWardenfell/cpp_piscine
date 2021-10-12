#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"

int		main(void)
{
	FragTrap	ft_zero("Zero");

	ft_zero.attack("Wall");
	ft_zero.take_damage(100);
	ft_zero.be_repaired(100);
	ft_zero.take_damage(100);
	ft_zero.be_repaired(100);

	ft_zero.high_fives_guys();

	return 0;
}