/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 17:46:24 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 18:07:58 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain () {}

Brain::~Brain () {}

int*	Brain::identify () {

	int*	brainaddress = this->Brain;
	return (brainaddress);
}