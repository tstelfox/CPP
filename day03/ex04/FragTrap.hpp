/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 10:47:51 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 13:52:07 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap {

    public:
		FragTrap();
		FragTrap(std::string name);
        FragTrap(const FragTrap &original);
        ~FragTrap();
        FragTrap & operator = (const FragTrap &rhs);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	vaulthunter_dot_exe(std::string const & target);

	private:
};
