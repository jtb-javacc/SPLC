/*
 * Integer.cpp
 *
 *  Created on: 28 déc. 2016
 *      Author: FrancisANDRE
 */

#include "Integer.h"

Integer::Integer() {
}
Integer::Integer(int value) : integer(value) {
}

Integer::~Integer() {
}

Integer* Integer::operator+(const Integer& value) {
	return new Integer(integer + value.integer);
}
