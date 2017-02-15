/*
 * Course.cpp
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#include <iostream>

#include "Course.h"

Course::Course() {}

Course::Course(std::string courseName, Student st1, Student st2, Student st3, Teacher teacher) {

	this->courseName = courseName;
	this->students[0] = st1;
	this->students[1] = st2;
	this->students[2] = st3;
	this->teacher = teacher;
}

Course::~Course() {
	// TODO Auto-generated destructor stub
}

void Course::printName() {
	std::cout << "Course Name: " << this->courseName << std::endl;
}
