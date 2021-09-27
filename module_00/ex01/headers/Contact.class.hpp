#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact
{

public:

    Contact(void);
    ~Contact(void);

	void	assign_filed(int field, std::string value);
	void	display_fileds(void);
	bool	exist(void);

private:

    std::string	info[5];

};

#endif