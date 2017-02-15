/*
 * Person.cpp
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#include <iostream>
#include "Person.h"

Person::Person() : firstName("John"), lastName("Doe"), age(0) {

}

Person::Person(std::string fName, std::string lName) :
		firstName(fName), lastName(lName), age(0) {

}

Person::Person(std::string fName, std::string lName, int age) :
		firstName(fName), lastName(lName), age(age) {

}

Person::~Person() {
	std::cout << "Destructor called" << std::endl;
}

void Person::SayHello() {
	std::cout << "Hello!" << std::endl;
}

void Person::displayNameAge() const {
	std::cout << "\nName: " << this->firstName << " " << this->lastName << std::endl;
	std::cout << "Age: " << this->age << std::endl;
}
