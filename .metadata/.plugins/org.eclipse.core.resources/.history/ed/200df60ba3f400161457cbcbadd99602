/*
 * Student.cpp
 *
 *  Created on: 16 Feb 2017
 *      Author: emiliano
 */

#include "Student.h"
#include <iostream>

Student::Student()
	: Person("Unknown first name", "Unknown last name", 0, "Unknown race", 00000000) {}

Student::Student(const std::string & fName, const std::string & lName, int age,
		const std::string & race, long number)
	: Person(fName, lName, age, race, number) {}

Student::~Student() {}

void Student::OutputIdentity() {
	std::cout << "I am a student" << std::endl;
}

void Student::OutputAge() {
	OutputIdentity();
	Person::OutputAge();
}

