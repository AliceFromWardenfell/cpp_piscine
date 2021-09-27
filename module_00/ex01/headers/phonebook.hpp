#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define OK 0
# define OK_EXIT 2

# define SIZE_OF_BOOK 8

# define FIRST_NAME 0
# define LAST_NAME 1
# define NICKNAME 2
# define PHONE_NUMBER 3
# define DARKEST_SECRET 4

# include <iostream>
# include <iomanip>
# include <Contact.class.hpp>
# include <PhoneBook.class.hpp>

int     exit_with_msg(const char *str);
void    prompt(void);

#endif