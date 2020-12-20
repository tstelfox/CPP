/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:27:55 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 18:19:39 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(const PowerFist &original) : AWeapon( ) {

	*this = original;
}

PowerFist&	PowerFist::operator = (const PowerFist &rhs) {

	if (this != &rhs) {
		_name = rhs._name;
		_apcost = rhs._apcost;
		_dmg = rhs._dmg;
	}

	return *this;
}

PowerFist::~PowerFist() {}

std::string	PowerFist::getName( void ) const {

	return(_name);
}

int			PowerFist::getAPCost( void ) const {

	return(_apcost);
}

int			PowerFist::getDamage( void ) const {

	return(_dmg);
}

virtual void		PowerFist::attack() const {

	std::cout << "* pschhh... SBAM *" << std::endl;
}
