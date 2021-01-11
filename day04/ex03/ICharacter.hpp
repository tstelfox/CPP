/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 11:07:06 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/11 10:56:46 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <iostream>
# include <string>

class	ICharacter {

	public:
		virtual ~ICharacter() {}
		
		virtual std::string const &getName() const = 0;
		virtual void	equip(AMateria* m) = 0;
		virtual void 	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;
			
};

#endif