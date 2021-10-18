#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"
#include <iomanip>

// CONSTRUCTORS:

Bureaucrat::Bureaucrat(void)
	:	_name(NAME_DEF), _grade(GRADE_DEF)
{
	std::cout << _name << " has been born by default" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string const & name, unsigned int init_grade)
	:	_name(name), _grade(init_grade)
{
	std::cout << _name << " has been born specifically" << std::endl;
	if (_grade > 150)
		throw GradeTooLowException(this->get_name().c_str());
	if (_grade < 1)
		throw GradeTooHighException(this->get_name().c_str());
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & instance)
	:	_name(instance._name), _grade(instance._grade)
{
	std::cout << _name << " has been born by cloning" << std::endl;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << _name << " has died" << std::endl;
	return;
}

// OVERLOADS:

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & instance)
{
	if (this != &instance)
		this->_grade = instance._grade;
	return *this;
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat const & instance)
{
	std::cout	<< "Bureaucrat \033[37m"
				<< instance.get_name()
				<< "\033[0m: grade is \033[37m"
				<< std::setw(3)
				<< std::setfill('0')
				<< instance.get_grade()
				<< "\033[0m";
	return out;
}

// EXCEPTIONS:

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
	:	info("info") { return; }

Bureaucrat::GradeTooHighException::GradeTooHighException(const char* info)
	:	info(info) { return; }

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("grade is too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
	:	info("info") { return; }

Bureaucrat::GradeTooLowException::GradeTooLowException(const char* info)
	:	info(info) { return; }

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("grade is too low");
}

// PUBLIC FUNCTIONS:

std::string	const &	Bureaucrat::get_name(void) const
{
	return this->_name;
}

unsigned int		Bureaucrat::get_grade(void) const
{
	return this->_grade;
}

void				Bureaucrat::increase_grade(void)
{
	if (_grade - 1 < 1)
		throw GradeTooHighException(this->get_name().c_str());
	this->_grade--;
}

void				Bureaucrat::decrease_grade(void)
{
	if (_grade + 1 > 150)
		throw GradeTooLowException(this->get_name().c_str());
	this->_grade++;
}

void				Bureaucrat::sign_form(Form& form) const
{
	try
	{
		form.be_signed(*this);
		std::cout	<< "Form \'"
					<< form.get_name()
					<< "\' has been signed by "
					<< this->get_name()
					<< std::endl;
	}
	catch (Form::GradeTooLowException & ex)
	{
		std::cout	<< "Form \'"
					<< form.get_name()
					<< "\' can't be signed: "
					<< this->get_name()
					<< "\'s grade is too low"
					<< std::endl;
	}
	return;
}
