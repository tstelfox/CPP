/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/23 17:07:03 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/29 12:42:43 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP
# include <string>
# include <iostream>
# include <sstream>

class Scalar {

	public:
		Scalar(std::string const &input);
		Scalar(const Scalar &original);
		Scalar&	operator = (const Scalar &rhs);
		~Scalar();

		// typedef void 	(*from)(std::stringstream ss);
		void	parse();
		void	convert(int type);
		//All the functions to print the various outputs
		// void	fromChar(std::stringstream ss);
		// void	fromInt(std::stringstream ss);
		// void	fromFloat(std::stringstream ss);
		// void	fromDouble(std::stringstream ss);
		// void	fromPseudo(std::stringstream ss);
		// void	frombadinput(std::stringstream ss);

	private:
		Scalar();
		std::string	_input;

		enum Type {
			
			chartype,
			inttype,
			floattype,
			doubletype,
			pseudotype,
			badinput
		};

};





#endif