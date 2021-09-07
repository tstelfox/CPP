/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/07 12:20:01 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/07 12:22:12 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main() {

	int	nums[5] = {69, 4, 32, 98, 999};
	Span	test(5);

	for (int i = 0; i < 6; i++)	{
		test.addNumber(nums[i]);
	}
	std::cout << test.longestSpan() << std::endl;

	return 0;
}