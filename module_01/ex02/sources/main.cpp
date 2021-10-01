#include "header.hpp"

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << std::endl;
	std::cout << "\033[33mThe address of \"str\": \033[0m"	<< &str			<< std::endl;
	std::cout << "\033[33mThe address of \"str\": \033[0m"	<< stringPTR	<< std::endl;
	std::cout << "\033[33mThe address of \"str\": \033[0m"	<< &stringREF	<< std::endl;
	std::cout << std::endl;
	std::cout << "\033[33mThe value of \"str\": \033[0m"	<< *stringPTR	<< std::endl;
	std::cout << "\033[33mThe value of \"str\": \033[0m"	<< stringREF	<< std::endl;
	std::cout << std::endl;

	return 0;
}