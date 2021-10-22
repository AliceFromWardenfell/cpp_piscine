#pragma once

#include <iostream>

#define OK 0
#define ERROR 1

#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4

typedef struct	s_val
{
	char		c;
	int			i;
	float		f;
	double		d;
}				t_val;

void	char_case(t_val& val);
void	int_case(t_val& val);
void	float_case(t_val& val, int prec, std::string const & raw);
void	double_case(t_val& val, int prec, std::string const & raw);
int		is_float_numeric_limit(std::string const & raw);
int		is_double_numeric_limit(std::string const & raw);
void	print_char(char& c);
int		count_prec(std::string const & val);
