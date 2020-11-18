/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 18:55:31 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/18 18:26:09 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add_contact(std::string buff, phonebook &contact) {

	std::cout << "Please enter contact details" << std::endl;
	std::cout << "First Name:";
	std::cin >> buff;
	contact.set_details(buff);
}

int		main() {

	std::string buff;
	phonebook	contact[8];
	int i = 0;

	std::cout << "Welcome to Turlough's phonebook! You have [" << 8 - i << "] free contact space left.\nPlease type one of the following commands:" << std::endl;
	std::cout << "ADD to add a user\nSEARCH to search the phonebook\nEXIT to quit the phonebook:\n";
	while (i < 8)
	{
		if (i > 0)
			std::cout << "ADD, SEARCH or EXIT" << std::endl;
		std::cin >> buff;
		if (buff.compare("ADD") == 0)
		{
			std::cout << "OK! Let's [" << buff << "]" << std::endl;
			add_contact(buff, contact[i]);
			i++;
		}
		else if (buff.compare("SEARCH") == 0)
		{
			std::cout << "These are the contacts saved in your phonebook:" << std::endl;
			std::cout << contact[0].get_details() << std::endl;
		}
		else if (buff.compare("EXIT") == 0)
		{
			std::cout << "Aight Imma yeet" << std::endl;
			return(0);
		}
		else
			std::cout << "YOU WROTE SOMETHING FUCKED YOU DICKHEAD" << std::endl;
	}
	return (0);
}