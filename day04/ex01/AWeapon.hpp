/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 11:49:48 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/10 11:57:11 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
# include <string>

class	AWeapon {

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &original);
		AWeapon&	operator = (const AWeapon &original);
        ~AWeapon();
		
        std::string getName() const;
        int			getAPCost() const;
        int			getDamage() const;
        void		attack() const = 0;
	
	private:
		AWeapon();

	protected:
		std::string	_name;
		int			_apcost;
		int			_dmg;

}



#endif