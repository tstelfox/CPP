/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/07 12:20:01 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/10 13:22:48 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main() {

	int	nums[5] = {69, 4, 17, -16, 999};
	std::vector<int>	temp;
	Span	test(1001);
	Span	ranged(6);
	Span	fail(1);
	
	srand(time(NULL));

	for (int i = 0; i < 5; ++i)
		temp.push_back(nums[i]);

	ranged.addNumber(1);
	ranged.addRange(temp.begin(), temp.end());

	for (int i = 0; i < 1001; ++i)
		test.addNumber(rand());
	fail.addNumber(1);
	std::cout << "Attempting to fill a Span of 1 with a second element: ";
	fail.addNumber(2);
	try {
		std::cout << "Longest span in the 1000+ container is: " << test.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Shortest span in the 1000+ container is: " << test.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Longest span in the normal sized one is: " << ranged.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Shortest span in the normal sized one is: " << ranged.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Span with 1 element: " << fail.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}