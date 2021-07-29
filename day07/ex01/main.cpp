/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 12:29:41 by tmullan       #+#    #+#                 */
/*   Updated: 2021/07/29 18:57:17 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main() {

	std::string		stonks[5] = {"stonks" , "yeet", "yonks", "yarps", "yelps"};
	int				rino[3] = {69, 0, 42};
	float			philosophers[5] = {69.69, 99.99, 1.0, 88.0, 95.11};

	iter(stonks, 5, printback);
	iter(rino, 3, printback);
	iter(philosophers, 5, printback);

	return 0;
}