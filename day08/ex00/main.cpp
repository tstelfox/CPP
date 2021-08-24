/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/04 15:36:40 by tmullan       #+#    #+#                 */
/*   Updated: 2021/08/24 11:58:42 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::vector<int> container;
	container.push_back(69);
	container.push_back(42);
	container.push_back(66);
	container.push_back(23);
	container.push_back(64);

	std::list<int> list;
	list.push_back(99);
	list.push_back(9);
	list.push_back(89);
	list.push_back(988);
	list.push_back(88);

	std::cout << "-------Vectors-------" << std::endl;
	try {
		std::cout << *easyfind(container, 23) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << *easyfind(container, 99) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "-------Now lists-------" << std::endl;
	
	try {
		std::cout << *easyfind(list, 99) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << *easyfind(list, 23) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}