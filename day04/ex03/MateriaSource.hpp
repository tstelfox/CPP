/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: codemuncher <codemuncher@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 11:07:13 by codemuncher   #+#    #+#                 */
/*   Updated: 2021/01/05 11:07:14 by codemuncher   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &original);
		MateriaSource&	operator = (const MateriaSource &original);
		virtual ~MateriaSource();

		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const & type);
	
	private:
		AMateria*	_reserves[4];	
};

#endif