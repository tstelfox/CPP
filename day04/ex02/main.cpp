/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 15:46:17 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/11 13:35:32 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

// int		main(void) {

// 	ISpaceMarine* bob = new TacticalMarine;
// 	ISpaceMarine* jim = new AssaultTerminator;
// 	ISquad* vlc = new Squad;
// 	vlc->push(bob);
// 	vlc->push(jim);
// 	for (int i = 0; i < vlc->getCount(); ++i) {
// 		ISpaceMarine* cur = vlc->getUnit(i);
// 		cur->battleCry();
// 		cur->rangedAttack();
// 		cur->meleeAttack();
// 	}
// 	delete vlc;
// 	return 0;
// }

int main(void) {

    ISpaceMarine    *bob = new TacticalMarine;
    ISpaceMarine    *jim = new AssaultTerminator;
    ISquad          *vlc = new Squad;
    
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); i++) {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "\n--- Reinforcements have arrived ---" << std::endl;
    Squad           vlc2;
    Squad           vlc3;
    ISpaceMarine    *tom = new AssaultTerminator;
    ISpaceMarine    *tim = new TacticalMarine;
    ISpaceMarine    *tess = tom->clone();
	std::cout << "Units in second squad: " << vlc2.getCount() << std::endl;
    vlc2.push(tom);
    vlc3.push(tim);
    vlc3.push(tess);
    std::cout << "Units in second squad: " << vlc2.getCount() << std::endl;
    std::cout << "First unit of second squad: ";
    (vlc2.getUnit(0))->battleCry();
    std::cout << "Units in third squad: " << vlc3.getCount() << std::endl;
    (vlc3.getUnit(0))->battleCry();
    (vlc3.getUnit(1))->battleCry();
    std::cout << "--- Squad transfer initiated ---" << std::endl;
    vlc2 = vlc3;
    std::cout << "Units in second squad: " << vlc2.getCount() << std::endl;
    std::cout << "First unit of second squad: ";
    (vlc2.getUnit(0))->battleCry();
    delete vlc;
    std::cout << "Curtains please" << std::endl;
    return 0;
}