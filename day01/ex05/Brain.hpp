/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 17:41:51 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/24 16:54:06 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class	Brain {

	public:

	Brain ( void );
	~Brain ( void );

const Brain*	identify ( void ) const;

};


#endif