/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 14:15:32 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 16:04:48 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent ( void ) {

	std::cout << "I think the brainless leghisti are coming!" << std::endl;
	Zombie* capitano = newZombie ("Matteo");

	delete (capitano);
	std::cout << "\n\n\n" << std::endl;
	
	randomChump();
}

ZombieEvent::~ZombieEvent ( void ) {

	std::cout << "Oh I think they've returned to the sewers" << std::endl;
}

Zombie*		ZombieEvent::newZombie ( std::string name ) {

	Zombie*	leghista = new Zombie;
	if (!leghista)
		return (NULL);
	leghista->set_name ( name );
	setZombieType ( "fascio" , leghista);
	leghista->announce();

	return (leghista);
}

void		ZombieEvent::setZombieType ( std::string type , Zombie* id ) {
	id->set_type ( type );
}

void		ZombieEvent::randomChump ( void ) {

	Zombie Tondi;
	std::string rand_types[4] = { "Tondi", "Babbo del Tondi", "Quel coglione del Tondi", "Il Tondi" };

	srand(time(NULL));
	int i = rand() % 4;
	Tondi.set_name ( rand_types[i] );
	Tondi.set_type ( "sfigato" );

	Tondi.announce();
}