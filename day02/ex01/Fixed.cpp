/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 17:58:46 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/29 18:46:29 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bitwidth = 8;

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int intnum) {

	std::cout << "Int constructor called" << std::endl;
	setRawBits( intnum * (1 << _bitwidth) );
}

Fixed::Fixed(const float floatnum) {

	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(floatnum * (1 << _bitwidth)));
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

float	Fixed::toFloat( void ) const {
	
	float	fuck;
	fuck = getRawBits() / (double)(1 << _bitwidth);
	return (fuck);
}

int		Fixed::toInt( void ) const {

	return(getRawBits() >> _bitwidth);
}

int		Fixed::getRawBits() const {

	return this->_fpoint;
}

void	Fixed::setRawBits( int const raw ) {

	this->_fpoint = raw;
}


std::ostream& operator << (std::ostream& o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}