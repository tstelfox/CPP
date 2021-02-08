/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 11:18:19 by tmullan       #+#    #+#                 */
/*   Updated: 2021/02/08 11:18:19 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ABC.hpp"

int		main(void) {

	Base *help = generate();

	identify_from_pointer(help);
	identify_from_reference(*help);

	delete help;
	return 0;
}
