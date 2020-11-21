/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 18:01:17 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 18:05:52 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human () {
}

Human::~Human () {
}

int		identify () {
	this->hisbrain.identify();
}