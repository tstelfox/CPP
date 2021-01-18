/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 14:30:30 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/18 16:26:24 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

	try {
		
		if (grade > 150)
			throw low;
		else if (grade < 1)
			throw high;
		_grade = grade;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}	
}

Bureaucrat::Bureaucrat(const Bureaucrat &original) {

	*this = original;
}

Bureaucrat&	Bureaucrat::operator = (const Bureaucrat &rhs) {

	if (this != &rhs) {
		// this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return "Nobody is that senior lol: that grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

	return "Nobody is that trodden upon lol: that grade is too low";
}

std::string const	Bureaucrat::getName() const {

	return _name;
}

int					Bureaucrat::getGrade () const {

	return _grade;
}

void				Bureaucrat::promotion() {

	try {
		if (this->_grade == 1)
			throw high;
		this->_grade--;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void				Bureaucrat::demotion() {

	try {
		if (this->_grade == 150)
			throw low;
		this->_grade++;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

std::ostream	&operator << (std::ostream &o, Bureaucrat const &rhs) {

	if (rhs.getGrade() < 1 || rhs.getGrade() > 150)
		o << rhs.getName() << ", bureaucrat grade <unavailable>." << std::endl;
	else
		o << rhs.getName() << ", bureaucrat grade <" << rhs.getGrade() << ">." << std::endl;
	return o;
}
