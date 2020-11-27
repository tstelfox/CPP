/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 14:57:50 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/27 18:05:41 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <cmath>

class	Fixed {

	public:

		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed & operator = (const Fixed &fixed);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int	_fpoint;
		static const int _bitwidth = 8; // The literal 8?!?
};

#endif