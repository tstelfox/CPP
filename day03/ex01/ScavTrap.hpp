/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 17:38:33 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/03 17:44:58 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class	ScavTrap {

    public:
		ScavTrap(std::string name);
        ScavTrap(const ScavTrap &original);
        ~ScavTrap();
        ScavTrap & operator = (const ScavTrap &rhs);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);

    private:
        ScavTrap();
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