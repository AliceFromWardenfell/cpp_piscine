# include "Character.class.hpp"

// CONSTRUCTORS:

Character::Character(void)
{
	_init_inventory(); //try in init list
	return;
}

Character::Character(std::string const & name)
	:	_name(name)
{
	_init_inventory(); //try in init list
	return;
}

Character::Character(Character const & instance)
{
	this->_name = instance._name;
	
	for (size_t i = 0; i < INVENTORY_CAPACITY; i++)
	{
		if (instance._inventory[i])
			this->_inventory[i] = instance._inventory[i]->clone();
		else
			this->_inventory[i] = 0;
	}
	return;
}

Character::~Character(void)
{
	return;
}

// OVERLOADS:

Character&	Character::operator=(Character const & instance)
{
	if (this != &instance)
	{
		for (size_t i = 0; i < INVENTORY_CAPACITY; i++)
		{
			if (instance._inventory[i])
				this->_inventory[i] = instance._inventory[i]->clone();
			else
				this->_inventory[i] = 0;
		}
		this->_name = instance._name;
	}
	return *this;
}

// PUBLIC FUNCTIONS:

std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	size_t	empty_slot;
	
	if (!m)
	{
		std::cout	<< "\033[37m"
					<< this->_name
					<< ":\033[0m can't equip non existing materia"
					<< std::endl;
		return;
	}

	for (empty_slot = 0; empty_slot < INVENTORY_CAPACITY; empty_slot++)
		if (!_inventory[empty_slot])
			break;
	
	if (empty_slot == INVENTORY_CAPACITY)
	{
		std::cout	<< "\033[37m"
					<< this->_name
					<< ":\033[0m can't equip the "
					<< m->get_type()
					<< " - inventory is full"
					<< std::endl;
		return;
	}
	
	_inventory[empty_slot] = m;
	std::cout	<< "\033[37m"
				<< this->_name
				<< ":\033[0m "
				<< m->get_type()
				<< " has been equiped"
				<< std::endl;
	
	return;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > INVENTORY_CAPACITY - 1)
		return;
	if (!_inventory[idx])
		return;
	
	std::cout	<< "\033[37m"
				<< this->_name
				<< ":\033[0m "
				<< _inventory[idx]->get_type()
				<< " has been unequiped"
				<< std::endl;
	_inventory[idx] = 0;
	
	return;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > INVENTORY_CAPACITY - 1)
	{
		std::cout	<< "\033[37m"
					<< this->_name
					<< ":\033[0m use: invalid index of inventory slot"
					<< std::endl;
		return;
	}

	if (!_inventory[idx])
	{
		std::cout	<< "\033[37m"
					<< this->_name
					<< ":\033[0m use: inventory slot is empty"
					<< std::endl;
		return;
	}

	this->_inventory[idx]->use(target);

	return;
}

// PRIVATE FUNCTIONS:

void	Character::_init_inventory(void)
{
	for (size_t i = 0; i < INVENTORY_CAPACITY; i++)
		this->_inventory[i] = 0;
	return;
}
