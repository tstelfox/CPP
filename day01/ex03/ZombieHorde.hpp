/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 16:46:11 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 17:24:35 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class	ZombieHorde {

	public:

	ZombieHorde ( int N );
	~ZombieHorde ( void );

void	announce ( void ) const;

	private:
	
	int 	_N;
	Zombie*	_lads;
};

#endif