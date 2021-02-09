/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 12:29:41 by tmullan       #+#    #+#                 */
/*   Updated: 2021/02/09 12:29:41 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// void	print_array(std::string str) {

// 	std::cout << str << std::endl;
// }

int		main() {

	std::string		stonks[5] = {"stonks" , "yeet", "yonks", "yarps", "yelps"};
	int				rino[3] = {69, 0, 42};

	iter(stonks, 5, printback);
	iter(rino, 3, printback);

	return 0;
}