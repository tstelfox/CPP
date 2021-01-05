/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 11:06:59 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/05 11:50:28 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure(std::string const &type);
		Cure(const Cure &original);
		Cure& operator = (const Cure &rhs);
		~Cure();

		virtual Cure* clone() const;
		virtual void use(ICharacter& target);

	private:
		Cure();
};

#endif