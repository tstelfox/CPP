/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 15:16:28 by tmullan       #+#    #+#                 */
/*   Updated: 2021/01/21 15:16:28 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("yonks", 0 , 0) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
			Form("Shrubbery Creation", 145, 137) , _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) :
			Form("Shrubbery Creation", 145, 137) , _target(original._target) {}

ShrubberyCreationForm&		ShrubberyCreationForm::operator = (const ShrubberyCreationForm &rhs) {

	if (this != &rhs) {
		_target = rhs._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

	(void)executor;
	std::string targetname = _target;
	std::ofstream	shrub(targetname.append("_shrubbery"));
	shrub << "	         		  .                         " << std::endl;
	shrub << "                    M                         "  << std::endl;
	shrub << "                   dM                         "  << std::endl;
	shrub << "                   MMr                        "  << std::endl;
	shrub << "                  4MMML                  .    "  << std::endl;
	shrub << "                  MMMMM.                xf    "  << std::endl;
	shrub << "  .              +MMMMM               .MM-    "  << std::endl;
	shrub << "   Mh..          +MMMMMM            .MMMM     "  << std::endl;
	shrub << "   .MMM.         .MMMMML.          MMMMMh     "  << std::endl;
	shrub << "    )MMMh.        MMMMMM         MMMMMMM      "  << std::endl;
	shrub << "     3MMMMx.     'MMMMMMf      xnMMMMMM+      "  << std::endl;
	shrub << "     '*MMMMM      MMMMMM.     nMMMMMMP=       "  << std::endl;
	shrub << "       *MMMMMx    +MMMMM.    .MMMMMMM=        "  << std::endl;
	shrub << "        *MMMMMh   .MMMMM.   JMMMMMMP          "  << std::endl;
	shrub << "          MMMMMM   3MMMM.  dMMMMMM            "  << std::endl;
	shrub << "           MMMMMM  3MMMM  .MMMMM(        .nnMP" << std::endl;
	shrub << "=..          *MMMMx  MMM  dMMMM(    .nnMMMMM* " << std::endl;
	shrub << " MMn...     'MMMMr 'MM   MMM()   .nMMMMMMM*   " << std::endl;
	shrub << "  *4MMMMnn..   *MMM  MM  MMPo  .dMMMMMMM*     " << std::endl;
	shrub << "    ^MMMMMMMMx.  *ML MM .M*  .MMMMMM**        " << std::endl;
	shrub << "       *PMMMMMMhn. *x > M  .MMMM**-           " << std::endl;
	shrub << "          ****MMMMhx/.h/ .=**                 " << std::endl;
	shrub << "                   .3P33....                  " << std::endl;
	shrub << "                 nP     *MMnx                 " << std::endl;
	shrub.close();
}
