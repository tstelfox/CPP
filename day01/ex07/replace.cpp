/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/26 11:03:02 by tmullan       #+#    #+#                 */
/*   Updated: 2020/11/26 15:01:14 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string		replace_occurrence(std::string buff, std::string s1, std::string s2) {

	if (buff.find(s1) != std::string::npos)
	{
		size_t	found = 0;
		while ((found = buff.find(s1, found)) != std::string::npos)
		{
			buff.replace(found, s1.length(), s2);
			found += s2.length();
		}
	}
	return (buff);
}

int		main(int argc, char* argv[]) {

	if (argc == 4)
	{
		std::string	newfile = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		if (s1.empty() || s2.empty())
		{
			std::cout << "Empty strings not allowed" << std::endl;
			return(0);
		}
		std::string buff;
		std::ifstream	myfile(newfile);
		if (myfile == NULL)
		{
			std::cout << "No such file" << std::endl;
			return(0);
		}
		std::ofstream	replacement(newfile.append(".replace"));
		if (replacement == NULL)
		{
			std::cout << "Could not create file" << std::endl;
			return(0);
		}
		while ( getline (myfile, buff))
		{
			buff = replace_occurrence(buff, s1, s2);
			replacement << buff << std::endl;
		}
		myfile.close();
		replacement.close();
	}
	else
		std::cout << "Incorrect amount of parameters" << std::endl;
}