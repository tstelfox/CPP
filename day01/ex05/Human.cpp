/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 18:01:17 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/24 16:57:51 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human () {
}

Human::~Human () {
}

const Brain&		Human::getBrain () const {
	
	return (this->_hisbrain);
}

const Brain*		Human::identify () const {

	return (_hisbrain.identify ());
}
