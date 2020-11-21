/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 12:55:58 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 15:19:04 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie ( void ) {
	
	std::cout << "A Zombie leghista is born from the dead" << std::endl;
	// announce();
}

Zombie::~Zombie ( void ) {

	std::cout << "A Zombie-leghista has died" << std::endl;
}

void	Zombie::announce () const {

	std::cout << "<" << this->_name << " (" << this->_type << ")> E allora il pdddddd???" << std::endl;
}

void	Zombie::set_type ( std::string type ) {
	
	_type = type;
}

void	Zombie::set_name ( std::string name ) {
	
	_name = name;
}