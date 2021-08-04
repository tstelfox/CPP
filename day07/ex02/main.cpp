/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 14:35:00 by tmullan       #+#    #+#                 */
/*   Updated: 2021/08/04 13:23:40 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main() {

	Array<int> 			empty_int;
	Array<std::string>	str_arr(5);
	Array<float>		floating(5);


	std::string	good_words[5] = {"Diocane", "Madonna troia", "cristo in culo",
								"So fosse per me", "Rioghandi"};

	srand(time(NULL));
	for (unsigned int i = 0; i < str_arr.size(); i++)
	{
		str_arr[i] = good_words[rand() % 5];
		std::cout << "Element " << i << " of the array is: " << str_arr[i] << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "Now attempting to access an out of scope variable" << std::endl;
	try {
		str_arr[6] = "Not gonna happen";
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "Now an empty int array" << std::endl;	

	for (unsigned int i = 0; i <= empty_int.size(); i++)
		std::cout << "This array is empty: " << empty_int[i] << std::endl;

	std::cout << std::endl << "And now for some floats" << std::endl;

	for (unsigned int i = 0; i < floating.size(); i++)
	{
		floating[i] = 69.69 / rand();
		std::cout << "Element " << i << " of the array is: " << floating[i] << std::endl;
	}

	return 0;
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
// 	// for (int i = 0; i < MAX_VAL; i++)
//     // {
// 	// 	std::cout << numbers[i] << std::endl;
// 	// }
//     delete [] mirror;//
//     return 0;
// }
