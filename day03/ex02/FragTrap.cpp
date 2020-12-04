/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 11:14:58 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/04 17:41:45 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	std::cout << "Whatever the hell a FragTrap is has been created" << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << "Yea so now the frag thing is dead. Not even rippety" << std::endl;
}

FragTrap::FragTrap(const FragTrap &original) {
	
	std::cout << "Whatever the hell a FragTrap is has been created as a copy" << std::endl;
	*this = original;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs) {

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

void	FragTrap::meleeAttack(std::string const & target) {

	if (_hp == 0)
	{
		std::cout << _name <<  " can't do that, he ko" << std::endl;
		return;
	}
	std::cout << _name << " attacks " << target << 
	" with a melee attack, causing "<< _meleeDmg << " damage!" <<std::endl;
}

void	FragTrap::rangedAttack(std::string const & target) {

	if (_hp == 0)
	{
		std::cout << _name <<  " can't do that, he ko" << std::endl;
		return;
	}
	std::cout << _name << " attacks " << target << 
	" with a ranged attack, causing "<< _rangedDmg << " damage!" <<std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {

	if (_hp == 0)
	{
		std::cout << _name <<  " can't do that, he ko" << std::endl;
		return;
	}
	static int once = 0;
	if (_ep >= 25 && _ep <= _maxEp) //It was complaining about maxEp not being used which it can't be yet ffs.
	{
		std::string attack[5] = {"skrrts", "yeets", "yotes", "brrapps", "PWNS"};
		if (once == 0)
		{
			srand(time(NULL));
			once = 1;
		}
		int i = rand() % 5;
		std::cout << _name << " " << attack[i] << " " << target << std::endl;
		_ep -= 25;
	}
	else
		std::cout << _name << " says: 'i DoN'T hAVe eNoUGh mAnA!1!1'" << std::endl;
}
