//============================================================================
// Name        : DataMembers.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : Your copyright notice
// Description : C++Tutorial for Beginners 30 - Data Members, a.k.a. Instance Variables
//============================================================================

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	Cat jim;
	jim.makeHappy();
	jim.speak();

	Cat bob;
	bob.makeSad();
	bob.speak();

	jim.speak();
	return 0;
}
