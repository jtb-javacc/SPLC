/*
 * Variable.h
 *
 *  Created on: 28 d�c. 2016
 *      Author: FrancisANDRE
 */

#pragma once

#include "Node.h"

class Variable : public Node {
public:
	Variable();
	virtual ~Variable();

private:
	string name;
};


