/*
 * Person.h
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#ifndef PERSON_H_
#define PERSON_H_

#pragma once

#include <string>

class Person {
private:
	std::string firstName;
	std::string lastName;
protected:
	/**
	 * When dealing with inheritance in your C++ code, you may find situations
	 * where you would like to keep certain members of the base class private
	 * to the "outside world" but public to derived classes of that base class.
	 */
	int age;
public:
	Person();
	Person(std::string fName, std::string lName);
	Person(std::string fName, std::string lName, int age);
	virtual ~Person();

	void SayHello();
	void displayNameAge() const;
};

#endif /* PERSON_H_ */
