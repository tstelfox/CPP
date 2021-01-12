/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 11:13:54 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/12 11:13:54 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
	IMateriaSource* src = new MateriaSource(); 
	src->learnMateria(new Ice()); 
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice"); 
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob); 
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
	}