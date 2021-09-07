/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/25 12:22:49 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/07 18:24:36 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <algorithm>
# include <vector>
# include <iostream>
# include <time.h>

class Span {
	
	private:
			std::vector<int>	_container;
			unsigned int		_size;
			Span();
	public:
			Span(unsigned int N);
			Span(const Span &original);
			Span&	operator = (const Span &rhs);
			~Span();

			void	addNumber(const int num);
			void	addRange(std::vector<int>::iterator from, std::vector<int>::iterator to);
			int		shortestSpan();
			int		longestSpan();

			class	VectorFullException : public std::exception {
			public:
				virtual const char* what() const throw();
			} full;

			class	VectorNoSpanException : public std::exception {
			public:
				virtual const char* what() const throw();
			} nospan;
};


#endif