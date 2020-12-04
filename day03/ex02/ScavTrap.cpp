/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 17:38:17 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/04 17:18:54 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	_ep = 50;
	_maxEp = 50;
	_meleeDmg = 20;
	_rangedDmg = 15;
	_armour = 3;
	std::cout << "A ScavTrap-thing has been created" << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << "Yea so now the Scav is dead. No ripetty at all" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &original) {
	
	std::cout << "A Scav thing has been created as a copy" << std::endl;
	*this = original;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs) {

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

void	ScavTrap::challengeNewcomer(std::string const & target) {

	if (_hp == 0)
	{
		std::cout << _name <<  " can't do that, he ko" << std::endl;
		return;
	}
	static int once = 0;
	if (_ep >= 25 && _ep <= _maxEp) //It was complaining about maxEp not being used which it can't be yet ffs.
	{
		std::string challenge[5] = {"understand this CPP day", "give a fuck about Borderlands", "figure out brexit",
			 "go to North Korea", "have a real deep think about the only truly important question in life: 'why should one not end their own life?'"};
		if (once == 0)
		{
			srand(time(NULL));
			once = 1;
		}
		int i = rand() % 5;
		std::cout << _name << " challenges " << target << " to " << challenge[i] << std::endl;
		_ep -= 25;
	}
	else
		std::cout << _name << " says: 'even if I did have the energy, what would be the point?'" << std::endl;
}
