#include "main.hpp"
#include <iostream>
#include <iomanip>

int		is_float_numeric_limit(std::string const & raw)
{
	return !raw.compare("-inff") || !raw.compare("+inff") || !raw.compare("inff") || !raw.compare("nanf");
}

int		is_double_numeric_limit(std::string const & raw)
{
	return !raw.compare("-inf") || !raw.compare("+inf") || !raw.compare("inf") || !raw.compare("nan");
}

void	print_char(char& c)
{
	std::cout << std::right << std::setw(9) << "char: ";
	if (isprint(c))
		std::cout << "\'" << c << "\'" << std::endl;
	else
		std::cout << "non displayable" << std::endl;
}

int		count_prec(std::string const & val)
{
	size_t pos = val.find('.');
	std::string str = val.substr(pos + 1);

	if (pos == std::string::npos)
		return 2;
	return str.length();
}
