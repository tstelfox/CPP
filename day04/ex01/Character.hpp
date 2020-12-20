/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:15:00 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 20:57:04 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character {

	public:
		Character(std::string const & name);
		Character(const Character & original);
		Character& operator=(const Character & rhs);
		~Character();

		void	recoverAP();
		void	equip(AWeapon* weapon);
		void	attack(Enemy* target);
		
		AWeapon*	getWeapon() const;
		int			getAP() const;
		std::string getName() const;

	private:
		Character();
		std::string _name;
		int			_AP;
		AWeapon*	_equipped;
};

std::ostream & operator << (std::ostream &o, Character const & i);


#endif