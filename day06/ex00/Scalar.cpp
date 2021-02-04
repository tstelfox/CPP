/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 09:58:28 by tmullan       #+#    #+#                 */
/*   Updated: 2021/02/02 13:32:21 by tmullan       ########   odam.nl         */
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
	int		intliteral;
	temp >> intliteral;

	std::cout << std::fixed << std::setprecision(1);
	if (isprint(intliteral))
		std::cout << "char: " << static_cast<char>(intliteral) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (edgecases[inttype].empty())
		std::cout << "int: " << intliteral << std::endl;
	else
		std::cout << "int: " << edgecases[inttype] << std::endl;
	if (edgecases[floattype].empty())
		std::cout << "float: " << static_cast<float>(intliteral) << "f" << std::endl;
	else
		std::cout << "float: " << edgecases[floattype] << std::endl;
	if (edgecases[doubletype].empty())
		std::cout << "double: " << static_cast<double>(intliteral) << std::endl;
	else
		std::cout << "double: " << edgecases[doubletype] << std::endl;
}

void	Scalar::fromFloat(std::stringstream const &ss) {
	
	std::stringstream temp;
	temp << ss.str();
	float	floatliteral;
	std::string popstring = temp.str();
	popstring.pop_back();
	temp.str("");
	temp << popstring;
	temp >> floatliteral;

	std::cout << std::fixed << std::setprecision(1);
	if (isprint(floatliteral))
		std::cout << "char: " << static_cast<char>(floatliteral) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (edgecases[inttype].empty())
		std::cout << "int: " << static_cast<int>(floatliteral) << std::endl;
	else
		std::cout << "int: " << edgecases[inttype] << std::endl;
	if (edgecases[floattype].empty())
		std::cout << "float: " << floatliteral << "f" << std::endl;
	else
		std::cout << "float: " << edgecases[floattype] << std::endl;
	if (edgecases[doubletype].empty())
		std::cout << "double: " << static_cast<double>(floatliteral) << std::endl;
	else
		std::cout << "double: " << edgecases[doubletype] << std::endl;
}

void	Scalar::fromDouble(std::stringstream const &ss) {
	
	std::stringstream temp;
	temp << ss.str();
	double	doubleliteral;
	temp >> doubleliteral;

	std::cout << std::fixed << std::setprecision(1);
	if (isprint(doubleliteral))
		std::cout << "char: " << static_cast<char>(doubleliteral) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (edgecases[inttype].empty())
		std::cout << "int: " << static_cast<int>(doubleliteral) << std::endl;
	else
		std::cout << "int: " << edgecases[inttype] << std::endl;
	if (edgecases[floattype].empty())
		std::cout << "float: " << static_cast<float>(doubleliteral) << "f" << std::endl;
	else
		std::cout << "float: " << edgecases[floattype] << std::endl;
	if (edgecases[doubletype].empty())
		std::cout << "double: " << doubleliteral << std::endl;
	else
		std::cout << "double: " << edgecases[doubletype] << std::endl;
}

void	Scalar::fromPseudo(std::stringstream const &ss) {
	
	(void)ss;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	for (int i = 0; i < 6; i++) {

	}
	// Let's fucking go!
	// std::cout << "test5" << ss.str() << std::endl;
}

void	Scalar::fromBadinput(std::stringstream const &ss) {

	(void)ss;
	std::cout << "Input cannot be processed."<< std::endl;
}

void	Scalar::overflow(int type) {

	std::stringstream ss;
	ss << _input;
	long double	temp;
	std::string popstring = ss.str();
	popstring.pop_back();
	ss.str("");
	ss << popstring;
	ss >> temp;
	// std::cout << ss.str() << std::endl;
	// std::cout << temp << std::endl;
	if (temp > INT_MAX || temp < INT_MIN) {
		edgecases[inttype] = "impossible";
		if (type == inttype) {
			edgecases[floattype] = "impossible";
			edgecases[doubletype] = "impossible";
		}
	}
	if (temp > __FLT_MAX__ || temp < -(__FLT_MAX__))
	{
		edgecases[floattype] = "impossible";
		if (type == floattype)
			edgecases[doubletype] = "impossible";
	}
	if (temp > __DBL_MAX__ || temp < -(__DBL_MAX__)) {
		std::cout << temp << " nah?" << std::endl;
		edgecases[doubletype] = "impossible";
	}
}

void	Scalar::convert(int type) {

	// void	(Scalar::*converter[6])(std::stringstream const &ss); Thijs says this is garbage
	func_array converter[6] = { &Scalar::fromChar , &Scalar::fromInt , &Scalar::fromFloat ,
						&Scalar::fromDouble, &Scalar::fromPseudo, &Scalar::fromBadinput };
	
	std::stringstream	ss(_input);
	if (type > 0 && type < 4)
		overflow(type);
	(this->*converter[type])(ss);
}

void	Scalar::parse() {

	int len = _input.length();
	
	
	if (len == 1 && !isdigit(_input[0])) {
		convert(chartype);
		return;
	}
	for (int i = 0; i < 6; i++) {
		if (_input.compare(_pseudos[i]) == 0) {
			convert(pseudotype);
			return;
		}
	}
	if (!isdigit(_input[0]) && _input[0] != '-') {
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
				i++;
			}
			convert(doubletype);
			return;
		}
	}
	convert(inttype);
}
