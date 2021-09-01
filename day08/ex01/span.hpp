/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/25 12:22:49 by tmullan       #+#    #+#                 */
/*   Updated: 2021/09/01 13:49:40 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <algorithm>
# include <vector>

class Span {
	
	private:
			std::vector<int>	*_container;
			Span();
	public:
			Span(unsigned int N);
			Span(const Span &original);
			Span&	operator = (const Span &rhs);
			~Span();

			void	addNumber(const int num);
			int		shortestSpan();
			int		longestSpan();
};


#endif