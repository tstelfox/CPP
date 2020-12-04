/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 11:14:58 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/04 11:26:52 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"



FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) : _name(name) , _hp(100) , _maxHp(100) , _ep(100) ,
			_maxEp(100) , _level (1) , _meleeDmg(30) , _rangedDmg(20) ,  _armour(5) {

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

void	FragTrap::beRepaired(unsigned int amount) {
	
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

void	FragTrap::takeDamage(unsigned int amount) {

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
