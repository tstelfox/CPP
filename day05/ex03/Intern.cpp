/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 16:06:07 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/21 16:06:07 by tmullan       ########   odam.nl         */
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

Form*		Intern::makeForm(std::string const &form, std::string const &target) {

	try {
		std::string	kinds[3] = { "ROBOTOMY REQUEST" , 
								"PRESIDENTIAL PARDON" , "SHRUBBERY CREATION"};
		char CAPS[form.length()];
		for (int i = 0; i < form.length(); i++)
			CAPS[i] = toupper(form[i]);
		for (int i = 0; i < 3; i++) {
			if (kinds[i].compare(CAPS) == 0)
				return ()
		}
	}
}

const char* Intern::FormNonExistent::what() const throw() {

	std::cout << "There is no form with that name" << std::endl;
}