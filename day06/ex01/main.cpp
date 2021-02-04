/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 15:55:44 by tmullan       #+#    #+#                 */
/*   Updated: 2021/02/04 15:55:44 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"

int		main() {
	{
		Serial	test;

		std::cout << "As you can see it decerealised sweetly:\n" << test._cheerios->s1 
					<< "\n" << test._cheerios->n << "\n" << test._cheerios->s2 << std::endl;
	}
	return 0;
}