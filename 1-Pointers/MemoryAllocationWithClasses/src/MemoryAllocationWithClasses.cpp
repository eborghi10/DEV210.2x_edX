//============================================================================
// Name        : MemoryAllocationWithClasses.cpp
// Author      : Ing. Emiliano Borghi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "../include/Person.hpp"

/*
 * Use Eclipse IDE to compile
 *
 */

using namespace std;

int main() {
    /*
     * Dynamic memory allocation of an object of the class Person.
     *
     */

	// Creates a pointer to an object of the class "Person"
    Person *pOne = new Person("Tom","Thumb",25);

    cout << "First name of pOne = " << pOne->GetFirstName() << endl;

    cout << "Memory address of pOne = " << &pOne << endl;

    delete pOne;	// Deletes the pointers and calls the destructor

	return 0;
}
