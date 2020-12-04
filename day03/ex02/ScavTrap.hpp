/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 17:38:33 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/04 16:58:24 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

    public:
		ScavTrap(std::string name);
        ScavTrap(const ScavTrap &original);
        ~ScavTrap();
        ScavTrap & operator = (const ScavTrap &rhs);

		void	challengeNewcomer(std::string const & target);
	private:
		ScavTrap();
};