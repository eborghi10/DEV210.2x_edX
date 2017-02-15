//============================================================================
// Name        : CourseClasses.cpp
// Author      : Ing. Emiliano Borghi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Course.h"

using namespace std;

int main() {

	Student *Student1 = new Student(
			"Pepe",
			"López",
			45,
			"Av. Siempreviva 123",
			"New Jersey",
			13245325);

	Student *Student2 = new Student(
			"Miguel",
			"Pérez",
			62,
			"Av. 25 de Mayo 235",
			"Buenos Aires",
			35945323);

	Student *Student3 = new Student(
			"Marcelo",
			"Bielsa",
			24,
			"Cucha Cucha",
			"Palermo",
			14930534);

	Teacher *pTeacher = new Teacher(
			"Antonio",
			"Areán",
			54,
			"Av. Rivadavia 42423",
			"Ramos Mejía",
			91359351);

	Course *pCourse = new Course(
			(std::string)"Intermediate C++",
			*Student1,
			*Student2,
			*Student3,
			*pTeacher);

	Student stud1;

	cout << stud1.getAddress() << endl;

	pCourse->printName();
	pTeacher->GradeStudent();
	pTeacher->SitInClass();

	return 0;
}
