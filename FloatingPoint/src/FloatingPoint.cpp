//============================================================================
// Name        : FloatingPoint.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float fValue = 76.4;
	cout << fixed << fValue << endl;
	cout << scientific << fValue << endl;
	cout << sizeof(float) << endl;
	cout << setprecision(20) << fixed << fValue << endl;
	double dValue = 76.4;
	cout << setprecision(20) << fixed << dValue << endl;



	return 0;
}
