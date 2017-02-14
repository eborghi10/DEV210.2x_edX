//============================================================================
// Name        : SplittingClasses.cpp
// Author      : Ing. Emiliano Borghi
// Version     :
// Copyright   : Your copyright notice
// Description : Testing splitting classes (Math.cpp, Math.h)
//============================================================================

// We include Math.h because the compiler needs to know what functions are
// part of this class.
#include "Math.h"
#include <iostream>

using namespace std;

int main() {

	/*
	 * Because the class was declared as static, there is no need of create
	 * the object.
	 */
	int base = 2;
	int exp = 10;
	int result = Math::pow(base, exp);

	cout << "> " << base << "^" << exp << " = " << result << endl;

	return 0;
}
