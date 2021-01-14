/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 11:45:33 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/05 16:09:40 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria &original) {

	*this = original;
}

AMateria&	AMateria::operator = (const AMateria &rhs) {

	if (this != &rhs) {
		_xp = rhs._xp;
	}
	return *this;
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const {
	
	return _type;
}

unsigned int	AMateria::getXP() const {

	return _xp;
}

void			AMateria::use(ICharacter &target) {
	
	(void)target;
	this->_xp += 10;
}