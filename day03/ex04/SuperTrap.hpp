/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 11:36:07 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 14:27:09 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
