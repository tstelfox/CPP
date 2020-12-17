/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 17:38:33 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/17 10:16:06 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

    public:
		ScavTrap(std::string name);
        ScavTrap(const ScavTrap &original);
        ~ScavTrap();
        ScavTrap & operator = (const ScavTrap &rhs);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	challengeNewcomer(std::string const & target);
	private:
		ScavTrap();
};

#endif