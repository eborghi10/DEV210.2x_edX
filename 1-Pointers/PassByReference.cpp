#include <iostream>

/*
 * To compile: g++ PassByReference.cpp -o execute.sh
 *
 * To run: ./execute
 * (If a "permission denied" error appears, type: $chmod +x execute)
 *
 */

using namespace std;

void passByRef(int &num1);  

int main()
{
    int num = 3;
    cout << "In main() -> [num]: " << num << endl;

    passByRef(num);

    cout << "Back in main() -> [num]: " << num << endl;

    /*
     * Because we passed num as a reference, C++ was able to access
     * the contents of num directly in memory rather than a copy of
     * the value held by num.
     *
     */

    return 0;
}

void passByRef(int &num_ref)   // &num_ref = num
{
    cout << "In passByRef(), before -> [num_ref]: " << num_ref << endl;

    // modify num_ref which will now change num
    num_ref++;
    cout << "> num_ref++" << endl;
    cout << "In passByRef(), after -> [num_ref]: " << num_ref << endl;
}