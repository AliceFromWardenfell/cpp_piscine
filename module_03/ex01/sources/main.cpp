#include <iostream>
#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int		main(void)
{
	ScavTrap*	st_alpha = new ScavTrap("Alpha");
	ClapTrap*	ct_beta;
	ClapTrap	ct_gamma("Gamma");

	st_alpha->attack("Robot");
	ct_gamma.attack("Enemy");
	ct_beta = st_alpha;

	ct_beta->attack("Tank");
	ct_beta->take_damage(15);
	ct_beta->be_repaired(10);

	st_alpha->take_damage(100);
	st_alpha->be_repaired(30);
	st_alpha->guardGate();
	st_alpha->attack("Robot");
	st_alpha->guardGate();

	delete st_alpha;

	return 0;
}