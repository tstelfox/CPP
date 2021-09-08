/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/01 13:45:02 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/08 18:16:16 by tmullan       ########   odam.nl         */
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
		if (_container.size() >= _size)
			throw (full);
		_container.push_back(num);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	Span::addRange(std::vector<int>::iterator from, std::vector<int>::iterator to) {

	try {
		if (std::distance(from, to) + this->_container.size() > this->_size)
			throw (full);
		_container.insert(_container.end(), from, to);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int		Span::longestSpan() {

	if (_container.size() > 1)
	{
		return (*max_element(_container.begin(), _container.end()) 
			- *min_element(_container.begin(), _container.end()));
	}
	else
		throw nospan;
}

int		Span::shortestSpan() {
	int	shortest = INT_MAX;

	if (_container.size() > 1)
	{
		std::vector<int>	diff(_container.size());
		std::sort(_container.begin(), _container.end());
		std::adjacent_difference(_container.begin(), _container.end(), diff.begin());
		diff.erase(diff.begin());
		// std::cout << "Size is " << diff.size() << std::endl;
		// for (size_t i = 0; i < diff.size(); i++)
		// 	std::cout << "testing " << diff[i] << std::endl;
		shortest = *min_element(diff.begin(), diff.end());
	}
	else
		throw nospan;
	return shortest;
}
