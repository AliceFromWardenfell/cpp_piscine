#pragma once

#include <iostream>
#include "Bureaucrat.class.hpp"

#define FNAME_DEF "piece of paper"
#define	GRADE_MIN 1
#define	GRADE_MAX 150

class Form
{
	public:

		Form(void);
		Form(std::string const & name, unsigned int sign_grade, unsigned int exec_grade);
		Form(Form const & instance);
		~Form(void);

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
		bool				_signed;
		unsigned int const	_sign_grade;
		unsigned int const	_exec_grade;

		Form&	operator=(Form const &);

	public:

		std::string	const &	get_name(void) const;
		unsigned int		get_grade_to_sign(void) const;
		unsigned int		get_grade_to_exec(void) const;
		bool				is_signed(void) const;

		void				be_signed(Bureaucrat const & instance) throw(Form::GradeTooLowException);

};

std::ostream&	operator<<(std::ostream& out, Form const & instance);
