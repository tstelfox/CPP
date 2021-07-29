/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 11:55:08 by tmullan       #+#    #+#                 */
/*   Updated: 2021/07/29 18:51:32 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int		main() {

	int		Donatello = 9 , Michelangelo = 69;
	double	Leonardo = 3.14 , Raffaello = 1.2358;
	std::string Goya = "Goya" , Picasso = "Picasso";

	std::cout << "To begin, Donatello = " << Donatello << ", Michelangelo = " << Michelangelo <<
				", Leonardo = " << Leonardo << ", Rafaello = " << Raffaello << ", Goya = " << Goya <<
				", Picasso = " << Picasso << "\n" << std::endl;

	swap(Donatello, Michelangelo);
	std::cout << "After swap, Donatello: " << Donatello << " Michelangelo: " << Michelangelo << std::endl;

	std::cout << "The biggest between Leonardo and Raffaello is: " << maximum(Leonardo, Raffaello) << std::endl;
	std::cout << "The smallest between Leonardo and Raffaello is: " << minimum(Leonardo, Raffaello) << std::endl;

	std::cout << "The smallest between Goya and Picasso is: " << minimum(Goya, Picasso) << std::endl;
	return 0;
}