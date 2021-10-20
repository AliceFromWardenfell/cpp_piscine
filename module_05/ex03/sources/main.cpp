#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "Form.class.hpp"
#include "Intern.class.hpp"
#include <iostream>

int		main(void)
{
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	{
	Intern	nobody;

	std::cout << std::endl;

	Form*	form1 = nobody.make_form("shrubbery_creation_form", "Important person");
	std::cout << std::endl;
	Form*	form2 = nobody.make_form("roboto_my_request_form", "Important person");
	std::cout << std::endl;
	Form*	form3 = nobody.make_form("presidential_pardon_form", "Important person");
	std::cout << std::endl;
	Form*	form4 = nobody.make_form("the_simplest_form_in_the world", "Important person");

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	if (form1)
		std::cout << *form1 << std::endl;
	if (form2)
		std::cout << *form2 << std::endl;
	if (form3)
		std::cout << *form3 << std::endl;
	if (form4)
		std::cout << *form4 << std::endl;

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	if (form1)
		delete form1;
	if (form2)
		delete form2;
	if (form3)
		delete form3;
	if (form4)
		delete form4;

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	}

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	return 0;
}
