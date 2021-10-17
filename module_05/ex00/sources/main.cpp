#include "Bureaucrat.class.hpp"

int		main(void)
{
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;	
	try
	{
		Bureaucrat	b1("Greg", 150);
		
		std::cout << b1 << std::endl;
		b1.decrease_grade();
		std::cout << b1 << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << "\033[31mError:\033[0m " << ex.what() << std::endl;
	}

	// std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	// try
	// {
	// 	Bureaucrat	b1("Greg", 150);
		
	// 	std::cout << b1 << std::endl;
	// 	b1.decrease_grade();
	// 	std::cout << b1 << std::endl;
	// }
	// catch (Bureaucrat::GradeTooHighException & ex)
	// {
	// 	std::cout << ex.info << ": " << ex.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooLowException & ex)
	// {
	// 	std::cout << ex.info << ": " << ex.what() << std::endl;
	// }
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	
	return 0;
}
