/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 17:56:44 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/29 16:27:34 by tmullan       ########   odam.nl         */
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

Fixed::Fixed ( const Fixed &original) {

	std::cout << "Copy constructor called" << std::endl;
	*this = original;

	return;
}

Fixed&	Fixed::operator=(const Fixed &rhs) {

	std::cout << "Assignation operator called" << std::endl;
	if ( this != &rhs ) {
		this->_fpoint = rhs.getRawBits();
	}

	return *this;
}

int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;

	return this->_fpoint;
}

void	Fixed::setRawBits( int const raw ) {

	this->_fpoint = raw;
}

