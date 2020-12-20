/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 18:55:18 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 19:34:55 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const & name) : _name(name) , _AP(40){

	*_equipped = NULL;
	// std::cout << "* click click click *" << std::endl;
}

Character::Character(const Character &original) {

	*this = original;
}

Character&	Character::operator=(const Character &rhs) {

	if (this != &rhs) {
		_AP = rhs._AP;
		_name = rhs._name;
	}

	return *this;
}

Character::~Character() {

	// std::cout << "* SPROTCH *" << std::endl;
}

void	Character::recoverAP() {

	if (_AP > 30)
		_AP = 40;
	else
		_AP += 10;
}

void	Character::equip(AWeapon* weapon) {

	_equipped = &weapon;
}

void	Character::attack(Enemy* target) {

	if (_equipped == NULL)
		return;
	std::cout << _name << " attacks " << target->getType() << " with a " << _equipped->getName() << std::endl;
	
}