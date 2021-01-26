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
# include <sstream>

class Scalar {

	public:
		Scalar(std::string const &input);
		Scalar(const Scalar &original);
		Scalar&	operator = (const Scalar &rhs);
		~Scalar();

		void	parse();
		//All the functions to print the various outputs
		void	char_process();
		void	int_process();
		void	float_process();
		// void	double_process(int literal);

	private:
		Scalar();
		std::string	_input;

};





#endif