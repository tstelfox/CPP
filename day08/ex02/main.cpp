/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 12:39:13 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/09 12:02:01 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"

int		main() {

	MutantStack<std::string>	stacko;

	stacko.push("Yeet");
	stacko.push("not Yeet");

	std::cout << stacko.top() << std::endl;

	stacko.pop();

	std::cout << stacko.top() << std::endl;
}