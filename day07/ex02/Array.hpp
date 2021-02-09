/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 13:04:45 by tmullan       #+#    #+#                 */
/*   Updated: 2021/02/09 13:04:45 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>
# include <iostream>

template< typename T >

class array {

	public:
		Array<T>() {
			elements = new T*;
			elements = NULL;
		}

		Array<T>(unsigned int n) {
			elements = new T[n]();
		}

		Array<T>(Array const &original) {
			*this = original;
		}

		Array&	operator=(Array const &rhs) {

			if (this != &rhs) {
				
			}
		}

		~Array<T>() {
			delete elements;
		}

		unsigned int	size();

	private:
		T*	elements;
};

#endif