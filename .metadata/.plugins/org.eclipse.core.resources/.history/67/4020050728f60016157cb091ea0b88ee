/*
 * TempStat.cpp
 *
 *  Created on: 18 Feb 2017
 *      Author: emiliano
 */

#include "TempStat.h"

void TempStat::write(std::ostream & os) {
	/**
	 * ostream is the base class, you can specify any subclass instead.
	 * ie., a string-stream object, a file stream.
	 *
	 */
	os.write((char*)&minimum, sizeof(double));
	os.write((char*)&maximum, sizeof(double));
}

void TempStat::read(std::istream & is) {
	/**
	 * istream is the super class, you could pass the subclass string-stream or file stream.
	 *
	 */
	is.read((char*)&minimum, sizeof(double));
	is.read((char*)&maximum, sizeof(double));
}
