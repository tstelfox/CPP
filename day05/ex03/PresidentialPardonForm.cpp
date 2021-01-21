/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 11:57:37 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/21 11:57:37 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("yonks", 0 , 0) {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
			Form("Presidential Pardon", 25, 5) , _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original) :
			Form("Presidential Pardon", 25, 5) , _target(original._target) {}

PresidentialPardonForm&		PresidentialPardonForm::operator = (const PresidentialPardonForm &rhs) {

	if (this != &rhs) {
		_target = rhs._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) {

	(void)executor;
	std::cout << _target << " has been pardoned by Trump on his last day lol" << std::endl;
}