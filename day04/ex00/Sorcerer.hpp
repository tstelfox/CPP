/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/06 17:24:17 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 17:34:34 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class	Sorcerer {

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer & original);
		~Sorcerer();
		Sorcerer& operator = (const Sorcerer &rhs);

		std::string	getName( void ) const;
		std::string	getTitle( void ) const;
		void		polymorph( Victim const & target ) const;

	private:
		Sorcerer();
		std::string _name;
		std::string _title;
};

std::ostream & operator << (std::ostream &o, Sorcerer const & i);

#endif