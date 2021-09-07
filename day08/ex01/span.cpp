/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/01 13:45:02 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/07 12:19:45 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : _size(N) {}

Span::Span(const Span &original) {
	*this = original;
}

Span::~Span() {}

const char* Span::VectorFullException::what() const throw() {

	return "Container is already full";
}

Span&	Span::operator = (const Span &rhs) {
	if (this != &rhs)
		_container = rhs._container;
	return (*this);
}

void	Span::addNumber(const int num) {
	try {
		if (_container.size() < _size)
			_container.push_back(num);
		else
			throw (full);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int		Span::longestSpan() {
	int	lspan;

	lspan = *max_element(_container.begin(), _container.end()) - *min_element(_container.begin(), _container.end());
	
	return lspan;
}

// int		Span::shortestSpan() {
	
// }
