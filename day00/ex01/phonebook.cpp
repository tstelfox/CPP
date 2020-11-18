/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 16:44:58 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/18 18:20:58 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

phonebook::phonebook( void ) {

	std::cout << "phonebook has been created" << std::endl;
	return;
}

phonebook::~phonebook ( void ) {

	std::cout << "phonebook has been deleted" << std::endl;
	return;
}

void	phonebook::set_details ( string buff) {

	this->first_name.assign(buff);
	return;
}

string	phonebook::get_details ( void ) const {
	
	// std::cout << "First name do be: [" << this->first_name << "]" << std::endl;
	return this->first_name;
}