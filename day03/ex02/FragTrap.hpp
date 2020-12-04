/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 10:47:51 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/04 16:51:08 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap {

    public:
		FragTrap(std::string name);
        FragTrap(const FragTrap &original);
        ~FragTrap();
        FragTrap & operator = (const FragTrap &rhs);

		void	vaulthunter_dot_exe(std::string const & target);

	private:
		FragTrap();
};
