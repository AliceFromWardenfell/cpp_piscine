#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "Form.class.hpp"
#include <iostream>

int		main(void)
{
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	{
	Bureaucrat	greg("Greg", 1);
	ShrubberyCreationForm	form1("pink");
	RobotomyRequestForm		form2("Mankind");
	PresidentialPardonForm	form3("Zafod Beeblebrox");

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	std::cout << form1 <<  std::endl << form2 <<  std::endl << form3 << std::endl;

	std::cout << std::endl;

	greg.sign_form(form1);
	greg.sign_form(form2);
	greg.sign_form(form3);

	std::cout << std::endl;
	
	greg.execute_form(form1);
	greg.execute_form(form2);
	greg.execute_form(form3);

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	}

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	return 0;
}
