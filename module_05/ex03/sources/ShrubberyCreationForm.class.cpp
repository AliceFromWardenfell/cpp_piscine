#include "ShrubberyCreationForm.class.hpp"
#include <iomanip>
#include <fstream>

// CONSTRUCTORS:

ShrubberyCreationForm::ShrubberyCreationForm(void)
	:	Form("Shrubbery_Creation_Form", 145, 137), _target(TARGET_DEF)
{
	std::cout << this->get_name() << " has been created by default (derived)" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
	:	Form("Shrubbery_Creation_Form", 145, 137), _target(target)
{
	std::cout << this->get_name() << " has been created specifically (derived)" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & instance)
	:	Form(instance.get_name(), instance.get_grade_to_sign(), instance.get_grade_to_exec()),
		_target(instance._target)
{
	std::cout << this->get_name() << " has been created by cloning (derived)" << std::endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << this->get_name() << " has been torn (derived)" << std::endl;
	return;
}

// OVERLOADS:

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &)
{
	return *this;
}

// PUBLIC FUNCTIONS:

void		ShrubberyCreationForm::action(void) const
{
	std::ofstream	out((this->_target + "_shrubbery").c_str());
	
	out << ASCII_TREE;
	out.close();

	return;
}
