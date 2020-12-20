/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:08:38 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 18:16:31 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"

class 	PlasmaRifle : public AWeapon {

	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &original);
		PlasmaRifle&	operator = (const PlasmaRifle &original);
		~PlasmaRifle();

		virtual void	attack() const;
	private:

}



#endif