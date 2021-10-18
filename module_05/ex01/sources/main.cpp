#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include <iostream>

int		main(void)
{
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	try
	{
		Bureaucrat	alex("Alex", 84);
		Bureaucrat	greg("Greg", 52);
		Form		certificate("IELTS", 71, 23);

		std::cout	<< std::endl
					<< alex
					<< std::endl
					<< greg
					<< std::endl
					<< certificate
					<< std::endl
					<< std::endl;

		alex.sign_form(certificate);
		std::cout << certificate << std::endl;

		std::cout << std::endl;

		certificate.be_signed(greg);
		std::cout << certificate << std::endl;

		std::cout << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	return 0;
}
