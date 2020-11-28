/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 14:57:50 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/28 17:49:58 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed {

	public:

		Fixed();
		~Fixed();
		Fixed(const Fixed &original);
		Fixed & operator = (const Fixed &rhs);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int	_fpoint;
		static const int _bitwidth;
};

#endif