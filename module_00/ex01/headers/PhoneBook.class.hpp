#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "phonebook.hpp"

class PhoneBook
{

public:

    PhoneBook(int val);
    ~PhoneBook(void);
    
    void    add_contact(void);
	void	display_phonebook(void);
	void	display_contact(void);

private:

    int     pos;
    Contact contacts[SIZE_OF_BOOK];

};

#endif