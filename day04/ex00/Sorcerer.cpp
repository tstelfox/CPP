/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/06 17:33:01 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 15:36:02 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name) , _title(title) {

	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & original) {

	*this = original;
}

Sorcerer&	Sorcerer::operator = (const Sorcerer &rhs) {

	if (this != &rhs) {
		_name = rhs._name;
		_title = rhs._title;
	}

	return *this;
}

Sorcerer::~Sorcerer() {

	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

void	Sorcerer::introduce ( void ) {

	std::cout << "I am " << _name << ", " << _title << ", and I must be an idiot" << std::endl;
}

std::string	Sorcerer::getName( void ) const {

	return (_name);
}

std::string	Sorcerer::getTitle( void ) const {

	return (_title);
}

std::ostream & operator << (std::ostream &o, Sorcerer const &i) {

	o << i.getName();
	o << i.getTitle();

	return (o);
}