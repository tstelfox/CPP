/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 11:36:07 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/17 10:14:40 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"

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

#endif