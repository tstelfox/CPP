/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/25 12:22:49 by tmullan       #+#    #+#                 */
/*   Updated: 2021/08/25 12:42:24 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

class Span {
	
	private:
			std::vector	_container;

	public:
			Span(unsigned int N);
			Span(const Span &original);
			Span&	operator = (const Span &rhs);
			~Span();

			addNumber(const int num);
			shortestSpan();
			longestSpan();
};


#endif