//============================================================================
// Name        : if-else.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "1. Add Record\t\t 1" << endl;
	cout << "2. Delete Record\t 2" << endl;
	cout << "3. View Record\t\t 3" << endl;
	cout << "4. Search for record\t 4" << endl;
	cout << "5. Quit\t\t\t 5" << endl;

	cout << "Enter your selection > " << flush;
	int value;

	cin >> value;

	if(value == 5){
		cout << "Application quitting" << endl;

	}

	return 0;
}
