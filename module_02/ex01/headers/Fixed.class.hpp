#pragma once

#include <iostream>

class Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed const & instance);
		Fixed(const int int_val);
		Fixed(const float float_val);
		~Fixed(void);

		Fixed&	operator=(Fixed const & r_instance);

	private:

		static const int	_f_bits;
		static const int	_scale;
		int					_value;

	public:

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream&	operator<<(std::ostream& out, Fixed const & instance);
