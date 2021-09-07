/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/07 12:20:01 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/07 21:19:49 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main() {

	int	nums[5] = {69, 4, 32, -7, 999};
	std::vector<int>	temp;
	Span	test(1001);
	Span	ranged(5);
	srand(time(NULL));

	for (int i = 0; i < 5; i++)
		temp.push_back(nums[i]);

	ranged.addRange(temp.begin(), temp.end());

	for (int i = 0; i < 1001; i++)
		test.addNumber(rand());

	try {
		std::cout << "Longest span here is: " << test.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Shortest span here is: " << test.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Longest span in the ranged is: " << ranged.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}