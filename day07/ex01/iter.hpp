/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 12:19:28 by tmullan       #+#    #+#                 */
/*   Updated: 2021/02/09 12:19:28 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template< typename T>
void	iter(T* array, size_t const &len, void (f)(T)) {

	for (size_t i = 0; i < len; i++) {
		f(array[i]);
	}
}

template< typename T >
void	printback(T thing) {

	std::cout << thing << std::endl;
}


#endif