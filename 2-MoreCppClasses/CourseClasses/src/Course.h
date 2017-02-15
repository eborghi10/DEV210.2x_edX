/*
 * Course.h
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#ifndef COURSE_H_
#define COURSE_H_

#pragma once

#include "Student.h"
#include "Teacher.h"

class Course {
private:
	Student students[3];	// Students that assist to the course
	Teacher teacher;		// Teacher of the course
	std::string courseName;
public:
	Course();
	Course(std::string, Student, Student, Student, Teacher);
	virtual ~Course();

	void printName();
};

#endif /* COURSE_H_ */
