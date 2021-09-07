/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/01 13:45:02 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/07 15:19:51 by tmullan       ########   odam.nl         */
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

const char* Span::VectorNoSpanException::what() const throw() {

	return "Not enough elements in container to have a span";
}

Span&	Span::operator = (const Span &rhs) {
	if (this != &rhs)
	{
		_container = rhs._container;
		_size = rhs._size;
	}
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

	if (_container.size() > 1)
		return (*max_element(_container.begin(), _container.end()) 
			- *min_element(_container.begin(), _container.end()));
	else
		throw nospan;
}

int		Span::shortestSpan() {
	int	shortest = INT_MAX;

	if (_container.size() > 1)
	{
		for (int i = 0; _container[i - 1]; i++)
		{
			for (int k = i + 1; _container[k]; k++)
			{
				if (abs(_container[i] - _container[k]) < shortest)
					shortest = abs(_container[i] - _container[k]);
			}
		}
	}
	else
		throw nospan;
	return shortest;
}
