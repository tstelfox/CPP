/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 09:58:28 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/26 09:58:28 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(std::string const &input) : _input(input){

	parse();
}

Scalar::Scalar(const Scalar &original) {

	*this = original;
}

Scalar&	Scalar::operator = (const Scalar &rhs) {

	if (this != &rhs) {
		_input = rhs._input;
	}
	return *this;
}

Scalar::~Scalar() {}

void	Scalar::parse() {

	double	diteral;
	char	citeral;
	int		literal;
	float	fiteral;
	std::stringstream dupalle;
	dupalle << _input;
	dupalle >> fiteral;
	std::cout << "float status is: " << fiteral << std::endl; // Ok this shit could be fun.
	std::cout << "What's in the string stream yo " << dupalle.str() << std::endl;
	dupalle >> diteral;
	std::cout << "double status is: " << diteral << std::endl;
	// dupalle << _input;
	dupalle >> literal;
	std::cout << "int status is: " << literal << std::endl;
	std::cout << "What's in the string stream yo " << dupalle.str() << std::endl;
	// dupalle << _input;
	// dupalle << _input;
	dupalle >> citeral;
	std::cout << "char status is: " << citeral << std::endl;
	// Or generally not cause I still have to figure out which fucking type it is madonna puttana maiala bastarda
}

// void	Scalar::char_process(int literal) {


// }

// void	Scalar::int_process(int literal) {

// }

