/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 11:58:24 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/25 18:27:28 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA {

	public:
		HumanA ( std::string name , Weapon& equip );
		~HumanA ();

		void		attack();

	private:

		std::string	_name;
		Weapon&		_equipped; // Reference
};



#endif