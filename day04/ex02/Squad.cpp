/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 21:37:23 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/04 13:04:50 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _units(0) {
}

Squad::~Squad() {}

int		Squad::getCount() const {

	return _units;
}

ISpaceMarine*	Squad::getUnit(int N) const {

	if (N >= _units || N < 0)
		return (NULL);
	else
		return _dasquaw[N];
	
	
}

int		Squad::push(ISpaceMarine* recruit) {

	if (recruit != NULL)
	{
		_dasquaw[_units] = recruit;
		_units++;
	}
	else
		return _units;
}