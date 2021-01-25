/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 14:30:30 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/23 16:05:59 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

	trycatch(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &original) : _name(original.getName()) {

	*this = original;
}

Bureaucrat&	Bureaucrat::operator = (const Bureaucrat &rhs) {

	if (this != &rhs) {
		// this->_name = rhs._name;
		trycatch(rhs._grade);
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

void				Bureaucrat::trycatch(int grade) {

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

void				Bureaucrat::signForm(Form &form) const {

	try {
		form.beSigned(*this);
		std::cout << "<" << getName() << "> signs <" 
			<< form.getName() << ">" << std::endl;
	}
	catch(std::exception &e) {
		std::cout << "<" << getName() << "> cannot sign <" 
			<< form.getName() << "> because " << e.what() << std::endl;
	}
}

void				Bureaucrat::executeForm(Form &form) const {

	try {
		form.executable(*this);
		std::cout << "<" << getName() << "> executes <" 
			<< form.getName() << ">" << std::endl;
		form.execute(*this);
	}
	catch(std::exception &e) {
		std::cout << "<" << getName() << "> cannot execute <" 
			<< form.getName() << "> because " << e.what() << std::endl;
	}
}

std::ostream	&operator << (std::ostream &o, Bureaucrat const &rhs) {

	if (rhs.getGrade() < 1 || rhs.getGrade() > 150)
		o << rhs.getName() << ", bureaucrat grade <unavailable>." << std::endl;
	else
		o << rhs.getName() << ", bureaucrat grade <" << rhs.getGrade() << ">." << std::endl;
	return o;
}
