/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:00:49 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/23 16:14:42 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _signGrade(0) , _execGrade(0) {}

Form::Form(std::string const &name, int signgrade, int execgrade) : _signed(false) ,
		_name(name) , _signGrade(signgrade) , _execGrade(execgrade) {
	
	trycatch(signgrade, execgrade);
}

Form::Form(const Form &original): _signed(original.getSignature()) , _name(original._name) , 
				_signGrade(original.getSignGrade()) , _execGrade(original.getExecGrade()) {
	
	trycatch(_signGrade, _execGrade);
	*this = original;
}

Form&	Form::operator = (const Form &rhs) {

	if (this != &rhs) {
		_signed = rhs._signed;
		trycatch(rhs._signGrade, rhs._execGrade);
	}
	return *this;
}

Form::~Form() {}

std::string	const	Form::getName() const {

	return _name;
}

bool				Form::getSignature() const {

	return _signed;
}

int					Form::getSignGrade() const {

	return _signGrade;
}

int					Form::getExecGrade() const {

	return _execGrade;
}

void				Form::beSigned(const Bureaucrat &signee) {

	if (signee.getGrade() > _signGrade) {
		throw low;
	}
	else if (_signed == false) {
		_signed = true;
	}
	else
		throw already;
}

void				Form::executable(const Bureaucrat &executor) {

	if (executor.getGrade() > _execGrade) {
		throw low;
	}
	else if (_signed == false) {
		throw notyet;
	}
}

const char* Form::GradeTooHighException::what() const throw() {

	return "Nobody would be senior enough to sign this: that grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {

	return "That grade is too low";
}

const char* Form::AlreadySignedException::what() const throw() {

	return "the form has already been signed";
}

const char* Form::NotYetSignedException::what() const throw() {

	return "the form must be signed first";
}

void				Form::trycatch(int signgrade, int execgrade) {

	try {
		if (signgrade < 1 || execgrade < 1)
			throw high;
		if (signgrade > 150 || execgrade > 150) 
			throw low;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

std::ostream&		operator << (std::ostream &o, const Form &rhs) {

	if (rhs.getSignature() == true) {
	o << "<" << rhs.getName() << "> form requires grade <" << rhs.getSignGrade() << "> to be signed off and grade <"
		<< rhs.getExecGrade() << "> to be executed. It has been signed." << std::endl;
	}
	else {
		o << "<" << rhs.getName() << "> form requires grade <" << rhs.getSignGrade() << "> to be signed off and grade <"
		<< rhs.getExecGrade() << "> to be executed. It has not yet been signed." << std::endl;
	}
	return o;
}

