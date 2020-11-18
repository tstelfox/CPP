/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 18:41:26 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/18 20:00:50 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>

using namespace std;

class	phonebook {

public:

		phonebook( void );
		~phonebook( void );

void	set_firstname(string buff);
void	set_lastname(string buff);
void	set_nickname(string buff);
void	set_login(string buff);
void	set_postaladdress(string buff);
void	set_emailaddress(string buff);
void	set_phonenumber(string buff);
void	set_birthday(string buff);
void	set_favouritemeal(string buff);
void	set_underwear(string buff);
void	set_darkestsecret(string buff);
string	get_details() const;

private:

	string	_first_name;
	string	_last_name;
	string	_nickname;
	string	_login;
	string	_postal_address;
	string	_email_address;
	string	_phone_number;
	string	_birthday_date;
	string	_favourite_meal;
	string	_underwear_colour;
	string	_darkest_secret;
};

#endif