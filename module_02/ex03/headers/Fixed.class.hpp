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

		bool	operator>(Fixed const & r_instance) const;
		bool	operator<(Fixed const & r_instance) const;
		bool	operator>=(Fixed const & r_instance) const;
		bool	operator<=(Fixed const & r_instance) const;
		bool	operator==(Fixed const & r_instance) const;
		bool	operator!=(Fixed const & r_instance) const;
		Fixed&	operator=(Fixed const & r_instance);
		// Fixed&	operator=(Fixed const r_instance);
		Fixed	operator+(Fixed const & r_instance) const;
		Fixed	operator-(Fixed const & r_instance) const;
		Fixed	operator*(Fixed const & r_instance) const;
		Fixed	operator/(Fixed const & r_instance) const;
		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		

	private:

		static const int	_f_bits;
		static const int	_scale;
		int					_value;

	public:

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&			min(Fixed& a, Fixed& b);
		static Fixed const &	min(Fixed const & a, Fixed const & b);
		static Fixed&			max(Fixed& a, Fixed& b);
		static Fixed const &	max(Fixed const & a, Fixed const & b);

};

std::ostream&	operator<<(std::ostream& out, Fixed const & instance);
