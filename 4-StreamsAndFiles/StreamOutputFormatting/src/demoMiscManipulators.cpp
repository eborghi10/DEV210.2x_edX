/*
 * demoMiscManipulators.cpp
 *
 *  Created on: 17 Feb 2017
 *      Author: emiliano
 */

#include "demoMiscManipulators.h"

void demoMiscManipulators() {

	int x = 3;
	int y = 4;
	int z = -5;

	// Showing/hiding + sign
	std::cout << std::showpos;
	std::cout << x << "\t" << y << "\t" << z << std::endl;
	std::cout << std::noshowpos << std:: endl;
	std::cout << x << "\t" << y << "\t" << z << std::endl;

	// Formatting numbers in different bases
	std::cout << 64 << std::endl;
	std::cout << std::oct << 64 << std::endl;
	std::cout << std::hex << 64 << std::endl << std::endl;
	std::cout << std::dec;

	// Displaying a prefix to indicate the base
	std::cout << std::showbase;
	std::cout << 64 << std::endl;
	std::cout << std::oct << 64 << std::endl;
	std::cout << std::hex << 64 << std::endl << std::endl;
	std::cout << std::noshowbase;

	// Displaying letters in uppercase within numbers
	std::cout << std::uppercase << 123456789 << std::endl;
	std::cout << std::nouppercase << 123456789 << std::endl;
	std::cout << std::dec;
}


