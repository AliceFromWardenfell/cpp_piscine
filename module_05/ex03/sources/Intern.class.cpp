#include "Intern.class.hpp"

// CONSTRUCTORS:

Intern::Intern(void)
{
	std::cout << "Intern has been born by default" << std::endl;
	return;
}

Intern::Intern(Intern const &)
{
	std::cout << "Intern has been born by cloning" << std::endl;
	return;
}

Intern::~Intern(void)
{
	std::cout << "Intern has died" << std::endl;
	return;
}

// OVERLOADS:

Intern&	Intern::operator=(Intern const &)
{
	return *this;
}

// PRIVATE FUNCTIONS:

Form*	Intern::shrubbery_creation_form_create(std::string const & target) const
{
	std::cout << "\033[90mIntern has just created \033[37mshrubbery_creation_form\033[0m" << std::endl;	
	return new ShrubberyCreationForm(target);
}

Form*	Intern::roboto_my_request_form_create(std::string const & target) const
{
	std::cout << "\033[90mIntern has just created \033[37mroboto_my_request_form\033[0m" << std::endl;
	return new RobotomyRequestForm(target);
}

Form*	Intern::presidential_pardon_form_create(std::string const & target) const
{
	std::cout << "\033[90mIntern has just created \033[37mpresidential_pardon_form\033[0m" << std::endl;
	return new PresidentialPardonForm(target);
}

Form*	Intern::form_creation_failed(std::string const & form_name) const
{
	std::cout << "\033[31mIntern is too stupid to create \033[37m" << form_name << "\033[31m, sorry\033[0m" << std::endl;
	return 0;
}

// PUBILC FUNCTIONS:

Form*	Intern::make_form(std::string const & form_name, std::string const & target) const
{
	size_t	page_number;

	for (page_number = 0; page_number < 3; page_number++)
		if (!form_name.compare(_book[page_number].form_name))
			return (this->*_book[page_number].func_ptr)(target);
	return (this->*_book[page_number].func_ptr)(form_name);
}

// STATIC MEMBERS:

Intern::t_page const	Intern::_book[4] = 
{
	{ "shrubbery_creation_form",	&Intern::shrubbery_creation_form_create },
	{ "roboto_my_request_form",		&Intern::roboto_my_request_form_create },
	{ "presidential_pardon_form",	&Intern::presidential_pardon_form_create },
	{ "", 							&Intern::form_creation_failed }
};
