/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/07 12:20:01 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/07 15:23:44 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main() {

	int	nums[5] = {69, 4, 32, -7, 999};
	Span	test(5);
	Span	fail(2);

	for (int i = 0; i < 6; i++)	{
		test.addNumber(nums[i]);
	}
	fail.addNumber(4);
	fail.addNumber(4);
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
		std::cout << "Longest span here is: " << fail.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}