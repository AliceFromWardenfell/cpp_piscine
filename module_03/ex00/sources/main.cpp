#include <iostream>
#include "ClapTrap.class.hpp"

int		main(void)
{
	ClapTrap	clap_trap_alpha("Alpha");
	ClapTrap	clap_trap_tmp("Beta");

	clap_trap_alpha.attack("Tank");
	
	clap_trap_alpha.take_damage(9);
	clap_trap_alpha.take_damage(5);
	
	clap_trap_alpha.be_repaired(2);
	clap_trap_alpha.be_repaired(10);
	
	clap_trap_alpha.take_damage(10);
	clap_trap_alpha.be_repaired(20);
	
	return 0;
}