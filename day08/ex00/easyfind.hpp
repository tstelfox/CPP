/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/04 15:35:31 by tmullan       #+#    #+#                 */
/*   Updated: 2021/08/24 11:54:36 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <vector>
# include <list>
# include <iostream>
# include <algorithm>
# include <iterator>

template < typename T>
typename T::iterator	easyfind(T &container, const int &second)
{
	typename T::iterator it = std::find(container.begin(), container.end(), second);
	if (it != container.end())
		return (it);
	else
		throw std::runtime_error("Not in there, boss");
}

#endif