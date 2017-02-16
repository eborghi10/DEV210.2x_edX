/*
 * Teacher.cpp
 *
 *  Created on: 16 Feb 2017
 *      Author: emiliano
 */

#include "Teacher.h"
#include <iostream>

Teacher::Teacher()
	: Person("Unknown first name", "Unknown last name", 0, "Unknown race", 00000000) {}

Teacher::Teacher(const std::string & fName, const std::string & lName, int age,
		const std::string & race, long number)
	: Person(fName, lName, age, race, number) {}

Teacher::~Teacher() {}

void Teacher::OutputIdentity() {
	std::cout << "I am a teacher" << std::endl;
}

void Teacher::OutputAge() {
	OutputIdentity();
	Person::OutputAge();
}

