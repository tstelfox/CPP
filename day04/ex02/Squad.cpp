/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 21:37:23 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/11 13:37:10 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _units(0) , _dasquaw(NULL) {
	
	_dasquaw = new ISpaceMarine*[9];
}	

Squad::Squad(const Squad &original) {

	_dasquaw = new ISpaceMarine*[9];
	for (int i = 0; i < original._units; i++)
	{
		this->_dasquaw[i] = original._dasquaw[i]->clone();
	}
	this->_units = original._units;
}

Squad&	Squad::operator = (const Squad &rhs) {

	if (this->_units > 0)
	{
		for (int i = 0; i < this->_units; i++)
			delete this->_dasquaw[i];
	}
	if (this != &rhs) {
		this->_units = rhs._units;
		for (int i = 0; i < this->_units; i++)
			_dasquaw[i] = rhs._dasquaw[i]->clone();
	}
	return *this;
}

Squad::~Squad() {

	for (int i = 0; i < this->_units; i++) {
		delete this->_dasquaw[i];
	}
	delete [] _dasquaw;
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

	for (int i = 0; i < 9; i++) {
		if (_dasquaw[i] == recruit)
			return _units;
	}
	if (recruit != NULL && _units < 9) {
		_dasquaw[_units] = recruit;
		_units++;
	}
	return _units;
}
