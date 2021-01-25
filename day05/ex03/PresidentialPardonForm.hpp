/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 10:30:32 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/21 10:30:32 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"


class PresidentialPardonForm : public Form {

	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(const PresidentialPardonForm &original);
		PresidentialPardonForm&	operator = (const PresidentialPardonForm &rhs);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;	

	private:
		PresidentialPardonForm();
		std::string		_target;
};

#endif