/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 11:19:16 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/19 12:25:54 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int		main() {

	Bureaucrat	coglione("Fantozzi", 150);
	PresidentialPardonForm		modulo("yer mum");

	coglione.signForm(modulo);

	Bureaucrat	direttore("Direttore generalissimo", 1);

	// direttore.signForm(modulo);
	// direttore.signForm(modulo);

	direttore.executeForm(modulo);

	direttore.signForm(modulo);

	direttore.executeForm(modulo);

	direttore.signForm(modulo);



}