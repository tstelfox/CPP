/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 11:18:26 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/11 12:55:04 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const &name) : _name(name) {

	for (int i = 0; i < 4; i++) {
		_inventory[i] == NULL;
	}
}

Character::Character(const Character &original) {

	for (int i = 0; this->_inventory[i] != NULL; i++)
		delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = original._inventory[i];
	this->_name = original._name;
}

Character&		Character::operator = (const Character &rhs) {

	if (this != &rhs) {
		for (int i = 0; i < 4; i++)
			// Am I overcomplicating this?
	}
}