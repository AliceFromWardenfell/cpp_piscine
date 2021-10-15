#include "MateriaSource.class.hpp"

// CONSTRUCTORS:

MateriaSource::MateriaSource(void)
	:	_curr_slot(0)
{
	_init_archive();
	return;
}

MateriaSource::MateriaSource(MateriaSource const & instance)
{
	this->_curr_slot = instance._curr_slot;
	for (size_t i = 0; i < ARCHIVE_CAPACITY; i++)
	{
		if (instance._archive[i])
			this->_archive[i] = instance._archive[i]->clone();
		else
			this->_archive[i] = 0;
	}
	return;
}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < ARCHIVE_CAPACITY; i++)
		if (this->_archive[i])
			delete this->_archive[i];
	return;
}

// OVERLOADS:

MateriaSource&	MateriaSource::operator=(MateriaSource const & instance)
{
	if (this != &instance)
	{
		this->_curr_slot = instance._curr_slot;
		for (size_t i = 0; i < ARCHIVE_CAPACITY; i++)
		{
			if (this->_archive[i])
			{
				delete this->_archive[i];
				this->_archive[i] = 0;
			}
			if (instance._archive[i])
				this->_archive[i] = instance._archive[i]->clone();
			else
				this->_archive[i] = 0;
		}
	}
	return *this;
}

// PUBLIC FUNCTIONS:

void		MateriaSource::learnMateria(AMateria* instance)
{
	if (!instance)
		return;
	if (_curr_slot >= ARCHIVE_CAPACITY)
	{
		std::cout	<< "Can't learn the "
					<< instance->get_type()
					<< ": archive is full"
					<< std::endl;
		return;
	}
	
	this->_archive[_curr_slot] = instance->clone();
	_curr_slot++;

	return;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < ARCHIVE_CAPACITY; i++)
		if (this->_archive[i] && !type.compare(this->_archive[i]->get_type()))
			return (this->_archive[i]->clone());
	
	std::cout << "Materia " << type << " hasn't been learned" << std::endl;
	return 0;
}

// PRIVATE FUNCTIONS:

void	MateriaSource::_init_archive(void)
{
	for (size_t i = 0; i < ARCHIVE_CAPACITY; i++)
		this->_archive[i] = 0;
	return;
}
