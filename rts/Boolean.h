/*
 * Boolean.h
 *
 *  Created on: 28 déc. 2016
 *      Author: FrancisANDRE
 */

#pragma once

#include "Node.h"

class Boolean ; public Node {
public:
	Boolean();
	Boolean(bool value);
	virtual ~Boolean();
private:
	bool boolean;
};


