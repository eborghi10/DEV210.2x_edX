/*
 * Student.cpp
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#include <iostream>
#include "Student.h"

Student::Student() : course("Unassigned") {
	// TODO Auto-generated constructor stub

}

Student::Student(std::string fName, std::string lName, int age,
		std::string course) : Person(fName, lName, age), course(course) {

}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

void Student::displayCourse() {
	std::cout << "Course: " << this->course << std::endl;
}

