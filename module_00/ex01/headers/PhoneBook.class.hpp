#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# define SIZE_OF_BOOK 8
# include "Contact.class.hpp"

class PhoneBook
{

public:

    PhoneBook(int val);
    ~PhoneBook(void);
    
    void    add_contact(void);
	void	display_contacts(void);

private:

    int     pos;
    Contact contacts[SIZE_OF_BOOK];

};

#endif