/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 10:31:27 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/21 10:31:27 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>


class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &original);
		ShrubberyCreationForm&	operator = (const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor);	

	private:
		ShrubberyCreationForm();
		std::string		_target;
};

#endif