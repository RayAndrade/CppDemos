/*
 * Cat.cpp
 *
 *  Created on: Jan 17, 2020
 *      Author: ray
 */
#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak(){
	if(happy) {
		cout << "hello" << endl;
	}else {
		cout << "boo" << endl;
	}
}
 void Cat::makeHappy(){
	 happy = true;
 }
 void Cat::makeSad(){
 	 happy = false;
  }
