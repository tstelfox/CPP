/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 18:45:38 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 18:47:11 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {

	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &original) : Enemy() {

	*this = original;
}

RadScorpion&	RadScorpion::operator=(const RadScorpion &rhs) {

	if (this != &rhs) {
		_hp = rhs._hp;
		_type = rhs._type;
	}

	return *this;
}

RadScorpion::~RadScorpion() {

	std::cout << "* SPROTCH *" << std::endl;
}