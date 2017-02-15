/*
 * Person.h
 *
 *  Created on: 14 Feb 2017
 *      Author: emiliano
 */

#pragma once

#include <string>

/**
 * A constructor is used to initialize data members of a class.
 * It contains the same name as the class itself, has no return type.
 */

class Dog
{
private:
	std::string firstName;
	std::string lastName;
	int age;
public:
	Dog();
	Dog(std::string fName, std::string lName);
	Dog(std::string fName, std::string lName, int age);
	~Dog();

	void SayHello();
};
