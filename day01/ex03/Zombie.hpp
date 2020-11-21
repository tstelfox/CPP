/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 11:57:28 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 15:42:43 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class	Zombie {

	public:

		Zombie ( void );
		~Zombie ( void );


void		set_name( std::string name );
void		set_type ( std::string type );
void		announce ( void ) const;

	private:

		std::string _type;
		std::string _name;

};

#endif