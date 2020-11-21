/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 18:41:26 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 14:02:28 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <string>

class	phonebook {

public:

		phonebook( void );
		~phonebook( void );

void	set_firstname(std::string buff);
void	set_lastname(std::string buff);
void	set_nickname(std::string buff);
void	set_login(std::string buff);
void	set_postaladdress(std::string buff);
void	set_emailaddress(std::string buff);
void	set_phonenumber(std::string buff);
void	set_birthday(std::string buff);
void	set_favouritemeal(std::string buff);
void	set_underwear(std::string buff);
void	set_darkestsecret(std::string buff);
void	get_details(int i) const;
void	column_padding(std::string content) const;
void	full_contact(void) const;

private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_login;
	std::string	_postal_address;
	std::string	_email_address;
	std::string	_phone_number;
	std::string	_birthday_date;
	std::string	_favourite_meal;
	std::string	_underwear_colour;
	std::string	_darkest_secret;
};

#endif