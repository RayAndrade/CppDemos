/*
 * Cat.cpp
 *
 *  Created on: Jan 17, 2020
 *      Author: ray
 */

#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat(){
	cout << "Cat created" << endl;
	happy = true;
}

Cat::~Cat(){
	cout << "Cat destroid" << endl;
}

void Cat::speak(){
	if(happy) {
		cout << "hello" << endl;
	}else {
		cout << "boo" << endl;
	}
}
