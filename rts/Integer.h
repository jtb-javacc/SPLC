/*
 * Integer.h
 *
 *  Created on: 28 déc. 2016
 *      Author: FrancisANDRE
 */

#pragma once

#include "Node.h"

class Integer : public Node {
public:
	Integer();
	Integer(int value);
	virtual ~Integer();

	Integer* operator+(const Integer& value);

private:
	int integer;
};


