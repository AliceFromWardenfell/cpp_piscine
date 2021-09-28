#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "phonebook.hpp"

class PhoneBook
{

public:

    PhoneBook(void);
    ~PhoneBook(void);
    
    void    add_contact(void);
	void	display_phonebook(void) const;

private:

    int     pos;
    Contact contacts[SIZE_OF_BOOK];

};

#endif