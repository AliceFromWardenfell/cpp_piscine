#include "RobotomyRequestForm.class.hpp"
#include <iomanip>
#include <cstdlib>

// CONSTRUCTORS:

RobotomyRequestForm::RobotomyRequestForm(void)
	:	Form("Roboto_my_Request_Form", 72, 45), _target(TARGET_DEF)
{
	std::cout << this->get_name() << " has been created by default (derived)" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
	:	Form("Roboto_my_Request_Form", 72, 45), _target(target)
{
	std::cout << this->get_name() << " has been created specifically (derived)" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & instance)
	:	Form(instance.get_name(), instance.get_grade_to_sign(), instance.get_grade_to_exec()),
		_target(instance._target)
{
	std::cout << this->get_name() << " has been created by cloning (derived)" << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << this->get_name() << " has been torn (derived)" << std::endl;
	return;
}

// OVERLOADS:

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &)
{
	return *this;
}

// PUBLIC FUNCTIONS:

void		RobotomyRequestForm::action(void) const
{
	std::cout << "\033[92mDrrdrdr!@#$DR!@#@$%@#$%#!Drrr...@#@!!#$\033[0m" << std::endl;
	
	std::srand(time(0));
	bool p = std::rand() % 2;

	if (p)
		std::cout << "\033[92;1m" << this->_target << " \033[0;92mhas been robotomized successfully\033[0m" << std::endl;
	else
		std::cout << "\033[31mCRITICAL ERROR!\033[0m" << std::endl;
	return;
}
