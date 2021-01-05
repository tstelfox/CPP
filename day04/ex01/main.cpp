/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 21:00:15 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/05 12:43:43 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int		main(void) {

	Character* me = new Character("me"); 
	Character you(*me);
	Character him(you);

	std::cout << you;
	AWeapon* pr = new PlasmaRifle(); 
	you.equip(pr);
	std::cout << you;
	std::cout << *me;
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me; 
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr); 
	std::cout << *me;
	me->attack(b); 
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	return 0;
}
