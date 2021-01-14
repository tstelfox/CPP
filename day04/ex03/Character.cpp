/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 11:18:26 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/14 11:17:14 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const &name) : _name(name) {

	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(const Character &original) {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = original._inventory[i];
	this->_name = original._name;
}

Character&		Character::operator = (const Character &rhs) {

	for (int i = 0; this->_inventory[i] != NULL; i++)
		delete this->_inventory[i];
	if (this != &rhs) {
		for (int i = 0; i < 4; i++)
			_inventory[i] = rhs._inventory[i]->clone();
	}
	return *this;
}

Character::~Character() {

	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

std::string	const & Character::getName() const {

	return _name;
}

void		Character::equip(AMateria* m) {

	int i = 0;
	while (i < 4) {
		if (_inventory[i] == NULL)
			break;
		i++;
	}
	if (m == NULL || i == 4)
		return;
	_inventory[i] = m; //Cloning it was causing chaos
}

void		Character::unequip(int idx) {

	if (idx > 3)
		return;
	_inventory[idx] = NULL;
}

void		Character::use(int idx, ICharacter& target) {


	if (idx > 3 || _inventory[idx] == NULL) {
		std::cout << this->getName() << " doesn't have that in inventory" << std::endl;
		return;
	}
	this->_inventory[idx]->use(target);
}

AMateria*	Character::getMateria(int idx) {

	if (idx >= 4)
		return NULL;
	return _inventory[idx];
}