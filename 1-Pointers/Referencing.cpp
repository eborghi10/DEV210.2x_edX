#include <iostream>

/*
 * To compile: g++ Referencing.cpp -o execute.sh
 *
 * To run: ./execute
 * (If a "permission denied" error appears, type: $chmod +x execute)
 *
 */

using namespace std;

int main()
{
    int num = 3;
    // Creates a "copy" of the variables "num" as REFERENCE.
    int &refNum = num;

    cout << "[num]:    " << num << endl;
    cout << "[refNum]: " << refNum << endl;

    refNum++;    // increment refNum by 1

    cout << "> refNum++\n" << endl;
    cout << "[num]:    " << num << endl;
    cout << "[refNum]: " << refNum << endl;
    cout << "\nrefNum is located at " << &refNum <<
            " and num is located at " << &num << endl;

    /*
     * Referencing a variable is creating a "copy" of that 
     * variable but sharing the address, so, also the value.
     *
     * References are commonly used with parameters to functions.
     *
     */

    return 0;
}