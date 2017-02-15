/*
 * Handle.h
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#ifndef HANDLE_H_
#define HANDLE_H_

#pragma once

#include "Body.h"

class Handle {
private:
// The "handle" class typically maintains an internal instance of the "body" class.
	Body *body;
public:
	Handle();
	virtual ~Handle();

	void someOperationOnBody();
};

#endif /* HANDLE_H_ */
