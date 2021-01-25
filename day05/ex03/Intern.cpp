/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 16:06:07 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/23 16:04:13 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &original) {

	*this = original;
}

Intern&		Intern::operator = (const Intern &rhs) {

	(void)rhs;
	return *this;
}

Intern::~Intern() {}

Form*		shrub(std::string const &target) {

	return new ShrubberyCreationForm(target);
}

Form*		pardon(std::string const &target) {

	return new PresidentialPardonForm(target);
}

Form*		robo(std::string const &target) {

	return new RobotomyRequestForm(target);
}

typedef Form* (*creator)(std::string const &target);

Form*		Intern::makeForm(std::string const &form, std::string const &target) {

	try {
		std::string	kinds[3] = { "ROBOTOMY REQUEST" , 
								"PRESIDENTIAL PARDON" , "SHRUBBERY CREATION"};
		creator porcamadonna[3] = { robo, pardon, shrub };
		char CAPS[form.length()];
		for (size_t i = 0; i < form.length(); i++)
			CAPS[i] = toupper(form[i]);
		for (int i = 0; i < 3; i++) {
			if (kinds[i].compare(CAPS) == 0) {
				std::cout << "Intern creates <" << form << ">" << std::endl;
				return porcamadonna[i](target);
			}
		}
		throw nonexistent;
	}
	catch (std::exception &e) {
		std::cout << "Intern could not create form because " << e.what() << std::endl;
		return NULL;
	}
	return (0);
}

const char* Intern::FormNonExistent::what() const throw() {

return "there is no form with that name";
}