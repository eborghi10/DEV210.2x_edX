#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>

using namespace std;

class Person
{
private:
    string firstName;
    string lastName;
    int age;
public:
    // Constructors
    Person();
    Person(string fName, string lName);
    Person(string fName, string lName, int age);
    // Destructor
    ~Person();

    void SetFirstName(string fName);
    string GetFirstName();

    void SetLastName(string lName);
    string GetLastName();

    void SetAge(int age);
    int GetAge();

    void SayHello();
};

Person::Person() {}

Person::Person(string fName, string lName) {
    firstName = fName;
    lastName = lName;
}

Person::Person(string fName, string lName, int age) {
    firstName = fName;
    lastName = lName;
    age = age;
}

Person::~Person() {
    cout << "Destructor called" << endl;
}

void Person::SetFirstName(string fName) {
    this->firstName = fName;
}
string Person::GetFirstName() {
    return this->firstName;
}

void Person::SetLastName(string lName) {
    this->lastName = lName;
}
string Person::GetLastName() {
    return this->lastName;
}

void Person::SetAge(int age) {
    this->age = age;
}
int Person::GetAge() {
    return this->age;
}

void Person::SayHello() {
    cout << "Hello, World!" << endl;
}

#endif