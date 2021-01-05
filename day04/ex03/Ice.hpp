/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 11:07:02 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/05 16:21:27 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice();
		Ice(const Ice &original);
		Ice& operator = (const Ice &rhs);
		~Ice();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

	private:
};

#endif