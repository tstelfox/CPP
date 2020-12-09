/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 15:41:02 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 16:35:08 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string name) : _name(name) {

	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &original) {

	*this = original;
}

Victim::~Victim() {

	std::cout << "Victim " << _name << " has just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator = (const Victim &rhs) {

	if (this != &rhs) {
		_name = rhs._name;
	}
	return *this;
}

void	Victim::introduce () {

	std::cout << "I'm " << _name << " and I like boar" << std::endl;
}

void	Victim::getPolymorphed() const {

	std::cout << _name << " has been turned into a cute little penguin" << std::endl;
}

std::string	Victim::getName( void ) const {

	return (_name);
}

std::ostream & operator << (std::ostream &o, Victim const &i) {

	o << i.getName();

	return (o);
}