/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 12:39:32 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/09 12:44:21 by tmullan       ########   odam.nl         */
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
		MutantStack<T, Container>() : std::stack<T, Container>() {}
		~MutantStack<T, Container>() {}
		MutantStack<T, Container> (const MutantStack<T, Container> &original) : std::stack <T, Container>() {
			*this = original;
		}

		typedef typename std::stack<T,Container>::container_type::iterator iterator;
		iterator	begin() {return this->c.begin();}
		// Container::value_type&	fckiterate()
};


#endif