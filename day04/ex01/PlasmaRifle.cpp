/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:20:24 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 21:10:04 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &original) : AWeapon( ) {

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

void		PlasmaRifle::attack() const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}