/*
 * Student.cpp
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#include <iostream>

#include "Student.h"

Student::Student() {}

Student::Student(std::string firstName, std::string lastName,
		int age, std::string address, std::string city, long phoneNumer) {

	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	this->address = address;
	this->city = city;
	this->phoneNumber = phoneNumber;
}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

void Student::SitInClass() {
	std::cout << "Sitting in main theater" << std::endl;
}

void Student::setFirstName(std::string firstName) {
	this->firstName = firstName;
}
std::string Student::getFirstName() {
	return this->firstName;
}
void Student::setLastName(std::string lastName) {
	this->lastName = lastName;
}
std::string Student::getLastName() {
	return this->lastName;
}
void Student::setAge(int age) {
	this->age = age;
}
int Student::getAge() {
	return this->age;
}
void Student::setAddress(std::string address) {
	this->address = address;
}
std::string Student::getAddress() {
	return this->address;
}
void Student::setCity(std::string city) {
	this->city = city;
}
std::string Student::getCity() {
	return this->city;
}
void Student::setPhoneNumber(long phoneNumber) {
	this-> phoneNumber = phoneNumber;
}
long Student::getPhoneNumber() {
	return this->phoneNumber;
}
