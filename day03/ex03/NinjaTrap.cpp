/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 17:55:20 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/08 16:03:05 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	
	_hp = 60;
	_maxHp = 60;
	_ep = 120;
	_maxEp = 120;
	_meleeDmg = 60;
	_rangedDmg = 5;
	_armour = 0;
	std::cout << "A ninja thing is born" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &original) {

	*this = original;
}

NinjaTrap& NinjaTrap::operator = (const NinjaTrap &rhs) {

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

NinjaTrap::~NinjaTrap() {

	std::cout << "The ninja done died" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target) {

	if (_hp == 0)
	{
		std::cout << _name <<  " can't do that, he ko" << std::endl;
		return;
	}
	std::cout << _name << " attacks " << target << 
	" with a ninja dagger attack, causing "<< _meleeDmg << " damage!" <<std::endl;
}

void	NinjaTrap::rangedAttack(std::string const & target) {

	if (_hp == 0)
	{
		std::cout << _name <<  " can't do that, he ko" << std::endl;
		return;
	}
	std::cout << _name << " attacks " << target << 
	" with a shitty shurigen ranged attack, causing "<< _rangedDmg << "(fuck all) damage!" <<std::endl;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap &target) {

	std::cout << _name << "Sees a Scav and burps" <<std::endl;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap &target) {

	std::cout << _name << "Sees another Ninja and spiderman-meme happens" <<std::endl;
}

void	NinjaTrap::ninjaShoebox(const FragTrap &target) {

	std::cout << _name << "Sees a Frag and publicly shames it" <<std::endl;
}

