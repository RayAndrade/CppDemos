//============================================================================
// Name        : OtherTypes.cpp
// Author      : Ray Andrade
// Version     : C++Tutorial for Beginners 11 - Char and Bool
// Copyright   : Your copyright notice
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true;
	cout << "bValue: " << bValue << endl;

	char cValue = 105;
	cout << "cValue: " << cValue << endl;

	char cValue1 = 'd';
	cout << "cValue1: " << cValue1 << endl;
	cValue1 =100;
	cout << "cValue1: " << cValue1 << endl;
	cout << "cast cValue1: " << (int)cValue1 << endl;

	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wValue = 'i';
	cout << wValue << endl;

	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;


	return 0;
}
