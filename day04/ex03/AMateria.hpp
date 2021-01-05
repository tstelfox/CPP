/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 11:06:29 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/05 16:17:52 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria {

	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &original);
		AMateria& operator = (const AMateria &rhs);
		~AMateria();

		std::string const & getType() const; // Returns the materia type
		unsigned int getXP() const; // Returns the Materia's XP

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);

	private:
		unsigned int	_xp;
		
	protected:
		std::string		_type;
		AMateria();
};

#endif