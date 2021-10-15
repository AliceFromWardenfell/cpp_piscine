#pragma once

#include <iostream>
#include "ICharacter.class.hpp"

class AMateria
{
	public:

		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & instance);
		virtual	~AMateria(void);

	private:

		AMateria&	operator=(AMateria const & instance);

	protected:

		std::string const	_type;

	public:

		std::string const &	get_type(void) const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

};
