#include "main.hpp"
#include <iomanip>
#include <iostream>

void	char_case(t_val& val)
{		
	val.i = static_cast<int>(val.c);
	val.f = static_cast<float>(val.c);
	val.d = static_cast<double>(val.c);

	print_char(val.c);
	
	std::cout << std::right << std::setw(9) << "int: " << val.i << std::endl;
	std::cout << std::right << std::setw(9) << "float: " << std::fixed << std::setprecision(1) << val.f << 'f' << std::endl;
	std::cout << std::right << std::setw(9) << "double: " << std::fixed << std::setprecision(1) << val.d << std::endl;
}

void	int_case(t_val& val)
{
	val.f = static_cast<float>(val.i);
	val.d = static_cast<double>(val.i);
	val.c = static_cast<char>(val.i);

	std::cout << std::right << std::setw(9) << "int: " << val.i << std::endl;
	std::cout << std::right << std::setw(9) << "float: " << std::fixed << std::setprecision(1) << val.f << 'f' << std::endl;
	std::cout << std::right << std::setw(9) << "double: " << std::fixed << std::setprecision(1) << val.d << std::endl;

	if (val.i < 0 || val.i > 255)
		std::cout << std::right << std::setw(9) << "char: " << "impossible" << std::endl;
	else
		print_char(val.c);
}

void	float_case(t_val& val, int prec, std::string const & raw)
{
	val.d = static_cast<double>(val.f);
	val.c = static_cast<char>(val.f);
	val.i = static_cast<int>(val.f);

	if (prec > 18)
		prec = 18;
	std::cout << std::right << std::setw(9) << "float: " << std::fixed << std::setprecision(prec) << val.f << 'f' << std::endl;
	std::cout << std::right << std::setw(9) << "double: " << std::fixed << std::setprecision(prec) << val.d << std::endl;
	if (val.f < 0.0f || val.f > 256.0f || is_float_numeric_limit(raw))
		std::cout << std::right << std::setw(9) << "char: " << "impossible" << std::endl;
	else
		print_char(val.c);
	if (is_float_numeric_limit(raw))
		std::cout << std::right << std::setw(9) << "int: " << "impossible" << std::endl;
	else
		std::cout << std::right << std::setw(9) << "int: " << val.i << std::endl;
}

void	double_case(t_val& val, int prec, std::string const & raw)
{
	val.c = static_cast<char>(val.d);
	val.i = static_cast<int>(val.d);
	val.f = static_cast<float>(val.d);

	if (prec > 18)
		prec = 18;
	std::cout << std::right << std::setw(9) << "double: " << std::fixed << std::setprecision(prec) << val.d << std::endl;
	if (val.d < 0.0 || val.d > 256.0 || is_double_numeric_limit(raw))
		std::cout << std::right << std::setw(9) << "char: " << "impossible" << std::endl;
	else
		print_char(val.c);
	if (is_double_numeric_limit(raw))
		std::cout << std::right << std::setw(9) << "int: " << "impossible" << std::endl;
	else
		std::cout << std::right << std::setw(9) << "int: " << val.i << std::endl;
	std::cout << std::right << std::setw(9) << "float: " << std::fixed << std::setprecision(prec) << val.f << 'f' << std::endl;
}
