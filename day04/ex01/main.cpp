/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 21:00:15 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 21:15:13 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int		main(void) { //Need to test for more shit probably

	Character* me = new Character("me"); 
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle(); 
	AWeapon* pf = new PowerFist();
	me->equip(pr); std::cout << *me; 
	me->equip(pf);
	me->attack(b);
	std::cout << *me; me->equip(pr); 
	std::cout << *me; me->attack(b); 
	std::cout << *me;
	me->attack(b); std::cout << *me;
	return 0;
}
