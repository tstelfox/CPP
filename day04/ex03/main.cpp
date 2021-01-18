/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 11:13:54 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/18 17:09:21 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void) {
    IMateriaSource  *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter      *me = new Character("me");
    AMateria        *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter      *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(1, *bob);

    std::cout << "\n--- Testing Materia limit ---" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    IMateriaSource  *src2 = new MateriaSource();
    src2->learnMateria(new Cure());
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("ice"));
    me->equip(src2->createMateria("cure"));
    me->use(3, *bob);
    me->unequip(3);
    me->equip(src2->createMateria("cure"));
    me->use(3, *bob);
    delete src2;
    delete bob;
    delete me;
    delete src;
    return 0;
}