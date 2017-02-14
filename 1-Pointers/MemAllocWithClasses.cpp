#include <iostream>

// Class "Person" implemented
#include "Person.hpp"

/*
 * To compile: g++ MemAllocWithClasses.cpp -o execute.sh
 *
 * To run: ./execute
 * (If a "permission denied" error appears, type: $chmod +x execute)
 *
 */

//using namespace std;

int main()
{
    /*
     * Dynamic memory allocation of an object of the class Person.
     *
     */

//    Person * pOne = new Person("Tom", "Thumb", 25);
    Person *pOne = new Person();

//    cout << "First name of pOne: " << pOne->GetFirstName() << endl;
    cout << "Memory address of pOne: " << &pOne << endl;

    // The destructor is called
    delete pOne;

    return 0;
}

