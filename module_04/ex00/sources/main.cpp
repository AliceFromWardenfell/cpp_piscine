#include <iostream>

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongCat.class.hpp"

void	test(Dog some_dog)
{
	some_dog.make_sound();
}

int		main(void)
{
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	
	{
	const Animal*	animal;
	animal = new Animal();
	animal->make_sound();
	delete animal;
	}
	
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	
	{
	const Animal*	animal;
	animal = new Cat();
	animal->make_sound();
	delete animal;
	}

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	{
	const Animal*	animal;
	animal = new Dog();
	animal->make_sound();
	delete animal;
	}

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	
	{
	Dog	dog;
	std::cout << "Type: " << dog.get_type() << std::endl;
	Cat	cat;
	std::cout << "Type: " << cat.get_type() << std::endl;
	}

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	
	{
	const WrongCat*		wrong_cat = new WrongCat();
	wrong_cat->make_sound();
	delete wrong_cat;
	std::cout << std::endl;
	const WrongAnimal*	wrong_animal = new WrongCat();
	wrong_animal->make_sound();
	delete wrong_animal;
	}

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	// {
	// Dog	sharik;
	// test(sharik);
	// }

	// std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	// {
	// Dog	sharik;
	// Dog	venom;
	// std::cout << "Here happend assignmnet" << std::endl;
	// sharik = venom;
	// }

	// std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	
	return 0;
}
