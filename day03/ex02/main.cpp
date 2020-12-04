/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 11:23:51 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/04 12:06:21 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main( void ) {

	FragTrap	frag("mumyer");
	FragTrap	copy = FragTrap("dadyer");
	ScavTrap	scav("L'Étranger");
	ScavTrap	scav2("Some greek guy in a barrel");

	frag.rangedAttack("Lindsay");
	frag.meleeAttack("Some random cardboard cutout");
	frag.takeDamage(42);
	frag.beRepaired(22);
	frag.takeDamage(106);
	frag.beRepaired(150);

	frag.meleeAttack("mumyer's unconscious body!");

	std::cout << "\n" << std::endl;

	scav.rangedAttack("you, my friend,");
	scav.meleeAttack("you again");
	scav.takeDamage(42);
	scav.beRepaired(6);
	scav.takeDamage(55);
	scav.beRepaired(20);


	std::cout << "\n" << std::endl;

	for (int i = 0; i <= 4; i++)
	{
		frag.vaulthunter_dot_exe("yer mum");
		copy.vaulthunter_dot_exe("his dignity");
	}

	std::cout << "\n" << std::endl;
	
	for (int i = 0; i <= 2; i++)
	{
		scav.challengeNewcomer("yer mum");
		scav2.challengeNewcomer("Alexander the Great");
	}

	return (0);
}