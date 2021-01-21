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
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main() {

	Bureaucrat	coglione("Fantozzi", 135);
	PresidentialPardonForm		modulo("yer mum");


	Bureaucrat	direttore("Direttore generalissimo", 1);

	std::cout << direttore << coglione;

	std::cout << "\n----The lowly Fantozzi tries to sign the presidential pardon----" << std::endl;
	coglione.signForm(modulo);

	std::cout << "\n----The direttore generalissimo takes it from Fantozzi and tries to work with it----" << std::endl;
	direttore.executeForm(modulo);
	direttore.signForm(modulo);
	direttore.executeForm(modulo);


	RobotomyRequestForm			bollettino("il quadribuodiulo di tu ma");
	std::cout << "\n-----There is a form requiring four robotic procedures----" << std::endl;
	direttore.signForm(bollettino);
	direttore.signForm(bollettino);
	for (int i = 0; i < 4; i++)
		direttore.executeForm(bollettino);

	std::cout << "\n-----Can Fantozzi at least fulfill the request for shrubbery?----" << std::endl;

	ShrubberyCreationForm		coltivazione_demilitarizzata("La ganja");

	coglione.signForm(coltivazione_demilitarizzata);
	coglione.executeForm(coltivazione_demilitarizzata);

	return 0;
}