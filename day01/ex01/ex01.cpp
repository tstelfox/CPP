/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 11:50:13 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 11:53:57 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak() {
	
	std::string*        panther = new std::string("String panther");
	std::cout << *panther << std::endl;

	delete panther;
}
