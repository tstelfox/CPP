/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 17:13:04 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/25 19:20:43 by tmullan       ########   odam.nl         */
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
		Weapon*		_equipped;	// Pointer because it can be NULL and initialised later
								// A Reference must be initialised as a reference to something.
};


#endif