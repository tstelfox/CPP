/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 15:56:37 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/23 15:51:49 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class	Intern {

	public:
		Intern();
		Intern(const Intern &original);
		Intern&	operator = (const Intern &rhs);
		~Intern();

		Form*		makeForm(std::string const &form, std::string const &target);

		// Form*		shrub(std::string const &target);
		// Form*		pardon(std::string const &target);
		// Form*		robo(std::string const &target);

		class	FormNonExistent : public std::exception {
			public:
				virtual const char* what() const throw();
		} nonexistent;
};

#endif