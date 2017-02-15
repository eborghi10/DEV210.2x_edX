/*
 * Teacher.h
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#ifndef TEACHER_H_
#define TEACHER_H_

#include <string>

class Teacher {
private:
	std::string firstName;
	std::string lastName;
	int age;
	std::string address;
	std::string city;
	long phoneNumber;
public:
	Teacher();
	Teacher(std::string, std::string, int, std::string, std::string, long);
	virtual ~Teacher();

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

	void GradeStudent();
	void SitInClass();
};

#endif /* TEACHER_H_ */
