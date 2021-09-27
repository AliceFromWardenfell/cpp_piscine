#include "phonebook.hpp"

int input_loop(void)
{
    PhoneBook	PhoneBook1(0);
	std::string str;

    while (true)
    {
        prompt();
        std::cout << "\033[33m$> \033[0m";
		std::cin >> str;
        if (!str.compare("EXIT"))
            return (exit_with_msg("\033[33;1mThank you for using our phonebook. Bye!\033[0m"));
        if (!str.compare("ADD"))
            PhoneBook1.add_contact();
        if (!str.compare("SEARCH"))
            PhoneBook1.display_contacts();
    }
    return (OK);
}

int main(void)
{
    std::cout << "\033[33;1mWelcome to our phonebook!\033[0m" << std::endl;
    if (input_loop())
        return (OK);
    return (OK);
}
