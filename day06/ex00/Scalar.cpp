/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 09:58:28 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/29 15:52:22 by tmullan       ########   odam.nl         */
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

typedef void (Scalar::*func_array)(std::stringstream const &ss);

void	Scalar::fromChar(std::stringstream const &ss) {
	
	char	charliteral;
	charliteral = ss.str()[0];
	std::cout << std::fixed << std::setprecision(1);
	if (isprint(charliteral))
		std::cout << "char: " << charliteral << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(charliteral) << std::endl;
	std::cout << "float: " << static_cast<float>(charliteral) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(charliteral) << std::endl;
	std::cout << "Dear god please not here --- why tho" << std::endl;
}

void	Scalar::fromInt(std::stringstream const &ss) {
	
	std::stringstream temp; 
	temp << ss.str();
	int		intliteral = 0;
	temp >> intliteral;

	std::cout << std::fixed << std::setprecision(1);
	if (isprint(intliteral))
		std::cout << "char: " << static_cast<char>(intliteral) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << intliteral << std::endl;
	std::cout << "float: " << static_cast<float>(intliteral) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(intliteral) << std::endl;
}

void	Scalar::fromFloat(std::stringstream const &ss) {
	
	std::cout << "test3" << ss.str() << std::endl; 
}

void	Scalar::fromDouble(std::stringstream const &ss) {
	
	std::cout << "test4" << ss.str() << std::endl; 
}

void	Scalar::fromPseudo(std::stringstream const &ss) {
	
	std::cout << "test5" << ss.str() << std::endl; 
}

void	Scalar::fromBadinput(std::stringstream const &ss) {

	std::cout << "test6" << ss.str() << std::endl;
}

void	Scalar::convert(int type) {

	// void	(Scalar::*converter[6])(std::stringstream const &ss); Thijs says this is garbage
	func_array converter[6] = { &Scalar::fromChar , &Scalar::fromInt , &Scalar::fromFloat ,
						&Scalar::fromDouble, &Scalar::fromPseudo, &Scalar::fromBadinput };
	
	std::stringstream	ss(_input);
	(this->*converter[type])(ss);
}

void	Scalar::parse() {

	int len = _input.length();
	std::string	pseudos[6] = {
								"+inf",
								"-inf",
								"nan",
								"+inff",
								"-inff",
								"nanf"
	};
	
	if (len == 1 && !isdigit(_input[0])) {
		convert(chartype);
		return;
	}
	for (int i = 0; i < 6; i++) {
		if (_input.compare(pseudos[i]) == 0) {
			convert(pseudotype);
			return;
		}
	}
	if (!isdigit(_input[0])) {
		convert(badinput);
		return;
	}
	for (int i = 0; _input[i]; i++) {
		if (_input[i] == '.') {
			while (_input[i]) {
				if (_input[i] == 'f') {
					convert(floattype);
					return;
				}
				convert(doubletype);
				return;
			}
		}
	}
	convert(inttype);
}
