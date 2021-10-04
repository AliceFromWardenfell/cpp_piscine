#include "Main.hpp"

int	printr_error(const std::string& str, const bool& flag)
{
	std::cout << "\033[31merror: \033[0m" << str << std::endl;
	
	if (flag)
		prompt();
	
	return (ERROR);
}