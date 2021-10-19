#include "Form.class.hpp"
#include <iomanip>

// CONSTRUCTORS:

Form::Form(void)
	:	_name(FNAME_DEF),
		_signed(false),
		_sign_grade(GRADE_MAX),
		_exec_grade(GRADE_MAX)
		
{
	std::cout << _name << " has been created by default (base)	" << std::endl;
	return;
}

Form::Form(std::string const & name, unsigned int sign_grade, unsigned int exec_grade)
	:	_name(name),
		_signed(false),
		_sign_grade(sign_grade),
		_exec_grade(exec_grade)
{
	std::cout << _name << " has been created specifically (base)" << std::endl;
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException(this->get_name().c_str());
	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException(this->get_name().c_str());
	return;
}

Form::Form(Form const & instance)
	:	_name(instance._name),
		_signed(instance._signed),
		_sign_grade(instance._sign_grade),
		_exec_grade(instance._exec_grade)
{
	std::cout << _name << " has been created by cloning (base)" << std::endl;
	return;
}

Form::~Form(void)
{
	std::cout << _name << " has been torn (base)" << std::endl;
	return;
}

// OVERLOADS:

Form&	Form::operator=(Form const &)
{
	return *this;
}

std::ostream&	operator<<(std::ostream& out, Form const & instance)
{
	std::cout	<< "\033[37m"
				<< instance.get_name()
				<< "\033[0m[sg:\033[37m"
				<< std::setw(3)
				<< std::setfill('0')
				<< instance.get_grade_to_sign()
				<< "\033[0m;eg:\033[37m"
				<< std::setw(3)
				<< instance.get_grade_to_exec()
				<< "\033[0m;s:\033[37m"
				<< instance.is_signed()
				<< "\033[0m]";
	return out;
}

// EXCEPTIONS:

Form::GradeTooHighException::GradeTooHighException(void)
	:	info("info") { return; }

Form::GradeTooHighException::GradeTooHighException(const char* info)
	:	info(info) { return; }

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("grade is too high");
}

Form::GradeTooLowException::GradeTooLowException(void)
	:	info("info") { return; }

Form::GradeTooLowException::GradeTooLowException(const char* info)
	:	info(info) { return; }

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("grade is too low");
}

Form::GradeNotSignedException::GradeNotSignedException(void)
	:	info("info") { return; }

Form::GradeNotSignedException::GradeNotSignedException(const char* info)
	:	info(info) { return; }

const char* Form::GradeNotSignedException::what(void) const throw()
{
	return ("form is not signed");
}

// PUBLIC FUNCTIONS:

std::string	const &	Form::get_name(void) const
{
	return this->_name;
}

unsigned int		Form::get_grade_to_sign(void) const
{
	return this->_sign_grade;
}

unsigned int		Form::get_grade_to_exec(void) const
{
	return this->_exec_grade;
}

bool				Form::is_signed(void) const
{
	return this->_signed;
}

void				Form::be_signed(Bureaucrat const & instance) throw(Form::GradeTooLowException)
{
	if (instance.get_grade() > this->get_grade_to_sign())
		throw GradeTooLowException(this->get_name().c_str());
	this->_signed = true;
	return;
}

void		Form::execute(Bureaucrat const & executor) const throw(Form::GradeTooLowException, Form::GradeNotSignedException)
{
	if (!this->is_signed())
		throw GradeNotSignedException(this->get_name().c_str());
	if (executor.get_grade() > this->get_grade_to_exec())
		throw GradeTooLowException(this->get_name().c_str());
	action();
	return;
}
