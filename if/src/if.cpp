//============================================================================
// Name        : if.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string password = "hello";
	cout << "Enter your password: " << flush;

	string input;
	cin >> input;

	// cout << "'" << input << "'" << endl;

	if(input == password){
		cout << "you got in!" << endl;
	}

	if(input != password){
			cout << "I do not know you!" << endl;
	}


	return 0;
}
