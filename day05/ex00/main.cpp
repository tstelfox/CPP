/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 11:19:16 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/18 16:30:00 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main() {

	Bureaucrat	coglione("Fantozzi", 150);

	std::cout << coglione;

	coglione.demotion();
	for (int i = 0; coglione.getGrade() != 1; i++) {
		coglione.promotion();
		std::cout << coglione;
	}
	coglione.promotion();
}