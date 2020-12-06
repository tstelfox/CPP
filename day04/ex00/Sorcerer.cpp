/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/06 17:33:01 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/06 17:58:07 by tmullan       ########   odam.nl         */
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
		_title = rhs._title;ß
	}

	return *this;
}