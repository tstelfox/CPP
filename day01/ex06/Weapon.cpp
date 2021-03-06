/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 18:01:06 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/25 11:58:05 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {}

Weapon::~Weapon() {}

void	Weapon::setType (std::string type) {

	_type = type;
}

const std::string& Weapon::getType () const {

	return this->_type;
}