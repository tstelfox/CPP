/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 14:55:03 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/21 14:55:03 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("yonks", 0 , 0) {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
			Form("Robotomy Request", 72, 45) , _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) :
			Form("Robotomy Request", 72, 45) , _target(original._target) {}

RobotomyRequestForm&		RobotomyRequestForm::operator = (const RobotomyRequestForm &rhs) {

	if (this != &rhs) {
		_target = rhs._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {

	(void)executor;
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomised successfully" << std::endl;
	else
		std::cout << "The robotomisation of " << _target << " failed miserably" << std::endl;
}
