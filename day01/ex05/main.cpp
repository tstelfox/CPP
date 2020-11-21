/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 17:47:53 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/21 17:48:13 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int main() {
	
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	return (0);
}
