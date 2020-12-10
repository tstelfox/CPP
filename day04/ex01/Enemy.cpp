/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 13:39:15 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/10 13:49:07 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp) , _type(type) {}

Enemy::Enemy(const Enemy &original) {

	*this = original;
}

Enemy&	Enemy::operator = (const Enemy &rhs) {

	if (this != &rhs) {
		_hp = rhs._hp;
		_type = rhs._type;
	}

	return *this;
}

Enemy::~Enemy() {}

std::string		Enemy::getType() const {

	return _type;
}

int				Enemy::getHP() const {

	return _hp;
}

virtual void	Enemy::takeDamage( int ) {

	//do something I guess.
}