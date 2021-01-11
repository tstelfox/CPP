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

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(AMateria *source) {

	learnMateria(source);
}

MateriaSource::MateriaSource(const MateriaSource &original) {

	*this = original;
}

MateriaSource::~MateriaSource() {}