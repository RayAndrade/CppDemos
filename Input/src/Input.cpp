//============================================================================
// Name        : Input.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string text = "Hello";
	cout << text << endl;

	cout << "Enter your name " << flush;
	string input;

	cin >> input;

	cout << "Hello " << input << endl;

	int value;
	cout << "Enter a number" << flush;

	cin >> value;

	cout << "You entered " << value << endl;


	return 0;
}