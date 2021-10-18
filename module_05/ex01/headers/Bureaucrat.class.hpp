#pragma once

#include <iostream>

#define	NAME_DEF "Ivan"
#define	GRADE_DEF 100
#define	GRADE_MIN 1
#define	GRADE_MAX 150

class Form;

class Bureaucrat
{
	public:

		Bureaucrat(void);
		Bureaucrat(std::string const & name, unsigned int init_grade);
		Bureaucrat(Bureaucrat const & instance);
		~Bureaucrat(void);

		Bureaucrat&	operator=(Bureaucrat const & instance);

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(const char* info);
				const char*			what(void) const throw();
				const char*			info;
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(const char* info);
				const char*			what(void) const throw();
				const char*			info;
		};

	private:

		std::string	const	_name;
		unsigned int		_grade;

	public:

		std::string	const &	get_name(void) const;
		unsigned int		get_grade(void) const;
		void				increase_grade(void);
		void				decrease_grade(void);
		void				sign_form(Form& form) const;

};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const & instance);
