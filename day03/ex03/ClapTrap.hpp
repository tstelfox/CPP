/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 12:10:00 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/08 11:14:48 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class	ClapTrap {

	public:
		ClapTrap();
		ClapTrap(std::string name);
        ClapTrap(const ClapTrap &original);
        ~ClapTrap();
        ClapTrap & operator = (const ClapTrap &rhs);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string			_name;
        int					_hp;
        unsigned int		_maxHp;
        int					_ep;
		int					_maxEp;
		int					_level;
		int					_meleeDmg;
		int					_rangedDmg;
		int					_armour;
};