/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 15:40:01 by tmullan       #+#    #+#                 */
/*   Updated: 2020/12/09 16:31:24 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <string>

class Victim
{
	public:
		Victim(std::string name);
		Victim(const Victim &original);
		Victim& operator = (const Victim &original);
		~Victim();

		void				introduce();
		std::string			getName() const;
		virtual void		getPolymorphed() const;

		
	protected:
		std::string _name;
	private:
		Victim();
};

std::ostream    &operator<<(std::ostream &o, Victim const &rhs);

#endif