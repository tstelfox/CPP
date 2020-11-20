/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 17:09:45 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/20 18:21:13 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

using namespace std;

class	pony {

	public:

		pony ( void );
		~pony ( void );

void	ponyOnTheHeap ( void );
void	ponyOnTheStack ( void );
void	heap_goes ( void );
void	stack_goes ( void );
};



#endif