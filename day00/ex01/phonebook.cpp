/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 16:44:58 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/19 10:52:58 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

phonebook::phonebook( void ) {

	std::cout << "contact has been created" << std::endl;
	return;
}

phonebook::~phonebook ( void ) {

	std::cout << "contact has been deleted" << std::endl;
	return;
}

void	phonebook::set_firstname ( string buff) { this->_first_name.assign(buff); }

void	phonebook::set_lastname ( string buff) { this->_last_name.assign(buff); }

void	phonebook::set_nickname ( string buff) { this->_nickname.assign(buff); }

void	phonebook::set_login ( string buff) { this->_login.assign(buff); }

void	phonebook::set_postaladdress ( string buff) { this->_postal_address.assign(buff); }

void	phonebook::set_emailaddress ( string buff) { this->_email_address.assign(buff); }

void	phonebook::set_phonenumber ( string buff) { this->_phone_number.assign(buff); }

void	phonebook::set_birthday ( string buff) { this->_birthday_date.assign(buff); }

void	phonebook::set_favouritemeal ( string buff) { this->_favourite_meal.assign(buff); }

void	phonebook::set_underwear ( string buff) { this->_underwear_colour.assign(buff); }

void	phonebook::set_darkestsecret ( string buff) { this->_darkest_secret.assign(buff); }

void	phonebook::column_padding ( string content ) const {
	std::cout << std::setw (10) << content;
}

void	phonebook::get_details ( int i ) const {
	
	std::string index = to_string(i);
	column_padding(index);
	std::cout << "|";
	column_padding(this->_first_name);
	std::cout << "|";
	column_padding(this->_last_name);
	std::cout << "|";
	column_padding(this->_nickname);
	std::cout << std::endl;
}