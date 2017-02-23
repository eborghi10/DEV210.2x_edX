/*
 * Donation.h
 *
 *  Created on: 19 Feb 2017
 *      Author: emiliano
 */

#ifndef DONATION_H_
#define DONATION_H_

#pragma once

#include <iostream>
#include <sstream>

class Donation {

public:
	
	std::string name;
	int amount;

	Donation(std::string dName, int dAmount)
		: name(dName), amount(dAmount) {}
	
	~Donation() {}

	void showData() {
		std::cout << "Name: " << this->name << "\t$" << this->amount << std::endl;
	}

	std::string getName() {
		return this->name;
	}

	void setName (std::string name) {
		this->name = name;
	}

	int getAmount() {
		return this->amount;
	}

	void setAmount(int amount) {
		this->amount = amount;
	}

	void write(std::ostream & os);

	void read(std::istream & is);
};

// The following definitions are inline-d to avoid errors
inline std::ostream & operator<<(std::ostream & os, const Donation & don) {
	return (os << don.name << "\t" << don.amount);
}

inline std::istream & operator>>(std::istream & is, const Donation & don) {
	return (is >> don.name >> don.amount);
}

#endif /* DONATION_H_ */
