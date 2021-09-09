/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 12:39:32 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/09 12:01:06 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <algorithm>
# include <string>
# include <iostream>

template < class T , class Container = std::deque <T> >
class MutantStack : public std::stack< T , Container > {

	private:
		
	public:
		MutantStack<T, Container>() : std::stack<T, Container>() {
			
		}
		~MutantStack<T, Container>() {
			
		}

		// Container::value_type&	fckiterate()
};


#endif