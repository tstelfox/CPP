/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 12:07:34 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/25 19:00:26 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA ( std::string name , Weapon& equip ) : _name(name) , _equipped(equip) {}

HumanA::~HumanA () {}

void	HumanA::attack () {

	std::cout << _name << " attacks with his " << _equipped.getType() << std::endl;
}