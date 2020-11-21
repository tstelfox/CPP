/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 12:45:24 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 15:26:36 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class	ZombieEvent {

	public:

	ZombieEvent( void );
	~ZombieEvent ( void );

void	setZombieType ( std::string type , Zombie* id);
Zombie*	newZombie ( std::string name);

void	randomChump ( void );
	

};

#endif