#include "Main.hpp"

void	prompt(void)
{
	std::cout	<< std::endl
				<< "\033[37;1mUSAGE:\033[0m ./karenFilter \033[33mlog_level\033[0m"
				<< std::endl
				<< "\033[33mlog_level:\033[0m 'DEBUG' or 'INFO' or 'WARNING' or 'ERROR'"
				<< std::endl << std::endl;
	
	return;
}
