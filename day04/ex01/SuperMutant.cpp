/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 18:39:32 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 18:46:08 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {

	std::cout << "Gaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &original) : Enemy() {

	*this = original;
}

SuperMutant&	SuperMutant::operator=(const SuperMutant& rhs) {

	if (this != &rhs) {
		_hp = rhs._hp;
		_type = rhs._type;
	}

	return *this;
}

SuperMutant::~SuperMutant() {

	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage( int dmg ) {

	int realdmg = dmg - 3;
	if (realdmg <= 0)
		return;
	if (_hp > realdmg)
		_hp -= realdmg;
	else
		_hp = 0;
}