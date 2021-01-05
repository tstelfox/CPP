/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 21:37:23 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/05 12:50:11 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _units(0) {
}

Squad::Squad(const Squad &original) {

	if (this->_units > 0)
	{
		for (int i = 0; i < this->_units; i++)
			delete this->_dasquaw[i];
	}
	for (int i = 0; i < original._units; i++)
	{
		this->_dasquaw[i] = original._dasquaw[i]->clone();
	}
	this->_units = original._units;
}

Squad&	Squad::operator = (const Squad &rhs) {

	if (this != &rhs) {
		_units = rhs._units;
		for (int i = 0; i < _units; i++)
			_dasquaw[i] = rhs._dasquaw[i];
	}
	return *this;
}

Squad::~Squad() {

	for (int i = 0; i < _units; i++) {
		delete _dasquaw[i];
	}
}

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
		return _units;
	}
	else
		return _units;
}