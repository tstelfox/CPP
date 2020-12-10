/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:20:24 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/10 12:48:14 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &original) {

	*this = original;
}

PlasmaRifle&	PlasmaRifle::operator = (const PlasmaRifle &rhs) {

	if (this != &rhs) {
		_name = rhs._name;
		_apcost = rhs._apcost;
		_dmg = rhs._dmg;
	}

	return *this;
}

PlasmaRifle::~PlasmaRifle() {}

std::string	PlasmaRifle::getName( void ) const {

	return(_name);
}

int			PlasmaRifle::getAPCost( void ) const {

	return(_apcost);
}

int			PlasmaRifle::getDamage( void ) const {

	return(_dmg);
}

virtual void		PlasmaRifle::attack() const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}