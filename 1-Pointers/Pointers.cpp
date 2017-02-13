//#include "stdafx.h" // It's not necessary in Linux
#include <iostream>

/*
 * To compile: g++ Pointers.cpp -o execute.sh
 *
 * To run: ./execute
 * (If a "permission denied" error appears, type: $chmod +x execute)
 *
 */

using namespace std;

int main()
{

    int num = 3;
    int *pNum = null;   
    pNum = &num;        // pNum <- &num : Address
                        // *pNum <- num : Value
    /*
     * NOTE: A word of caution when using pointers.  
     * You should always initialize a pointer variable to NULL,
     * nullptr, 0, or with a memory address. Leaving a pointer
     * variable uninitialized is an error that can result in
     * difficult to find bugs and create security issues for your code.
     *
     * Ensure that the variable you will be pointing to is the same data
     * type as the pointer you are declaring.
     *
     */

    cout << "Pointer address [pNum]: " << pNum << endl;
    cout << "Pointer content [*pNum]: " << *pNum << endl;
    cout << "Pointer address [&pNum]: " << &pNum << endl;

    /*
     * We change the value of the variable "num" through the 
     * dereference operator.
     *
     * Using the dereference operator, you can gain direct access to
     * the underlying value in the variable num.
     *
     */
    
    *pNum = 45;
    cout << "\nNew content [*pNum]: " << *pNum << endl;

    return 0;
}