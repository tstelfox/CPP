/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 11:23:51 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 14:28:10 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main( void ) {

	SuperTrap Super("Sto stronzo");
	NinjaTrap Ninja("Some guy");
	
	Super.ninjaShoebox(Ninja);
	Super.meleeAttack("Zuckerberg");
	Super.rangedAttack("yer mum");
	Super.vaulthunter_dot_exe("skrrt");
}
