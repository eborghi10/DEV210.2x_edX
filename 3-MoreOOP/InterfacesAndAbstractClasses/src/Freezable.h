/*
 * Freezable.h
 *
 *  Created on: 16 Feb 2017
 *      Author: emiliano
 */

#ifndef FREEZABLE_H_
#define FREEZABLE_H_

#pragma once

/**
 * Pure virtual class (interface), representing the freezable capability
 *
 */

class Freezable {
public:
	virtual void freeze() = 0;
	virtual void unfreeze() = 0;
};


#endif /* FREEZABLE_H_ */
