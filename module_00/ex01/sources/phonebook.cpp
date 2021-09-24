#include "phonebook.hpp"

int input_loop(void)
{
    std::string str;

    while (true)
    {
        prompt();
        std::cin >> str;
        if (!str.compare("EXIT"))
            return (exit_with_msg("\033[33;1mThank you for using our phonebook. Bye!\033[0m"));
        if (!str.compare("ADD"))
            return (exit_with_msg("ADD cmd recieved"));
        if (!str.compare("SEARCH"))
            return (exit_with_msg("SEARCH cmd resieved"));
    }
    return (OK);
}

int main(void)
{
    std::cout << "\033[33;1mWelcome to our phonebook!\033[0m" << std::endl;
    if (input_loop())
        return (EXIT_SUCCESS);
    return (OK);
}
