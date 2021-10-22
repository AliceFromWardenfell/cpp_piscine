#include "main.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

int		print_error(std::string const & msg)
{
	std::cout << "\033[31mError: \033[0m" << msg << std::endl;
	return ERROR;
}

int		detect_type(std::string const & raw)
{
	if (is_float_numeric_limit(raw))
		return FLOAT;
	if (is_double_numeric_limit(raw))
		return DOUBLE;

	if (raw.length() == 1 && !isdigit(raw[0]))
		return CHAR;
	if (raw.rfind('f') != std::string::npos)
		return FLOAT;
	if (raw.find('.') != std::string::npos)
		return DOUBLE;
	return INT;
}

int		main(int argc, char **argv)
{
	t_val	val;

	if (argc != 2)
		return (print_error("wrong amount of arguments"));

	switch (detect_type(argv[1]))
	{
		case CHAR:
			val.c = argv[1][0];
			char_case(val);
			break;
		case INT:
			val.i = static_cast<int>(strtol(argv[1], 0, 10));
			int_case(val);
			break;
		case FLOAT:
			val.f = strtof(argv[1], 0);
			float_case(val, count_prec(argv[1]) - 1, argv[1]);
			break;
		case DOUBLE:
			val.d = strtod(argv[1], 0);
			double_case(val, count_prec(argv[1]), argv[1]);
			break;
	}
	return OK;
}
