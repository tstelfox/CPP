/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 17:53:46 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/25 11:57:54 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class	Weapon {

	public:

					Weapon(std::string type);
					~Weapon();

void				setType (std::string type);
const std::string&	getType () const;
	private:


					std::string _type;
};



#endif