/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 15:43:43 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/11 13:18:41 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {

	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {

	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &original) {

	*this = original;
}

AssaultTerminator& AssaultTerminator::operator = (const AssaultTerminator &rhs) {

	(void)rhs;
	// if (this != &rhs)
	// 	*this = rhs;
	return *this;
}

void	AssaultTerminator::battleCry() const {

	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const {

	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const {

	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine*	AssaultTerminator::clone() const {

	AssaultTerminator* copy = new AssaultTerminator(*this);
	return copy;
}
