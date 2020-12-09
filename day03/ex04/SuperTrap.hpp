/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 11:36:07 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 16:05:10 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap , public NinjaTrap {

	public:
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap &original);
		SuperTrap & operator = (const SuperTrap &rhs);
		~SuperTrap();
		
		void		meleeAttack( std::string const &target );
		void		rangedAttack( std::string const &target );


	private:
		std::string _name;
		SuperTrap();
};
