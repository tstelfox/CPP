/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 12:39:32 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/09 11:47:41 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <algorithm>

template < class T , class Container = std::deque <T> >
class MutantStack : public std::stack< T , Container > {

	private:
		
	public:
		MutantStack<T>() {
			
		}
		~MutantStack<T>() {
			
		}

		Container::value_type&	fckiterate()
};


#endif