/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 17:56:44 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/28 16:52:47 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bitwidth = 8;

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	setRawBits( 0 );
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed ( const Fixed &fixed) {

	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;

	return;
}

Fixed&	Fixed::operator=(const Fixed &fixed) {

	std::cout << "Assignation operator called" << std::endl;
	if ( this != &fixed ) {
		this->_fpoint = fixed.getRawBits();
	}

	return *this;
}

int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;

	return this->_fpoint;
	// DO something
}

void	Fixed::setRawBits( int const raw ) {

	this->_fpoint = raw;
	// Do something else I guess
}

