/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 17:33:44 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/19 12:27:29 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:
		
		Form(std::string const &name, int signgrade, int execgrade);
		Form(const Form &original);
		Form& operator = (const Form &rhs);
		~Form();

		std::string const	getName() const;
		bool				getSignature() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(const Bureaucrat &signee);
		void				executable(const Bureaucrat &executor) const;
		void				trycatch(int signgrade, int execgrade);

		virtual void		execute(Bureaucrat const &executor) const = 0;

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		} high;
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		} low;
		class	AlreadySignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		} already;
		class	NotYetSignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		} notyet;

	private:
		Form();
		bool				_signed;
		std::string	const	_name;
		int			const	_signGrade;
		int			const	_execGrade;

};

std::ostream&	operator << (std::ostream &o, const Form &rhs);

#endif