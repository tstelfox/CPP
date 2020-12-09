/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 11:36:01 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 14:27:38 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap() , FragTrap("Fucking hell") , NinjaTrap("Fucking balls") {}

SuperTrap::SuperTrap ( std::string name) : ClapTrap(name) , FragTrap(name) , NinjaTrap(name) {

	_hp = 100;
	_maxHp = 100;
	_ep = 120;
	_maxEp = 120;
	_level = 1;
	_meleeDmg = 60;
	_rangedDmg = 20;
	_armour = 5;
	std::cout << "The SuperTrap thing exists now" << std::endl;
}

SuperTrap::SuperTrap ( const SuperTrap &original) {

	*this = original;
}

SuperTrap&	SuperTrap::operator = ( const SuperTrap &rhs) {

	if (this != &rhs)
		_name = rhs._name;
		_hp = rhs._hp;
		_maxHp = rhs._maxHp;
		_ep = rhs._ep;
		_maxEp = rhs._maxEp;
		_level = rhs._level;
		_meleeDmg = rhs._meleeDmg;
		_rangedDmg = rhs._rangedDmg;
		_armour = rhs._armour;

	return *this;
}

SuperTrap::~SuperTrap()
{

	std::cout << "The SuperTrap died. Fuck this day and fuck Borderlands" << std::endl;
}

void	SuperTrap::meleeAttack( std::string const &target ) {

	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack( std::string const &target ) {

	FragTrap::rangedAttack(target);
}