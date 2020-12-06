/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/06 17:24:17 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/06 17:33:25 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>

class	Sorcerer {

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer & original);
		~Sorcerer();
		Sorcerer& operator = (const Sorcerer &rhs);

	private:
		Sorcerer();
		std::string _name;
		std::string _title;
};

#endif