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
# include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure();
		Cure(const Cure &original);
		Cure& operator = (const Cure &rhs);
		virtual ~Cure();

		virtual AMateria* clone() const;
		void use(ICharacter& target);

	private:
	int		_xp;
};

#endif