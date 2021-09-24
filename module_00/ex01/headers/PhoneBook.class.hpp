#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# define SIZE_OF_BOOK 8
# include "Contact.class.hpp"

class PhoneBook
{

public:

    PhoneBook(void);
    ~PhoneBook(void);
    
    void    add_contact(void);

private:

    int     pos; // init with init list
    Contact contact[SIZE_OF_BOOK]; //can be init with init list?

};

#endif