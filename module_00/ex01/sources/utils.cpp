#include "phonebook.hpp"

void    prompt(void)
{
    std::cout   << std::endl << "\033[36;1mAvailable commands:\033[0;39m" << std::endl \
                << "\033[36m   ADD\033[0;39m - add a contact in the phonebook" << std::endl \
                << "\033[36mSEARCH\033[0;39m - display contacts" << std::endl \
                << "\033[36m  EXIT\033[0;39m - close the phonebook" << std::endl << std::endl;
}

int     exit_with_msg(const char *str)
{
    std::cout << str << std::endl;
    return (OK_EXIT);
}
