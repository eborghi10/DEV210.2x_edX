/*
 * Person.cpp
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#include "Person.h"

Person::Person() : name("Unknown name"), age(0) {}

Person::Person(std::string & name, int age) :
		name(name), age(age) {}

Person::~Person() {
	std::cout << "Goodbye from the Person destructor" << std::endl;
}

void Person::displayInfo() const {
	/**
	 * Overrided function!!
	 * (This is the base function. It'll be overrided by other class)
	 *
	 * NOTE: the virtual keyword must not be placed
	 */
	std::cout << this->name << ", " << this->age << std::endl;
}

