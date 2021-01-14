/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 11:13:54 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/14 11:16:19 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// int main() {
// 		{
// 			IMateriaSource *src = new MateriaSource(); 
// 			src->learnMateria(new Ice()); 
// 			src->learnMateria(new Cure());
// 			src->learnMateria(new Ice()); 
// 			src->learnMateria(new Cure());
// 			src->learnMateria(new Cure()); 
// 			src->learnMateria(new Cure());
// 			src->learnMateria(new Cure()); 
// 			src->learnMateria(new Cure());
// 			Character* me = new Character("me");
// 			AMateria* tmp;
// 			ICharacter* bob = new Character("bob");
// 			std::cout << "<----Creating empty material and equipping bob with it---->" << std::endl;
// 			tmp = src->createMateria(" ");
// 			bob->equip(tmp);
// 			bob->use(0, *me);
// 			tmp = src->createMateria("ice"); 

// 			std::cout << "\n<----XP before and after usage---->" << std::endl;
// 			std::cout << "Materia " << tmp->getType() << " xp is " << tmp->getXP() << std::endl;
// 			me->equip(tmp);
// 			me->use(0, *bob);
// 			me->use(0, *bob);
// 			std::cout << "Materia " << tmp->getType() << " xp is " << tmp->getXP() << std::endl;			tmp = src->createMateria("cure"); 
// 			std::cout << "\n<----Trying to use from an empty inventory space---->" << std::endl;
// 			me->use(2, *bob);

// 			std::cout << "\n<----Verify Cure XP---->" << std::endl;
// 			tmp = src->createMateria("ice"); 
// 			me->equip(tmp);
// 			me->use(1, *bob);
// 			tmp = src->createMateria("cure"); 
// 			me->equip(tmp);
// 			std::cout << "Materia " << tmp->getType() << " xp is " << tmp->getXP() << std::endl;			
// 			me->use(2, *bob); 
// 			me->use(2, *bob);
// 			std::cout << "Materia " << tmp->getType() << " xp is " << tmp->getXP() << std::endl;			

// 			tmp = src->createMateria("ice");
// 			bob->equip(tmp);
// 			std::cout << "\n<----Equip Cure four times but show that Ice still in inventory---->" << std::endl;
// 			me->equip(tmp);
// 			me->use(1, *bob);
			
// 			delete bob;
// 			delete me;
// 			delete src;
// 		}
// 		// system("leaks pprogg");
// 		return 0;
// 	}
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