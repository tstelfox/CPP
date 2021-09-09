/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 12:39:13 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/09 13:02:05 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"

int		main() {

	MutantStack<std::string>	stacko;

	stacko.push("not Yee");
	stacko.push("Yeet");
	stacko.push("not Yeet");
	stacko.push("not even Yeet");
	stacko.push("not Yeet yet");
	stacko.push("noet");
	stacko.push("not et");

	MutantStack<std::string>::iterator	it;
	it = stacko.begin();
	std::cout << *it << std::endl;
	// std::cout << stacko.top() << std::endl;

	// stacko.pop();

	// std::cout << stacko.top() << std::endl;



	MutantStack<std::string>	copyo(stacko);
	std::cout << copyo.top() << std::endl;
}