/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 17:52:28 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 18:03:29 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "brain.hpp"

class	Human {

	public:

	Human ( void );
	~Human ( void );

const	Brain hisbrain;

int		identify ( void );
};



#endif