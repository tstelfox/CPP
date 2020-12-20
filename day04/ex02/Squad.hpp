/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 21:20:20 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 21:39:31 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"

class Squad : public ISquad { //Have to do all this in coplien and really should rewatch the shitty intra video
	
	public:
		Squad();
		Squad(const Squad &original);
		Squad& operator = (const Squad &rhs);
		virtual ~Squad(); //I'm guessing virtual then

		
	private:
		/* data */
};

Squad::Squad(/* args */)
{
}

Squad::~Squad()
{
}

#endif