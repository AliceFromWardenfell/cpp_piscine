#pragma once
#include <iostream>
#include "Form.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

class Intern
{
	public:

		Intern(void);
		~Intern(void);

	private:

		typedef	struct	s_page
		{
			const char*	form_name;
			Form* 		(Intern::*func_ptr)(std::string const &) const;
		}				t_page;

		static const t_page	_book[4];

		Form*	shrubbery_creation_form_create(std::string const & target) const;
		Form*	roboto_my_request_form_create(std::string const & target) const;
		Form*	presidential_pardon_form_create(std::string const & target) const;
		Form*	form_creation_failed(std::string const &) const;

		Intern(Intern const &);
		Intern&	operator=(Intern const &);

	public:

		Form*	make_form(std::string const & form_name, std::string const & target) const;

};
