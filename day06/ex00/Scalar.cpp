/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 09:58:28 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/29 12:48:17 by tmullan       ########   odam.nl         */
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


typedef void (*from)(std::stringstream const &ss);


void	fromChar(std::stringstream const &ss) {
	
	std::cout << "test1" << ss.str() << std::endl; 
}

void	fromInt(std::stringstream const &ss) {
	
	std::cout << "test2" << ss.str() << std::endl; 
}

void	fromFloat(std::stringstream const &ss) {
	
	std::cout << "test3" << ss.str() << std::endl; 
}

void	fromDouble(std::stringstream const &ss) {
	
	std::cout << "test4" << ss.str() << std::endl; 
}

void	fromPseudo(std::stringstream const &ss) {
	
	std::cout << "test5" << ss.str() << std::endl; 
}

void	fromBadinput(std::stringstream const &ss) {

	std::cout << "test6" << ss.str() << std::endl;
}

void	Scalar::convert(int type) {
	
	from func[6] = { fromChar , fromInt , fromFloat ,
						fromDouble, fromPseudo, fromBadinput };
	
	std::stringstream	ss;
	ss << _input;
	func[type](ss);
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
	
	if (len == 1 && isalpha(_input[0])) {
		convert(chartype);
	}
	for (int i = 0; i < 6; i++) {
		if (_input.compare(pseudos[i]) == 0) {
			convert(pseudotype);
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
					break;
				}
				convert(doubletype);
				break;
			}
		}
	}
	convert(inttype);
}
