/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:25:42 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 16:36:14 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	
	std::cout << "ZOG ZOG" << std::endl;
}

Peon::Peon(const Peon &original) : Victim(original._name) {

	*this = original;
}

Peon& Peon::operator = (const Peon &rhs) {

	if (this != &rhs) {
		_name = rhs._name;
	}
	return *this;
}

Peon::~Peon() {

	std::cout << "Bleauark..." << std::endl;
}

void	Peon::getPolymorphed( void ) const {

	std::cout << _name << " has been turned into a pink draenei" << std::endl;
}
