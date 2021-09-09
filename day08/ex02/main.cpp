/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/08 12:39:13 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/09 13:04:43 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737); //[...] 
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; 
	}
	
	std::stack<int> s(mstack);
	return 0;
}

// int		main() {

// 	MutantStack<std::string>	stacko;

// 	stacko.push("not Yee");
// 	stacko.push("Yeet");
// 	stacko.push("not Yeet");
// 	stacko.push("not even Yeet");
// 	stacko.push("not Yeet yet");
// 	stacko.push("noet");
// 	stacko.push("not et");

// 	MutantStack<std::string>::iterator	it;
// 	it = stacko.begin();
// 	std::cout << *it << std::endl;
// 	// std::cout << stacko.top() << std::endl;

// 	// stacko.pop();

// 	// std::cout << stacko.top() << std::endl;



// 	MutantStack<std::string>	copyo(stacko);
// 	std::cout << copyo.top() << std::endl;
// }