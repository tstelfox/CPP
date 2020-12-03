/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 13:31:14 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/03 17:31:52 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main ( void ) {

	FragTrap	mumyer("mumyer");
	FragTrap	dadyer = FragTrap("dadyer");

	mumyer.rangedAttack("Lindsay");
	mumyer.meleeAttack("Some random cardboard cutout");

	mumyer.takeDamage(42);
	mumyer.beRepaired(22);


	mumyer.takeDamage(106);
	mumyer.beRepaired(150);

	dadyer.meleeAttack("mumyer's unconscious body!");
	for (int i = 0; i <= 4; i++)
	{
		mumyer.vaulthunter_dot_exe("yer mum");
		dadyer.vaulthunter_dot_exe("his dignity");
	}
	return (0);
}