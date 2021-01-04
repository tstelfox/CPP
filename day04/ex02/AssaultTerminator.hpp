/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 21:19:54 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/04 15:43:32 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &original);
		AssaultTerminator& operator = (const AssaultTerminator &rhs);
		virtual ~AssaultTerminator();

		virtual ISpaceMarine* clone() const;
		virtual void	battleCry() const;
		virtual void	rangedAttack() const;
		virtual void	meleeAttack() const;

	private:


};

#endif