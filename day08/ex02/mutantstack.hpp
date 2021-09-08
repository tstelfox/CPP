/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 12:39:32 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/08 18:52:50 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <algorithm>

template < typename T >
class MutantStack : public std::stack<T> {

	private:
		
	public:
		MutantStack<T>() {
			
		}
		~MutantStack<T>();

		Container::value_type&	fckiterate()
};


#endif