/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 17:39:58 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/20 18:22:09 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

void	ponyOnTheHeap ( void ) {
	
	pony	Mandzukic;
	Mandzukic.heap_goes();
}

void	ponyOnTheStack ( void ) {

	pony* Pjanic = new pony();
	if (Pjanic == NULL)
		return ;
	Pjanic->stack_goes();

	delete Pjanic;
}

int		main(void) {
	
	ponyOnTheHeap();
	std::cout << "\n\n\n" << std::endl;
	ponyOnTheStack();

	return (0);
}