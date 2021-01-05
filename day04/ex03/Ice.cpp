/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 16:10:02 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/05 16:23:36 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &original) {

	*this = original;
}

Ice&	Ice::operator = (const Ice &rhs) {

	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

Ice::~Ice() {}

AMateria*	Ice::clone() const {

	Ice*	copy = new Ice(*this);
	return copy;
}

void		Ice::use(Icharacter &target) {

	
}
