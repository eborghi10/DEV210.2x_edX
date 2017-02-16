/*
 * Person.cpp
 *
 *  Created on: 16 Feb 2017
 *      Author: emiliano
 */

#include "Person.h"
#include <iostream>
#include <string>

Person::Person()
	: firstName("Unknown first name"), lastName("Unknown last name"), age(0),
	  race("Unknown race"), phoneNumber(00000000) {}

Person::Person(const std::string & fName, const std::string & lName, int age,
		const std::string & race, long number)
	: firstName(fName), lastName(lName), age(age),
	  race(race), phoneNumber(number) {}

Person::~Person() {}

void Person::OutputAge() {
	/**
	 * virtual function
	 */
	std::cout << "I am " << this->age << " years old" << std::endl;
}
