//============================================================================
// Name        : ConstructorParametersOverloading.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : Your copyright notice
// Description : C++Tutorial for Beginners 34 - Overloading Constructors
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	Person person1;
	Person person2("Rita");
	Person person3("Tom", 21);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;

	return 0;
}
