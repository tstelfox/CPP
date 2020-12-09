/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 11:23:51 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 11:31:05 by tmullan       ########   odam.nl         */
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

	Ninja.meleeAttack("la su ma");
	Ninja.rangedAttack("Il su babbo");

	std::cout << "\n" << std::endl;
	
	Ninja.takeDamage(30);

	Ninja.beRepaired(10);

	Ninja.ninjaShoebox(Frag);
	Ninja.ninjaShoebox(Scav);
	Ninja.ninjaShoebox(Ninja);
	
}
