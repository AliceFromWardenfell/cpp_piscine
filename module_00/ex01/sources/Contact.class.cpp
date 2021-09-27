#include "phonebook.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

void	Contact::assign_filed(int field, std::string value)
{
	this->info[field] = value;
	return;
}

void	Contact::display_fileds_short(void)
{
	for (size_t i = 0; i < 3; i++)
	{
		if (this->info[i].length() < 11)
			std::cout << "\033[33m|\033[0m" << std::setw(10) << std::right << this->info[i];
		else
		{
			std::cout << "\033[33m|\033[0m" << this->info[i].substr(0, 9) << ".";
		}
	}
	std::cout << std::endl;
	return;
}

void	Contact::display_fileds_long(void)
{
	std::cout << std::endl;
	for (size_t i = 0; i < 5; i++)
		std::cout << "\033[33;1m-\033[0m" << this->info[i] << std::endl;
	return;
}

bool	Contact::exist(void) const
{
	if (this->info[0].empty())
		return (false);
	return (true);
}
