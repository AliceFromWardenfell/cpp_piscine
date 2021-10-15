#include "IMateriaSource.class.hpp"
#include "ICharacter.class.hpp"
#include "AMateria.class.hpp"
#include "MateriaSource.class.hpp"
#include "Ice.class.hpp"
#include "Cure.class.hpp"
#include "Character.class.hpp"

void	func(Character instance)
{
	instance.use(0, instance);
	// here must be func that deletes inventory
}

int		main(void)
{
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	
	{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	}

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	
	MateriaSource	archive;

	Cure*	c1 = new Cure();
	Cure*	c2 = new Cure();
	Cure*	c3 = new Cure();
	Cure*	c4 = new Cure();

	archive.learnMateria(c1);
	archive.learnMateria(c2);
	archive.learnMateria(c3);
	archive.learnMateria(c4);

	AMateria *m1 = archive.createMateria("cure");
	if (m1)
		std::cout << m1->get_type() << std::endl;
	else
		std::cout << "m1 is " << m1 << std::endl;
	
	MateriaSource cpy_archive;
	
	Ice*	i1 = new Ice();
	Ice*	i2 = new Ice();

	cpy_archive.learnMateria(i1);
	cpy_archive.learnMateria(i2);

	archive = cpy_archive;

	AMateria *m2 = archive.createMateria("cure");
	if (m2)
		std::cout << m2->get_type() << std::endl;
	else
		std::cout << "m2 is " << m2 << std::endl;

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	Character	spider_man("Peter Parker");
	Character	venom("Eddie Brock");

	spider_man.equip(m1);
	spider_man.equip(m2);

	spider_man.use(0, venom);
	spider_man.use(1, venom);
	spider_man.use(2, venom);
	spider_man.use(3, venom);
	spider_man.use(4, venom);

	venom.equip(i1);
	venom.equip(c1);
	venom.equip(i2);
	venom.equip(c2);

	venom.use(0, spider_man);
	venom.use(1, spider_man);
	venom.use(2, spider_man);
	venom.use(3, spider_man);
	venom.use(4, spider_man);

	delete m1;
	delete m2;
	spider_man = venom;
	std::cout << std::endl << "*Absorbation*" << std::endl << std::endl;

	spider_man.use(0, venom);
	spider_man.use(1, venom);
	spider_man.use(2, venom);
	spider_man.use(3, venom);
	spider_man.use(4, venom);

	std::cout << std::endl;

	spider_man.unequip(2);
	spider_man.equip(c1);
	spider_man.use(2, spider_man);

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	func(spider_man);
	spider_man.use(0, spider_man);

	delete c1;
	delete c2;
	delete c3;
	delete c4;
	
	// here must be func that deletes spiderman's inventory

	delete i1;
	delete i2;

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	return 0;
}