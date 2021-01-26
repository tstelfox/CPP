/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 09:59:59 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/26 09:59:59 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int		main(int argc, char* argv[]) {

	if (argc != 2) {
		std::cout << "Hell fuckin nah" << std::endl;
		return 0;
	}
	Scalar	test(argv[1]);
	return 0;
}