/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 17:55:22 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/17 10:18:23 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP 
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap {

	public:
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &original);
		~NinjaTrap();
		NinjaTrap & operator = (const NinjaTrap &rhs);

		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);
		void	ninjaShoebox(const FragTrap &target);
		void	ninjaShoebox(const ScavTrap &target);
		void	ninjaShoebox(const NinjaTrap &target);
		
	private:
		NinjaTrap();

};

#endif