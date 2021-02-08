/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 10:39:38 by tmullan       #+#    #+#                 */
/*   Updated: 2021/02/08 10:39:38 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ABC.hpp"

Base::~Base() {}

Base*	generate(void) {

	srand(time(NULL));
	int rando = rand() % 3;
	Base* based = NULL;
	if (rando == 0) {
		based = new A;
		std::cout << "Generated A" << std::endl;
	}
	else if (rando == 1) {
		based = new B;
		std::cout << "Generated B" << std::endl;
	}
	else {
		based = new C;
		std::cout << "Generated C" << std::endl;
	}
	return based;
}

class Notrighttype : public std::exception {} ugh;

void	identify_from_pointer(Base* p) {

	try {
		if (A* rt = dynamic_cast<A*>(p)) {
			std::cout << "This a pointer to a type A" << std::endl;
			return;
		}
		throw ugh;
	}
	catch(std::exception &ugh) {}
	try {
		if (B* rt = dynamic_cast<B*>(p)) {
			std::cout << "This a pointer to a type B" << std::endl;
			return;
		}
		throw ugh;
	}
	catch(std::exception &ugh) {}
	try {
		if (C* rt = dynamic_cast<C*>(p)) {
			std::cout << "This a pointer to a type C" << std::endl;
			return;
		}
		throw ugh;
	}
	catch(std::exception &ugh) {}
}

void	identify_from_reference(Base& p) {

	try {
		A& rt = dynamic_cast<A&>(p);
		(void)rt;
		std::cout << "This a reference to a type A" << std::endl;
	}
	catch(std::exception &ugh) {}
	try {
		B& rt = dynamic_cast<B&>(p);
		(void)rt;
		std::cout << "This a reference to a type B" << std::endl;
	}
	catch(std::exception &ugh) {}
	try {
		C& rt = dynamic_cast<C&>(p);
		(void)rt;
		std::cout << "This a reference to a type C" << std::endl;
	}
	catch(std::exception &ugh) {}
}