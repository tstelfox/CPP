/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 17:26:33 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 17:30:52 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main ( void ) {

	std::string brain = "HI THIS IS BRAIN";

	std::string* brainptr = &brain;
	std::cout << *brainptr << std::endl;

	std::string& brainref = brain;
	std::cout << brainref << std::endl;
	return (0);
}