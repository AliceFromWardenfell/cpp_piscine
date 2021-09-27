#include "phonebook.hpp"

PhoneBook::PhoneBook(int val) : pos(val)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void    PhoneBook::add_contact(void)
{	
	std::string	input;

	std::cout << std::endl << "\033[33mPlease, enter a first name: \033[0m";
	std::cin >> input;
	this->contacts[this->pos].assign_filed(FIRST_NAME, input);

	std::cout << "\033[33mPlease, enter a last name: \033[0m";
	std::cin >> input;
	this->contacts[this->pos].assign_filed(LAST_NAME, input);

	std::cout << "\033[33mPlease, enter a nickname: \033[0m";
	std::cin >> input;
	this->contacts[this->pos].assign_filed(NICKNAME, input);

	std::cout << "\033[33mPlease, enter a phone number: \033[0m";
	std::cin >> input;
	this->contacts[this->pos].assign_filed(PHONE_NUMBER, input);

	std::cout << "Ssh... this will be our darkest secret: ";
	std::cin >> input;
	this->contacts[this->pos].assign_filed(DARKEST_SECRET, input);

	this->pos++;
	if (this->pos == SIZE_OF_BOOK)
		this->pos = 0;
	return;
}

void	PhoneBook::display_contacts(void)
{
	std::cout << std::endl;
	// std::cout << "\033[33m   index   first name last  name  nickname \033[0m" << std::endl;
	for (size_t i = 0; i < SIZE_OF_BOOK; i++) //handle if SEARCH when no contacts
		if (this->contacts[i].exist())
		{
			std::cout << std::setw(10) << std::right << i;
			this->contacts[i].display_fileds();
		}
}
