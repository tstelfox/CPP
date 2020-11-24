/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 17:47:53 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/24 16:28:42 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main() {
	
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	return (0);
}
