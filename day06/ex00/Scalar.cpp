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

	convert();
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

void	Scalar::convert() {

	int literal = std::stoi(_input);
	char_process(literal);
	int_process(literal);
	float_process(literal);
	double_process(literal);
}

void	Scalar::char_process(int literal) {

	if (isprint(static_cast<char>(literal) == 0)) {
		std::cout << "char: Non displayable" << std::endl;
		return;
	}
	std::cout << "char : " << static_cast<char>(literal) << std::endl;
}