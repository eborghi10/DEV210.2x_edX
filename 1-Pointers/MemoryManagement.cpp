#include <iostream>

/*
 * To compile: g++ MemoryManagement.cpp -o execute.sh
 *
 * To run: ./execute
 * (If a "permission denied" error appears, type: $chmod +x execute)
 *
 */

using namespace std;

int main()
{
    /*
     * Asigning a space dynamically to a POINTER.
     * It's not used another variable to do this.
     *
     * We have no idea what these memory addresses are because
     * they are allocated dynamically during runtime.
     *
     * They, both, occupy a memory address with a fixed size.  
     * In this case, it takes 4 bytes to hold a memory address.
     *
     */
    int *pInt = new int;
    double *pDouble = new double;

    cout << "Address of pInt:    " << pInt << endl;
    cout << "Address of pDouble: " << pDouble << endl;

    // Assign a value to each pointer
    *pInt = 3;
    *pDouble = 5.0;

    /*
     * Memory assigned for addresses: 8 bytes (each)
     *
     * Memory assigned for values: 4B (int) and 8B (double)
     *
     */

    cout << "Size of pInt:  " << sizeof(pInt) << endl;
    cout << "Size of *pInt: " << sizeof(*pInt) << endl;
    cout << "Size of pDouble:  " << sizeof(pDouble) << endl;
    cout << "Size of *pDouble: " << sizeof(*pDouble) << endl;

    /*
     * If you do not release the memory in your application, the
     * operating system will not reclaim it and this is known as a
     * memory leak.  It is compounded if your application continues
     * to dynamically allocate memory and doesn't release it.
     *
     */

    delete pInt;
    delete pDouble;

    return 0;
}