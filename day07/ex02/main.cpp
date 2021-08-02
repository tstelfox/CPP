/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 14:35:00 by tmullan       #+#    #+#                 */
/*   Updated: 2021/08/02 18:11:34 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main() {

	Array<int> dafuck;
	Array<std::string> happenin(5);
	Array<float>	dioporco(2);
	std::string	good_words[3] = {"Diocane", "Madonna troia", "cristo in culo"};

	// happenin.setter("Diosporco", 2);
	happenin[3] = good_words[2];
	float	shit = 46.69;
	dioporco[1] = shit;

	for (unsigned int i = 0; i < happenin.size(); i++)
		std::cout << happenin[i] << std::endl;
	std::cout << dioporco[1] << std::endl;
	return 0;
}
