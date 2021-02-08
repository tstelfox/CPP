/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serial.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 15:54:04 by tmullan       #+#    #+#                 */
/*   Updated: 2021/02/04 15:54:04 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"

Serial::Serial() {

	void* raw = serialise();
	_cheerios = deserialise(raw);
}

Serial::Serial(const Serial &original) {

	*this = original;
}

Serial&		Serial::operator=(const Serial &rhs) {

	if (this != &rhs) {

		_cheerios = rhs._cheerios;
	}
	return *this;
}

Serial::~Serial() {

	delete _cheerios;
}

void*	Serial::serialise() {

	srand(time(NULL));
	Data *data = new Data;
	const char* alphanum = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	
	for (int i = 0; i < 8; i++) {
		data->s1 += alphanum[rand() % 64];
	}
	data->n = rand();
	for (int i = 0; i < 8; i++) {
		data->s2 += alphanum[rand() % 64];
	}
	
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;

	std::cout << "Size of, respectively s1, n and s2: " 
			<< sizeof(data->s1) << " " << sizeof(data->n) << " " << sizeof(data->s2) << std::endl;

	return reinterpret_cast<void*>(data);
}

Serial::Data*	Serial::deserialise(void *raw) {

	return reinterpret_cast<Data*>(raw);
}