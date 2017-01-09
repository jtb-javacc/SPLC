/*
 * Boolean.cpp
 *
 *  Created on: 28 d�c. 2016
 *      Author: FrancisANDRE
 */

#include "Boolean.h"

Boolean::Boolean(bool value) : boolean(value){
}

Boolean::~Boolean() {
}

Boolean* Boolean::operator||(const Boolean& value) {
	return new Boolean(boolean || value.boolean);
}
Boolean* Boolean::operator&&(const Boolean& value) {
	return new Boolean(boolean && value.boolean);
}
