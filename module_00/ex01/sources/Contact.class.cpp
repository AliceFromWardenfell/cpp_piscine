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

void	Contact::display_fileds(void)
{
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << this->info[i] << " "; //handle
	}
	std::cout << std::endl;
	return;
}

bool	Contact::exist(void)
{
	if (this->info[0].empty())
		return (false);
	return (true);
}
