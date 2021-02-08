/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ABC.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 10:22:56 by tmullan       #+#    #+#                 */
/*   Updated: 2021/02/08 10:22:56 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABC_HPP
# define ABC_HPP
# include "Base.hpp"


class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

Base*	generate(void);
void	identify_from_pointer(Base *p);
void	identify_from_reference(Base &p);

#endif