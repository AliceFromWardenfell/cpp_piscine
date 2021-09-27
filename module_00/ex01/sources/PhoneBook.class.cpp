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

	std::cout << "Please, enter a first name: ";
	std::cin >> input;
	this->contacts[this->pos].assign_filed(FIRST_NAME, input);

	std::cout << "Please, enter a last name: ";
	std::cin >> input;
	this->contacts[this->pos].assign_filed(LAST_NAME, input);

	std::cout << "Please, enter a nickname: ";
	std::cin >> input;
	this->contacts[this->pos].assign_filed(NICKNAME, input);

	std::cout << "Please, enter a phone number: ";
	std::cin >> input;
	this->contacts[this->pos].assign_filed(PHONE_NUMBER, input);

	std::cout << "Tss... this will be our darkest secret: ";
	std::cin >> input;
	this->contacts[this->pos].assign_filed(DARKEST_SECRET, input);

	this->pos++;
	if (this->pos == SIZE_OF_BOOK)
		this->pos = 0;
	return;
}

void	PhoneBook::display_contacts(void)
{
	for (size_t i = 0; i < SIZE_OF_BOOK; i++)
		if (this->contacts[i].exist())
		{
			std::cout << i;
			this->contacts[i].display_fileds();
		}
}
