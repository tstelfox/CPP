/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 15:46:17 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/05 12:50:32 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int		main(void) {

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i) {
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}