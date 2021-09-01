/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/01 13:45:02 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/01 17:36:06 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) {
	_container = new std::vector<int>(N);
}

Span::Span(const Span &original) {
	*this = original;
}

Span::~Span() {
	delete[] _container;
}

Span&	Span::operator = (const Span &rhs) {
	if (this != &rhs)
		_container = rhs._container;
	return (*this);
}

void	Span::addNumber(const int num) {
	_container->push_back(num);
}

int		Span::longestSpan() {
	// DO the ting
}

int		Span::shortestSpan() {
	
}
