/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 18:55:31 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/18 19:13:56 by tmullan       ########   odam.nl         */
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

	std::cout << "Welcome to Turlough's phonebook!" << std::endl;
	std::cout << "Type ADD to add a user\nSEARCH to search the phonebook\nEXIT to quit the phonebook:\n";
	while (1)
	{
		if (i > 0)
			std::cout << "You have [" << 8 - i << "] free contact space left.\nADD, SEARCH or EXIT" << std::endl;
		if (i == 8)
		{
			std::cout << "The phonebook is full up! Adding another contact will erase the first user\n" << std::endl;
			i = 0;
		}
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
			int k = 0;
			while (k <= i)
			{
				std::cout << contact[k].get_details() << std::endl;
				k++;
			}
		}
		else if (buff.compare("EXIT") == 0)
		{
			std::cout << "Closing and deleting phonebook" << std::endl;
			return(0);
		}
		else
			std::cout << "YOU WROTE SOMETHING FUCKED YOU DICKHEAD" << std::endl;
	}
	return (0);
}