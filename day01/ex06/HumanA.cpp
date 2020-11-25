/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 12:07:34 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/25 17:10:45 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA ( std::string name , Weapon& equip ) : _name(name) , _equipped(equip) {}

HumanA::~HumanA () {}

void	HumanA::attack () {

	std::cout << _name << " attack with his " << _equipped.getType() << std::endl;
}