#pragma once

class Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed const & instance);
		~Fixed(void);

		Fixed&	operator=(Fixed const & r_instance);

	private:

		static const int	_f_bits;
		int					_value;

	public:

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
