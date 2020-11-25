/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 17:19:24 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/25 19:20:25 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name ) : _name(name) {}

HumanB::~HumanB () {}

void	HumanB::setWeapon ( Weapon &equip ) {

	_equipped = &equip;
}

void	HumanB::attack () {

	std::cout << _name << " attacks with his " << _equipped->getType() << std::endl;
}
