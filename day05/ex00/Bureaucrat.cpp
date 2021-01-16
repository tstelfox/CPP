/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 14:30:30 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/16 12:00:51 by tmullan       ########   odam.nl         */
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

	return "Nobody is that senior lol";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

	return "Nobody is that trodden upon lol";
}

std::string const	Bureaucrat::getName() const {

	return _name;
}

int					Bureaucrat::getGrade () const {

	return _grade;
}

std::ostream	&operator << (std::ostream &o, Bureaucrat const &rhs) {

	o << rhs.getName() << ", bureaucrat grade <" << rhs.getGrade() << ">." << std::endl;
	return o;
}
