/*
 * demoJustification.cpp
 *
 *  Created on: 17 Feb 2017
 *      Author: emiliano
 */

#include "demoJustification.h"
/*
void repeatedMessage(const char* &msg1, const char* &msg2) {
	std::cout << "[" << std::setw(10) << msg1 << "]" << std::endl;
	std::cout << "[" << std::setw(10) << msg2 << "]" << std::endl << std::endl;
}*/

void repeatedMessage(bool mode) {

	if( mode ) {
		const char *message1 = "hello";
		const char *message2 = "world";

		std::cout << "[" << std::setw(10) << message1 << "]" << std::endl;
		std::cout << "[" << std::setw(10) << message2 << "]" << std::endl << std::endl;
	} else {
		std::cout << std::setw(10) << -123.45 << std::endl;
		std::cout << std::setw(10) << -67.89 << std::endl;
	}
}

void demoJustification() {

	// Default justification
	repeatedMessage(true);

	// Left justification
	std::cout << std::left;
	repeatedMessage(true);

	// Right justification
	std::cout << std::right;
	repeatedMessage(true);

	// Internal justification
	repeatedMessage(false);
	std::cout << std::internal;
	repeatedMessage(false);

	// Reinstantiate the DEFAULT right justification
	std::cout << std::right;
}
