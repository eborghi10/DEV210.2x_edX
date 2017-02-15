//============================================================================
// Name        : VirtualFunctions.cpp
// Author      : Ing. Emiliano Borghi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Student.h"

using namespace std;

void demoFunction1(Person *ptr);
void demoFunction2(Person &ref);

int main() {

	/**
	 * Implements POLYMORPHISM
	 *
	 */

	Person *p = new Student(
			"Jane Smith",
			18,
			"Physics");

	/**
	 * p will use the function display() from the object Student, not from Person.
	 */
	p->display();

	demoFunction1(p);
	demoFunction2(*p);

	delete p;

	return 0;
}

void demoFunction1(Person *ptr) {
	ptr->display();
}

void demoFunction2(Person &ref) {
	ref.display();
}