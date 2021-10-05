#pragma once

#include <iostream>
#include <map>

#define DEBUG	"\033[37m[DEBUG]:\033[0m I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
#define INFO	"\033[36m[INFO]:\033[0m I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
#define WARNING	"\033[33m[WARNING]:\033[0m I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
#define ERROR	"\033[31m[ERROR]:\033[0m This is unacceptable, I want to speak to the manager now."
#define DEFAULT	"[ Probably complaining about insignificant problems ]"

class Karen
{
	public:

		Karen(void);
		~Karen(void);

	private:

		std::map<std::string, void (Karen::*)(void)>	_table;

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:	

		void	complain(std::string level);

};