/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 16:18:14 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/20 16:53:37 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	std::string str;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; argv[i]; i++)
	{
		str = argv[i];
		for (size_t k = 0; k < str.length(); k++)
			putchar(toupper(argv[i][k]));
	}
	std::cout << std::endl;
	return (0);
}