/*
 * Person.h
 *
 *  Created on: 16 Feb 2017
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
	int age;
	std::string race;
protected:
	long phoneNumber;
public:
	Person();
	Person(const std::string &, const std::string &, int, const std::string &, long);
	virtual ~Person();

	virtual void OutputAge();

	// Pure virtual function
	virtual void OutputIdentity() = 0;
};

#endif /* PERSON_H_ */
