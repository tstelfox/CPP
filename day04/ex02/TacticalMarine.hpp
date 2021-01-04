/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 21:20:25 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/04 15:29:17 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &original);
		TacticalMarine& operator = (const TacticalMarine &rhs);
		virtual ~TacticalMarine();

		virtual ISpaceMarine* clone() const;
		virtual void	battleCry() const;
		virtual void	rangedAttack() const;
		virtual void	meleeAttack() const;

	private:


};

#endif