/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 11:23:51 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/08 16:00:40 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main( void ) {

	FragTrap	Frag("The frag");
	ScavTrap	Scav("The scav");
	NinjaTrap	Ninja("The Ninja");

	std::cout << "\n" << std::endl;

	Frag.meleeAttack("Fusaro");
	Frag.rangedAttack("La Meloni");

	Scav.meleeAttack("la su ma");
	Scav.rangedAttack("Il su babbo");

	std::cout << "\n" << std::endl;

	for (int i = 0; i <= 4; i++)
		Frag.vaulthunter_dot_exe("yer mum");

	for (int i = 0; i <= 2; i++)
		Scav.challengeNewcomer("yer mum");

	std::cout << "\n" << std::endl;
	Frag.takeDamage(106);
	Scav.takeDamage(104);

	Frag.beRepaired(10);
	Scav.beRepaired(10);

	Ninja.ninjaShoebox(Frag);
	Ninja.ninjaShoebox(Scav);
	Ninja.ninjaShoebox(Ninja);
	
}
