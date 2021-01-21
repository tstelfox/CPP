/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 10:31:07 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/21 10:31:07 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

# include "Form.hpp"


class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(const RobotomyRequestForm &original);
		RobotomyRequestForm&	operator = (const RobotomyRequestForm &rhs);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor);	

	private:
		RobotomyRequestForm();
		std::string		_target;
};

#endif