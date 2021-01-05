/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 11:07:02 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/05 11:50:24 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice(std::string const &type);
		Ice(const Ice &original);
		Ice& operator = (const Ice &rhs);
		~Ice();

		virtual Ice* clone() const;
		virtual void use(ICharacter& target);

	private:
		Ice();
};

#endif