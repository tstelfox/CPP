/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 11:56:38 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/10 12:06:48 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string name, int apcost, int damage) : 
			_name(name) , _apcost(apcost), _dmg(damage) {

	
}

AWeapon::AWeapon(const AWeapon &original) {

	*this = original;
}

AWeapon&	AWeapon::operator = (const AWeapon &rhs) {

	if (this != &rhs) {
		_name = rhs._name;
		_apcost = rhs._apcost;
		_dmg = rhs._dmg;
	}

	return *this;
}

AWeapon::~AWeapon() {}

std::string	AWeapon::getName( void ) const {

	return(_name);
}

int			AWeapon::getAPCost( void ) const {

	return(_apcost);
}

int			AWeapon::getDamage( void ) const {

	return(_dmg);
}
