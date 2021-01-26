/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/23 17:07:03 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/23 17:09:24 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP
# include <string>
# include <iostream>

class Scalar {

	public:
		Scalar(std::string const &input);
		Scalar(const Scalar &original);
		Scalar&	operator = (const Scalar &rhs);
		~Scalar();

		void	parse();
		//All the functions to print the various outputs
		void	char_process(int literal);
		void	int_process(int literal);
		void	float_process(float skrrt);
		// void	double_process(int literal);

	private:
		Scalar();
		std::string	_input;

};





#endif