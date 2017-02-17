/*
 * demoFieldWidth.cpp
 *
 *  Created on: 17 Feb 2017
 *      Author: emiliano
 */

#include "demoFieldWidth.h"

void demoFieldWidth() {
	/**
	 * Test the field "width" using the streams manipulator setw()
	 *
	 */
	const char *message = "wibble";

	// default field is 0
	std::cout << " (0)[" << message << "]" << std::endl;

	// set a field width
	std::cout << "(10)[" << std::setw(10) << message << "]" << std::endl;

	// the field width is the MINIMUM width, it doesn't cause truncation
	std::cout << " (4)[" << std::setw(4) << message << "]" << std::endl;
}


