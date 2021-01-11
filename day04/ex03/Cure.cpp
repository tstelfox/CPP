/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 18:20:29 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/11 18:20:29 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {}

Cure::Cure(const Cure &original) {

	*this = original;
}

Cure&	Cure::operator = (const Cure &rhs) {

	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

Cure::~Cure() {}

AMateria*	Cure::clone() const {

	Cure*	copy = new Cure(*this);
	return copy;
}

void		Cure::use(ICharacter &target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
