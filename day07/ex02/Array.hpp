/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 13:04:45 by tmullan       #+#    #+#                 */
/*   Updated: 2021/08/02 18:20:30 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>
# include <iostream>

template < typename T >

class Array {

	public:
		Array<T>() {
			elements = new T;
			_num = 0;
			elements = NULL;
		}

		Array<T>(unsigned int n) {
			elements = new T[n];
			_num = n;
		}

		Array<T>(Array<T> const &original) {
			*this = original;
		}

		Array&	operator=(Array<T> const &rhs) {

			if (this != &rhs) {
				// delete[] this->elements;
				this->_num = rhs._num;
				this->elements = new T[rhs._num];
				for (unsigned int i = 0; i < rhs.size(); i++)
					this->elements[i] = rhs.elements[i];
			}
			return (*this);
		}

		T&	operator[](unsigned int index) {
			if (index < 0 || index >= _num)
				throw (std::out_of_range("Not in range bruh"));
			return (elements[index]);
		}

		~Array<T>() {
			delete []elements;
		}

		unsigned int	size() const {
			return(this->_num);
		};

	private:
		unsigned int	_num;
		T*				elements;
};

#endif