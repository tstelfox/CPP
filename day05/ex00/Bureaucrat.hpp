/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 14:30:34 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/19 11:43:59 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
// # include <exception>

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
