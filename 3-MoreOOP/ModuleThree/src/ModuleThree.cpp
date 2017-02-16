//============================================================================
// Name        : ModuleThree.cpp
// Author      : Ing. Emiliano Borghi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {

	Student *pStudent = new Student(
			"Sancho",
			"Panza",
			34,
			"Latin",
			12345678
			);

	Teacher *pTeacher = new Teacher(
				"José",
				"Hernández",
				131,
				"Gaucho",
				356
				);

	pStudent->OutputAge();
	pTeacher->OutputAge();

	delete pStudent;
	delete pTeacher;

	return 0;
}
