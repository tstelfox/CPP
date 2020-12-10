/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:15:09 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/10 12:47:58 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <string>
# include <iostream>

class 	PowerFist : public AWeapon {

	public:
		PowerFist();
		PowerFist(const PowerFist &original);
		PowerFist&	operator = (const PowerFist &original);
		~PowerFist();

		virtual void	attack() const;
	private:

}


#endif