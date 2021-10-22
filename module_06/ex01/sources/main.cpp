#include "header.hpp"
#include <iostream>

void	print_person_info(Data const & person)
{
	std::cout	<< "        name: "	<< person.name			<< std::endl
				<< "         age: "	<< person.age			<< std::endl
				<< "  blood type: "	<< person.blood_type	<< std::endl
				<< "phone number: " << person.phone_number	<< std::endl
				<< "     account: "	<< person.account		<< std::endl
				<< "  is student: "	<< person.student		<< std::endl;
}

int		main(void)
{
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;
	
	Data	person;

	person.name = "Thomas";
	person.age = 44;
	person.blood_type = 'A';
	person.phone_number = 79651376521;
	person.account = -922337203685408;
	person.student = false;

	print_person_info(person);
	std::cout << std::endl << "     address: " << &person << std::endl;
	
	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	uintptr_t	raw;

	raw = serialize(&person);
	std::cout << "         raw: " << raw << std::endl;

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	Data*	same_person = deserialize(raw);
	same_person->age++;
	print_person_info(*same_person);
	std::cout << std::endl << "     address: " << same_person << std::endl;

	std::cout << "\033[30m----------------------------------------------------\033[0m" << std::endl;

	return 0;
}