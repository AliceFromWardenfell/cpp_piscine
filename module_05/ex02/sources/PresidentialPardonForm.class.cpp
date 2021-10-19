#include "PresidentialPardonForm.class.hpp"
#include <iomanip>

// CONSTRUCTORS:

PresidentialPardonForm::PresidentialPardonForm(void)
	:	Form("Presidential_Pardon_Form", 25, 5), _target(TARGET_DEF)
{
	std::cout << this->get_name() << " has been created by default (derived)" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
	:	Form("Presidential_Pardon_Form", 25, 5), _target(target)
{
	std::cout << this->get_name() << " has been created specifically (derived)" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & instance)
	:	Form(instance.get_name(), instance.get_grade_to_sign(), instance.get_grade_to_exec()),
		_target(instance._target)
{
	std::cout << this->get_name() << " has been created by cloning (derived)" << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << this->get_name() << " has been torn (derived)" << std::endl;
	return;
}

// OVERLOADS:

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &)
{
	return *this;
}

// PUBLIC FUNCTIONS:

void		PresidentialPardonForm::action(void) const
{
	std::cout << "\033[96;1m" << this->_target << " \033[0;96mhas been pardoned by Zafod Beeblebrox\033[0m" << std::endl;
	return;
}
