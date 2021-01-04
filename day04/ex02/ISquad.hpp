/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 21:20:14 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/04 12:36:20 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include "ISpaceMarine.hpp"

class ISquad {

	public:
		ISquad() {}
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int N) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif