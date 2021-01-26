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

	
	float fuckin_hell;
	// int literal;
	// double	skrrt;
	// // float	skrrf;
	// try {
	// 	literal = std::stoi(_input);
	// 	char_process(literal);
	// 	int_process(literal);
	// 	skrrt = std::stod(_input);
	// }
	// catch (std::invalid_argument &ha) {
	// 	std::cout << "char: impossible" << std::endl;
	// 	std::cout << "int: impossible" << std::endl;
	// }
	// float_process(skrrt);
	// // double_process(literal);
}

void	Scalar::char_process(int literal) {


}

void	Scalar::int_process(int literal) {

}

