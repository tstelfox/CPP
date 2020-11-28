/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 17:58:58 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/28 18:18:57 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed {

	public:

		Fixed(const int intnum);
		Fixed(const float floatnum);

		~Fixed();
		Fixed(const Fixed &original);
		Fixed & operator = (const Fixed &rhs);


		float	toFloat( void ) const; // Converts fixed point to float
		int		toInt( void ) const; // Converts fixed point to Int
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		Fixed();
		int	_fpoint;
		static const int _bitwidth;
};

std::ostream &	operator << (std::ostream &o, Fixed const & i);

#endif