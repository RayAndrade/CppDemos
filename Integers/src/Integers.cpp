//============================================================================
// Name        : Integers.cpp
// Author      : C++Tutorial for Beginners 9 - Integer Variable Types
// Version     : https://www.youtube.com/watch?v=oVo0NVGUsU0&list=PLmpc3xvYSk4wDCP5zjt2QQXe8-JGHa4Kt&index=9
// Copyright   : Your copyright notice
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>
#include <limits.h>
using namespace std;

int main() {

	int value1 = 1000000000;
	cout << value1 << endl;

	int value2 = 10000000000;
	long value3 = 10000000000;

	cout << value2 << endl;
	cout << value3 << endl;

	cout << INT_MAX << endl;
	cout << value3 - INT_MAX << endl;

	cout << INT_MIN << endl;

	cout << "Size of int " << sizeof(int) << endl;
	cout << "Size of short int " << sizeof(short int) << endl;
	cout << "Size of unsigned int " << sizeof(unsigned int) << endl;

	return 0;
}
