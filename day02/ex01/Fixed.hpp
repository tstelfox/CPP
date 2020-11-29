/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 17:58:58 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/29 18:04:59 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed {

	public:

		Fixed();
		Fixed(const int intnum);
		Fixed(const float floatnum);

		~Fixed();
		Fixed(const Fixed &original);
		Fixed & operator = (const Fixed &rhs);


		float	toFloat( void ) const;
		int		toInt( void ) const; // Converts fixed point to Int
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int		_fpoint;
		static const int 	_bitwidth;
};

std::ostream &	operator << (std::ostream &o, Fixed const & i);

#endif