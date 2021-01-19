/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:00:49 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/19 12:38:23 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _signGrade(0) , _execGrade(0) {}

Form::Form(std::string name, int signgrade, int execgrade) : _signed(false) ,
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

void				Form::beSigned(Bureaucrat signee) {

	if (signee.getGrade() > _signGrade) {
		throw low;
	}
	else if (_signed == false) {
		_signed = true;
	}
	else
		throw already;
	
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