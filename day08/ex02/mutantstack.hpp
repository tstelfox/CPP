/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 12:39:32 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/09 17:07:10 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <algorithm>
# include <string>
# include <list>
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
		MutantStack&	operator = (const MutantStack<T,Container> &rhs) {
			if (this != &rhs)
				this->c = rhs.c;
			return *this;
		}

		typedef typename std::stack<T,Container>::container_type::iterator iterator;
		iterator	begin() {return this->c.begin();}
		iterator	end() {return this->c.end();}

		typedef	typename std::stack<T, Container>::container_type::const_iterator	const_iterator;
		const_iterator	begin() const {return this->c.begin();}
		const_iterator	end() const {return this->c.end();}

		typedef typename std::stack<T,Container>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator	rbegin() {return this->c.rbegin();}
		reverse_iterator	rend() {return this->c.rend();}

		typedef typename std::stack<T,Container>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator	rbegin() const {return this->c.rbegin();}
		const_reverse_iterator	rend() const {return this->c.rend();}
};


#endif