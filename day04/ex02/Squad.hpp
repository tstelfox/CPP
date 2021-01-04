/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 21:20:20 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/04 16:08:22 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <iostream>

class Squad : public ISquad {

	public:
		Squad();
		Squad(const Squad &original);
		Squad& operator = (const Squad &rhs);
		virtual ~Squad();

		virtual int	getCount() const;
		virtual	ISpaceMarine* getUnit(int N) const;
		virtual	int push(ISpaceMarine* recruit);
		
	private:
		int				_units;
		ISpaceMarine*	_dasquaw[]; // This needs to be refined
};

#endif