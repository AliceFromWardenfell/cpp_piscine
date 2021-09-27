#include "phonebook.hpp"
#include<ios>
#include<limits>

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

void	PhoneBook::display_phonebook(void)
{
	int	index = 0;

	std::cout << std::endl;
	if (!this->contacts[0].exist())
	{
		std::cout << "\033[33mThe phonebook is empty\033[0m" << std::endl;
		return;
	}
	// std::cout << "\033[33m   index   first name last  name  nickname \033[0m" << std::endl;
	for (size_t i = 0; i < SIZE_OF_BOOK; i++) //handle if SEARCH when no contacts
		if (this->contacts[i].exist())
		{
			std::cout << std::setw(10) << std::right << i + 1;
			this->contacts[i].display_fileds_short();
		}
	std::cout << std::endl << "\033[33mPlease, enter the index of the person: \033[0m";
	std::cin >> index;
	if (index > 0 && index < 9 && this->contacts[index - 1].exist())
		this->contacts[index - 1].display_fileds_long();
	else
		std::cout << std::endl << "Sorry, there is no person with index " << index << " \033[33m:(\033[0m" << std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
