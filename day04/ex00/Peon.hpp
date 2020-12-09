/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:12:51 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 16:35:16 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim {

	public:
		Peon(std::string name);
		Peon(const Peon &original);
		~Peon();
		Peon & operator = (const Peon &rhs);

		void	getPolymorphed( void ) const;

	private:
		Peon();
};


#endif