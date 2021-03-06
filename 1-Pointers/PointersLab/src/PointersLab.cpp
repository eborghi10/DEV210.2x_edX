//============================================================================
// Name        : PointersLab.cpp
// Author      : Ing. Emiliano Borghi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>	// For setprecision()
using namespace std;

// 1) Create a new C++ console application called PointersLab.

// 23) Create a simple class in your C++ application called Person.
class Person {
	// 24) Give Person member variables for name, age, height, and weight.
	string name;
	int age;
	float height;
	int weight;
public:
	Person(string name, int age, float height, int weight) {
		this->name = name;
		this->age = age;
		this->height = height;
		this->weight = weight;
	}
	~Person(){}
	void SetName(string name){
		this->name = name;
	}
	string GetName() {
		return this->name;
	}
	void SetAge(int age) {
		this->age = age;
	}
	int GetAge() {
		return this->age;
	}
	void SetHeight(float height) {
		this->height = height;
	}
	float GetHeight() {
		return this->height;
	}
	void SetWeight(int weight) {
		this->weight = weight;
	}
	int GetWeight() {
		return this->weight;
	}
};

void PassByValue(int);
void PassByRef(int&);
void ModifyPerson(Person&);

int main() {

	// 2) In your main() function, create two variables.
	// One variable needs to an intrinsic integer variable named
	// num1 and the second needs to be a pointer to an int pNum.
	int num1;
	int *pNum = new int;

	// 3) Assign the value 3 to num1.
	num1 = 3;

	// 4) Assign the value 5 to the memory location stored in pNum.
	*pNum = 5;

	// 7) Call PassByValue and pass in num1 as the argument.
	PassByValue(num1);

	// 9) After the call returns to main(), output the value of num1
	// to the console window again.
	cout << "num1 in main(): " << num1 << endl;

	// 11) Call PassByRef and send pNum as the argument.
	PassByRef(*pNum);

	// 14) After the call returns to main(), output the value of
	// pNum to the console.
	cout << "pNum in main(): " << *pNum << endl;

	// 15) Call PassByValue and pass in pNum as an argument.
	PassByValue(*pNum);
	cout << "pNum in main(): " << *pNum << endl;

	/**
	 * 16) Document any error messages for the lab assessment
	 * that might occur during your lab.
	 *
	 * - 13) Modify the value inside PassByRef().
	 * I was modifying the pointer (*num=50).
	 *
	 * - 14) Printing the value of *pNum in main().
	 * I was showing the address (pNum).
	 *
	 */

	// 17) Create a pointer variable to a double, and allocate
	// memory for it using the new keyword.
	double *pDouble = new double;

	// 18) Assign a value to the memory location.
	*pDouble = 5.4;

	// 19) Use the dereference operator, get the value and
	// output it to the console.
	cout << "\n\n*pDouble = " << *pDouble << endl;

	// 20) Deallocate the memory for that variable.
	delete pDouble;

	// 21) Output the value stored in the memory location for that variable again.
	cout << "> " << *pDouble << endl;

	/**
	 * 22) Document any errors experienced for the lab assessment.
	 *
	 * - The value outputted in "21" is = 0.
	 */

	// 26) Instantiate a Person object in your main() method and assign values
	// to the member variables.
	Person *person = new Person("Pepe", 25, 1.80, 80);

	// 27) Output the values stored in the member variables to the console window.
	cout << "\n\nPerson: " << endl;
	cout << "\tName: " << person->GetName() << endl;
	cout << "\tAge: " << person->GetAge() << endl;
	cout << "\tHeight: " << fixed << setprecision(2) << person->GetHeight() << endl;
	cout << "\tWeight: " << person->GetWeight() << endl;

	// 28) Call the ModifyPerson() function, passing in your Person object.
	ModifyPerson(*person);

	// 30) Back in main(), output the values stored in the Person object you
	// created. Did the name change?
	cout << "\nNew name: " << person->GetName() << endl;

	return 0;
}

void PassByValue(int num) {
	// 5) Create a function called PassByValue that accepts an integer argument.
	// 6) Inside PassByValue, output a text string indicating the name of
	// the function you are in.
	cout << "> [Function] PassByValue()" << endl;

	// 8) Modify the value of num1 inside the PassByValue function and output
	// the new value to the console window.
	cout << "++num = " << ++num << endl;
}

void PassByRef(int &num) {
	// 10) Create a function called PassByRef that accepts a reference
	// variable as an argument.
	// 12) Output a statement indicating the current function name.
	cout << "> [Function] PassByRef()" << endl;

	// 13) Modify the value of pNum, setting it to 50,  and output
	// the value to the console.
	num = 50;
	cout << "num = " << num << endl;
}

// 25) Create a function in your application called ModifyPerson() that
// accepts a Person object as an argument. NOTE: This function should be
// in the application area and not inside the Person class.
void ModifyPerson(Person &person) {
	// 29) Inside the ModifyPerson() function, change the value in the name
	// member variable.
	person.SetName("Miguel");
}
