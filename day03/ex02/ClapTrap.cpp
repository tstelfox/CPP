/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 12:09:50 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/04 17:42:22 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : _name(name) , _hp(100) , _maxHp(100) , _ep(100) ,
			_maxEp(100) , _level(1) , _meleeDmg(30) , _rangedDmg(20) ,  _armour(5)  {

	std::cout << "A parent clap thing is born" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << "A parent thing has died" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original) {
	
	std::cout << "An overarching Clap thing has been created as a copy" << std::endl;
	*this = original;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs) {

	if (this != &rhs)
		_name = rhs._name;
		_hp = rhs._hp;
		_ep = rhs._ep;
		_level = rhs._level;
		_meleeDmg = rhs._meleeDmg;
		_rangedDmg = rhs._rangedDmg;
		_armour = rhs._armour;

	return *this;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	
	if (_hp == 0)
	{
		std::cout << _name << " can't be healed! He ko already" << std::endl;
		return;
	}
	if (_hp + amount > _maxHp)
	{
		std::cout << _name << " has been healed for " << _maxHp - _hp << std::endl;
		_hp = _maxHp;
	}
	else
	{
		_hp += amount;
		std::cout << _name << " has been healed for " << amount << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {

	int realdmg;
	realdmg = amount - _armour;

	if (_hp <= realdmg)
	{
		std::cout << _name <<  " takes " << _hp << " damage and is knocked tf out" << std::endl;
		_hp = 0;
	}
	else
	{
		_hp -= realdmg;
		std::cout << _name <<  " takes " << realdmg << " damage" << std::endl;
	}
}