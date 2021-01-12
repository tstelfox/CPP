/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 21:10:41 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/11 21:10:41 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++)
		_reserves[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &original) {

	*this = original;
}

MateriaSource&	MateriaSource::operator = (const MateriaSource &rhs) {

	(void)rhs;
	return *this;
}

MateriaSource::~MateriaSource() {}

void			MateriaSource::learnMateria(AMateria* learning) {

	int i = 0;
	while (i < 4) {
		if (_reserves[i] == NULL)
			break;
		i++;
	}
	if (learning == NULL || i == 4) {
		return;
	}
	_reserves[i] = learning;
	// std::cout << _reserves[i]->getType() << std::endl;
}

AMateria*		MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; _reserves[i] != NULL; i++) {

		if (type.compare(_reserves[i]->getType()) == 0) {
			return _reserves[i]->clone();
		}
	}
	return 0;
}
