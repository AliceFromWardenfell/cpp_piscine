#pragma once

#include "AMateria.class.hpp"

class Cure : public AMateria
{
	public:

		Cure(void);
		Cure(Cure const & instance);
		~Cure(void);

	private:

		Cure&	operator=(Cure const & instance);
	
	public:
		
		AMateria*	clone(void) const;
		void		use(ICharacter& target);

};
