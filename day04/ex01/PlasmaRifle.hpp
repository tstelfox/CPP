/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:08:38 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/10 12:24:45 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <string>
# include <iostream>

class 	PlasmaRifle : public AWeapon {

	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &original);
		PlasmaRifle&	operator = (const PlasmaRifle &original);
		~PlasmaRifle();

		void	attack() const;
	private:

}



#endif