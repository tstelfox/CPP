/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 10:47:51 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/17 10:16:53 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

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

#endif