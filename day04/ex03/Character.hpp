/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 11:06:54 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/11 11:05:52 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : ICharacter {

	public:
		Character(std::string const &name);
		Character(const Character &original);
		Character&	operator = (const Character &rhs);
		
		virtual std::string const & getName();
		virtual void	equip(AMateria* m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);

	private:
		Character();
		AMateria*		_inventory[4];
		std::string		_name;
};

#endif