/*
 * Lockable.h
 *
 *  Created on: 16 Feb 2017
 *      Author: emiliano
 */

#ifndef LOGGABLE_H_
#define LOGGABLE_H_


class Loggable {
public:
	virtual void log(const std::string & message) const = 0;
};



#endif /* LOGGABLE_H_ */
