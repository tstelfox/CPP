/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:15:12 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/20 18:45:18 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <string>
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {

	public:
		RadScorpion();
		RadScorpion(const RadScorpion &original);
		RadScorpion& operator=(const RadScorpion &rhs);
		~RadScorpion();
		

	private:
};



#endif