/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 17:52:28 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/24 16:57:55 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"
# include <iostream>
# include <string>

class	Human {

	public:

	Human ( void );
	~Human ( void );


const Brain&	getBrain ( void ) const;
const Brain*	identify ( void ) const;

	private:

const Brain _hisbrain;

};



#endif
