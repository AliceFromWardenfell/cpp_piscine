#pragma once

#include "IMateriaSource.class.hpp"

#define	ARCHIVE_CAPACITY 4

class MateriaSource : public IMateriaSource
{
	public:

		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(MateriaSource const & instance);

		MateriaSource&	operator=(MateriaSource const & instance);

	private:

		AMateria*	_archive[ARCHIVE_CAPACITY];
		short		_curr_slot;

		void		_init_archive(void);

	public:

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);

};
