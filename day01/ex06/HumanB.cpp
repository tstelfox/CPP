/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 17:19:24 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/26 16:58:00 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name ) : _name(name) , _equipped(NULL) {}

HumanB::~HumanB () {}

void	HumanB::setWeapon ( Weapon &equip ) {

	_equipped = &equip;
}

void	HumanB::attack () {

	if (_equipped == NULL)
		std::cout << _name << " has no weapon! He's fucked" << std::endl;
	else
		std::cout << _name << " attacks with his " << _equipped->getType() << std::endl;
}
