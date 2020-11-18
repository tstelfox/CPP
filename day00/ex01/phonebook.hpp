/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 18:41:26 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/18 18:20:48 by tmullan       ########   odam.nl         */
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

void	set_details(string buff);
string	get_details() const;

private:

	string	first_name;
	string	last_name;
	string	nickname;
	string	login;
	string	postal_address;
	string	email_address;
	string	phone_number;
	string	birthday_date;
	string	favourite_meal;
	string	underwear_colour;
	string	darkest_secret;
};

#endif