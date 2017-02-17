//============================================================================
// Name        : StreamOutputFormatting.cpp
// Author      : Ing. Emiliano Borghi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "demoFieldWidth.h"
#include "demoJustification.h"
#include "demoFloatingPoint.h"
#include "demoMiscManipulators.h"

using namespace std;

int main() {

	cout << "### Field Width ###" << endl << endl;
	demoFieldWidth();
	cout << endl << "### Justification ###" << endl << endl;
	demoJustification();
	cout << endl << "### Floating Point ###" << endl << endl;
	demoFloatingPoint();
	cout << endl << "### Miscelaneous Manipulators ###" << endl << endl;
	demoMiscManipulators();

	return 0;
}
