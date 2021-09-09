/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 12:39:13 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/09 17:06:57 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"

// int main()
// {
// 	MutantStack<int> mstack;

// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << mstack.top() << std::endl;

// 	mstack.pop();

// 	std::cout << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737); //[...] 
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();

// 	++it;
// 	--it;
// 	while (it != ite) {
// 		std::cout << *it << std::endl;
// 	++it; 
// 	}
	
// 	std::stack<int> s(mstack);
// 	return 0;
// }

int		main() {

	MutantStack<int>	stacko;

	stacko.push(99);
	stacko.push(43);
	stacko.push(49);
	stacko.push(69);
	stacko.push(79);

	MutantStack<int>::iterator	it = stacko.begin();
	MutantStack<int>::iterator	ite = stacko.end();

	std::cout << "Imma iterate up this stack" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	// std::cout << stacko.top() << std::endl;

	std::cout << "Now just gonna pop pop pop (three times)" << std::endl;
	stacko.pop();
	stacko.pop();
	stacko.pop();

	std::cout << "Size is now of: " << stacko.size() << std::endl;

	MutantStack<int>	copyo(stacko);
	std::cout << "The copied one has this at the top: " << copyo.top() << std::endl;

	return 0;
}