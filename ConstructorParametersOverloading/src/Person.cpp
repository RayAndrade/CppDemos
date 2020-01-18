/*
 * Person.cpp
 *
 *  Created on: Jan 18, 2020
 *      Author: ray
 */

#include <sstream>
#include "Person.h"


Person::Person(){
	name= "undefined";
	age = 0;
}

Person::Person(string NewName, int newAge){
	name= NewName;
	age = newAge;
}


string Person::toString(){

	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();

}
