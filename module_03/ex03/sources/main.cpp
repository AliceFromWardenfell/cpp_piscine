#include <iostream>
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "DiamondTrap.class.hpp"

int		main(void)
{
	std::cout << std::endl;

	{
	ClapTrap	ct_alpha("Alpha");
	ct_alpha.attack("Tree");
	ct_alpha.take_damage(20);
	ct_alpha.be_repaired(20);
	}
	
	std::cout << std::endl;
	
	{
	ClapTrap*	ct_beta = new ScavTrap("Beta");
	ct_beta->attack("Robot");
	ct_beta->take_damage(20);
	ct_beta->be_repaired(20);
	delete ct_beta;
	}

	std::cout << std::endl;

	{
	DiamondTrap	dt_delta("Delta");
	dt_delta.attack("Thanos");
	dt_delta.take_damage(80);
	dt_delta.ScavTrap::be_repaired(38);
	dt_delta.high_fives_guys();
	dt_delta.guardGate();
	dt_delta.attack("Thanos");
	dt_delta.ScavTrap::take_damage(30);
	dt_delta.guardGate();
	dt_delta.high_fives_guys();
	dt_delta.take_damage(2086);
	dt_delta.who_am_i();
	}

	std::cout << std::endl;

	return 0;
}
