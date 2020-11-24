/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 16:45:54 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/24 17:09:31 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde (  int N ) : _N(N) {
	
	std::cout << "JESUS JOSEPH AND MARY IT'S A HORDE OF THEM\n\n" << std::endl;

	Zombie* lads = new Zombie[_N];

	std::string rand_types[4] = { "Capitano", "Salvini", "La Ceccardi", "Il Tondi" };
	srand(time(NULL));
	for (int j = 0; j < _N; j++)
	{
		int i = rand() % 4;
		lads[j].set_name(rand_types[i]);
		lads[j].set_type("stronzo");
	}

	this->_lads = lads;
	announce();

}

ZombieHorde::~ZombieHorde ( void ) {

	delete [] this->_lads;
	std::cout << "\n\nCiao ciao - Stasera arrosticini A B R U Z Z E S I. E voi amici??" << std::endl;
}

void	ZombieHorde::announce ( void ) const {
	
	for (int i = 0; i < this->_N; i++)
		this->_lads[i].announce();
}