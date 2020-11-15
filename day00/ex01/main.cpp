/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 18:55:31 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/15 19:49:27 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		main() {

	std::string buff;

	std::cout << "Welcome to Turlough's phonebook, please type one of the following commands:" << std::endl;
	std::cout << "ADD to add a user\nSEARCH to search the phonebook\nEXIT to quit the phonebook:\n";
	std::cin >> buff;
	if (buff.compare("ADD") == 0)
		std::cout << "OK! Let's [" << buff << "]" << std::endl;
	else
		std::cout << "YOU WROTE SOMETHING FUCKED YOU DICKHEAD" << std::endl;

	return (0);
}