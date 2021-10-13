#include <iostream>

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"

void	test(Dog some_dog)
{
	std::cout << "Idea: " << some_dog.get_idea(10) << " - sharik" << std::endl;
}

int		main(void)
{
	// std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	// {
	// 	Animal	useless;
	// 	useless.make_sound();
	// }
	
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	
	{
		Dog	rex;
		rex.make_sound();
	}
	
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	{
		Cat	puss_in_boots;
		puss_in_boots.make_sound();
	}

	// std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	// {
	// const Animal* j = new Dog();
	// j->make_sound();
	// const Animal* i = new Cat();
	// i->make_sound();
	// delete j;
	// delete i;
	// }

	// std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	// {
	// Dog basic;
	// basic.set_idea("basic idea", 0);
	// {
	// Dog tmp = basic;
	// }
	// std::cout << "Idea: " << basic.get_idea(0) << " - basic" << std::endl;
	// }

	// std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	// {
	// Dog	sharik;
	// sharik.set_idea("spoil the furniture", 10);
	// std::cout << "Idea: " << sharik.get_idea(10) << " - sharik" << std::endl;
	// test(sharik);
	// std::cout << "Idea: " << sharik.get_idea(10) << " - sharik" << std::endl;
	// }

	// std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	// {
	// Dog	sharik;
	// sharik.set_idea("spoil the furniture", 10);
	// std::cout << "Idea: " << sharik.get_idea(10) << " - sharik" << std::endl;
	// std::cout << "Idea: " << sharik.get_idea(20) << " - sharik" << std::endl;
	// Dog	venom;
	// venom.set_idea("absorb", 20);
	// std::cout << "Idea: " << venom.get_idea(10) << " - venom" << std::endl;
	// std::cout << "Idea: " << venom.get_idea(20) << " - venom" << std::endl;
	// std::cout << "Here happend assignmnet" << std::endl;
	// sharik = venom;
	// std::cout << "Idea: " << sharik.get_idea(10) << " - sharik (actually, not anymore)" << std::endl;
	// std::cout << "Idea: " << sharik.get_idea(20) << " - sharik (actually, not anymore)" << std::endl;
	// }

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	
	return 0;
}
