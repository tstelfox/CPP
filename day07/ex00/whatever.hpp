/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 11:55:46 by tmullan       #+#    #+#                 */
/*   Updated: 2021/02/09 11:55:46 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <string>
# include <iostream>

template< typename T >
void	swap(T &lhs, T &rhs) {
	T	temp;
	temp = rhs;
	rhs = lhs;
	lhs = temp;
}

template< typename T >
T		min(T &x, T &y) {
	return(x >= y ? y : x);
}

template< typename T >
T		max(T &x, T &y) {
	return(x <= y ? y : x);
}

#endif
