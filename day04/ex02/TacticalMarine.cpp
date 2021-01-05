/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 15:31:55 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/05 16:23:14 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {

	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {

	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &original) {

	*this = original;
}

TacticalMarine& TacticalMarine::operator = (const TacticalMarine &rhs) {

	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	TacticalMarine::battleCry() const {

	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack() const {

	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const {

	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine*	TacticalMarine::clone() const {

	TacticalMarine* copy = new TacticalMarine(*this);
	return copy;
}