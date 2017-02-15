/*
 * Student.h
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>

class Student {
private:
	std::string firstName;
	std::string lastName;
	int age;
	std::string address;
	std::string city;
	long phoneNumber;
public:
	Student();
	Student(std::string, std::string, int, std::string, std::string, long);
	virtual ~Student();

	void setFirstName(std::string);
	std::string getFirstName();
	void setLastName(std::string);
	std::string getLastName();
	void setAge(int);
	int getAge();
	void setAddress(std::string);
	std::string getAddress();
	void setCity(std::string);
	std::string getCity();
	void setPhoneNumber(long);
	long getPhoneNumber();

	void SitInClass();
};

#endif /* STUDENT_H_ */
