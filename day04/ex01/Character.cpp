/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 18:55:18 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/05 12:32:58 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const & name) : _name(name) , _AP(40){

	_equipped = NULL;
	// std::cout << "* click click click *" << std::endl;
}

Character::Character(const Character &original) {

	*this = original;
}

Character&	Character::operator=(const Character &rhs) {

	if (this != &rhs) {
		_AP = rhs._AP;
		_name = rhs._name;
		_equipped = rhs._equipped;
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

	_equipped = weapon;
}

std::string		Character::getName() const {

	return _name;
}

int				Character::getAP() const{

	return _AP;
}

AWeapon*		Character::getWeapon() const {

	return _equipped;
}

void	Character::attack(Enemy* target) {

	if (_equipped == NULL)
		return;
	std::cout << _name << " attacks " << target->getType() << " with a " << _equipped->getName() << std::endl;
	if (_AP - _equipped->getAPCost() >= 0)
		_AP -= _equipped->getAPCost();
	else
	{
		std::cout << "I don't have enough rage" << std::endl;
		return;
	}
	_equipped->attack();
	target->takeDamage(_equipped->getDamage());
	if (target->getHP() <= 0)
		delete target;
}

std::ostream & operator << (std::ostream &o , Character const &i) {

	if (i.getWeapon() != NULL)
		o << i.getName() << " has " << i.getAP() << " AP and wields a " << i.getWeapon()->getName() << std::endl;
	else
		o << i.getName() << " has " << i.getAP() << " AP and is unarmed" << std::endl;

	return (o);
	
}
