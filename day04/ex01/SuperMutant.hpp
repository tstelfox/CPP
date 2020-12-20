/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:15:15 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 21:04:49 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {

	public:
		SuperMutant();
		SuperMutant(const SuperMutant &original);
		SuperMutant& operator=(const SuperMutant &rhs);
		virtual ~SuperMutant();
		
		void	takeDamage(int dmg);

	private:
};




#endif