#pragma once

#include <iostream>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

#define TARGET_DEF "target"
#define FNAME_DEF "piece of paper"

class RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & instance);
		~RobotomyRequestForm(void);

	private:

		std::string	const	_target;

		RobotomyRequestForm&	operator=(RobotomyRequestForm const &);

	public:

		void		action(void) const;

};