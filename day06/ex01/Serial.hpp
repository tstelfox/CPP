/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serial.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 13:25:53 by tmullan       #+#    #+#                 */
/*   Updated: 2021/02/04 13:25:53 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
# define SERIAL_HPP
# include <string>
# include <iostream>

class Serial {

	public:
		Serial();
		~Serial();

		void*	serialise(void);
		struct Data {
			std::string s1;
			int n;
			std::string s2;
		};
		

		Data*	deserialise(void *raw);


	Data*	_cheerios;
	private:
};


#endif