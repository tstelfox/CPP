/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 16:44:58 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/29 15:19:17 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

phonebook::phonebook( void ) {

	std::cout << "contact slot has been created" << std::endl;
	return;
}

phonebook::~phonebook ( void ) {

	std::cout << "contact slot has been deleted" << std::endl;
	return;
}

void	phonebook::set_firstname ( std::string buff) { this->_first_name.assign(buff); }

void	phonebook::set_lastname ( std::string buff) { this->_last_name.assign(buff); }

void	phonebook::set_nickname ( std::string buff) { this->_nickname.assign(buff); }

void	phonebook::set_login ( std::string buff) { this->_login.assign(buff); }

void	phonebook::set_postaladdress ( std::string buff) { this->_postal_address.assign(buff); }

void	phonebook::set_emailaddress ( std::string buff) { this->_email_address.assign(buff); }

void	phonebook::set_phonenumber ( std::string buff) { this->_phone_number.assign(buff); }

void	phonebook::set_birthday ( std::string buff) { this->_birthday_date.assign(buff); }

void	phonebook::set_favouritemeal ( std::string buff) { this->_favourite_meal.assign(buff); }

void	phonebook::set_underwear ( std::string buff) { this->_underwear_colour.assign(buff); }

void	phonebook::set_darkestsecret ( std::string buff) { this->_darkest_secret.assign(buff); }

void	phonebook::column_padding ( std::string content ) const {
	if (content.length() > 10)
	{
		content.resize (9);
		std::cout << content << ".";
	}
	else
		std::cout << std::setw (10) << content;
}

void	phonebook::full_contact ( void ) const {
	std::cout	<< "First Name: " << _first_name << std::endl
				<< "Last Name: " << _last_name << std::endl
				<< "Nickname: " << _nickname << std::endl
				<< "Login: " << _login << std::endl
				<< "Postal Address: " << _postal_address << std::endl
				<< "Email address: " << _email_address << std::endl
				<< "Phone Number: " << _phone_number << std::endl
				<< "Birthday: " << _birthday_date << std::endl
				<< "Favourite meal: " << _favourite_meal << std::endl
				<< "Colour of yer knickers: " << _underwear_colour << std::endl
				<< "Darkest Secret: " << _darkest_secret << std::endl;
}

void	phonebook::get_details ( int i ) const {
	
	std::string index = std::to_string(i);
	column_padding(index);
	std::cout << "|";
	column_padding(this->_first_name);
	std::cout << "|";
	column_padding(this->_last_name);
	std::cout << "|";
	column_padding(this->_nickname);
	std::cout << std::endl;
}