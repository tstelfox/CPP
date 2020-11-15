/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 18:41:26 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/15 19:02:52 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>

class	phonebook {

public:

	phonebook( void );
	~phonebook( void );

private:

	int number;
	char *name;

};

#endif