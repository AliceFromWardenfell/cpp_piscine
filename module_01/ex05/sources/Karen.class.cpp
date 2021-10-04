#include <map>
#include "Karen.class.hpp"

Karen::Karen(void)
{
	_table["debug"]	= &Karen::debug;
	_table["info"] = &Karen::info;
	_table["warning"] = &Karen::warning;
	_table["error"] = &Karen::error;
	return;
}
Karen::~Karen(void)	{ return; }

//		PRIVATE functions:

void	Karen::debug(void)
{
	std::cout << DEBUG << std::endl;
	return;
}
void	Karen::info(void)
{
	std::cout << INFO << std::endl;
	return;
}
void	Karen::warning(void)
{
	std::cout << WARNING << std::endl;
	return;
}
void	Karen::error(void)
{
	std::cout << ERROR << std::endl;
	return;
}

//		PUBLIC functions:

void	Karen::complain(std::string level)
{
	(this->*_table[level])();
	return;
}
