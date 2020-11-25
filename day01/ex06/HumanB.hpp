/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 17:13:04 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/25 18:27:20 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB {

	public:

		HumanB ( std::string name );
		~HumanB ();

		void		setWeapon( Weapon &equip );
		void		attack();

	private:
		std::string _name;
		Weapon*		_equipped; // Pointer
};


#endif