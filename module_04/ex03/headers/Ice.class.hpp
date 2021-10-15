#pragma once

#include "AMateria.class.hpp"

class Ice : public AMateria
{
	public:

		Ice(void);
		Ice(Ice const & instance);
		~Ice(void);

	private:
	
		Ice&	operator=(Ice const & instance);
	
	public:
		
		AMateria*	clone(void) const;
		void		use(ICharacter& target);

};
