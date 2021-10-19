#pragma once

#include <iostream>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

#define TARGET_DEF "target"
#define FNAME_DEF "piece of paper"

class PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & instance);
		~PresidentialPardonForm(void);

	private:

		std::string	const	_target;

		PresidentialPardonForm&	operator=(PresidentialPardonForm const &);

	public:

		void		action(void) const;

};