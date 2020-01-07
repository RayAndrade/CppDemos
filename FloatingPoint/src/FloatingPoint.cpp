//============================================================================
// Name        : FloatingPoint.cpp
// Author      : Ray Andrade
// Version     : C++Tutorial for Beginners 10 - Floating Point Variable Types
// Copyright   : Your copyright notice
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float fValue = 76.4;
	cout << "fixed :" << fixed << fValue << endl;
	cout << "scientific: " << scientific << fValue << endl;
	cout << "sizeof float: " << sizeof(float) << endl;
	cout << "setprecision: " << setprecision(20) << fixed << fValue << endl;
	double dValue = 76.4;
	cout << "double: " << setprecision(20) << fixed << dValue << endl;

	long double lValue = 123.00000000000045678987654321;
	cout << "long double: " << setprecision(20) << fixed << lValue << endl;


	return 0;
}
