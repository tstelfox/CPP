/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 14:30:34 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/19 12:37:48 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include "Form.hpp"
// # include <exception>

class Form;

class Bureaucrat {

	public:
		
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &original);
		Bureaucrat&	operator = (const Bureaucrat &rhs);
		~Bureaucrat();

		std::string const	getName() const;
		int					getGrade() const;
		void				promotion();
		void				demotion();
		void				trycatch(int grade);
		void				signForm(Form &form) const;
		void				executeForm(Form const &form) const;

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		} high;
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		} low;

	private:
		Bureaucrat();
		std:: string const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);


#endif
