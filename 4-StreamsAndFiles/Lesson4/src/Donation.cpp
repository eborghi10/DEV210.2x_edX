/*
 * Donation.cpp
 *
 *  Created on: 23 Feb 2017
 *      Author: emiliano
 */

#include "Donation.h"

void Donation::write(std::ostream & os) {
	/**
	 * ostream is the base class, you can specify any subclass instead.
	 * ie., a string-stream object, a file stream.
	 *
	 */
	os.write((char*)&name, sizeof(std::string));
	os.write((char*)&amount, sizeof(int));
}

void Donation::read(std::istream & is) {
	/**
	 * istream is the super class, you could pass the subclass string-stream or file stream.
	 *
	 */
	is.read((char*)&name, sizeof(std::string));
	is.read((char*)&amount, sizeof(int));
}
